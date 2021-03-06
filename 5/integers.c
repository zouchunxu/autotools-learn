/* Generated by re2c 1.0.1 on Sat Apr  6 01:05:12 2019 */
#line 1 "integers.re"
#include <stdio.h>

enum num_t { ERR, BIN, OCT, DEC, HEX };

static int lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    
#line 12 "integers.c"
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 18 "integers.re"
	{ return ERR; }
#line 34 "integers.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy6;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy8;
	case 'B':
	case 'b':	goto yy11;
	case 'X':
	case 'x':	goto yy12;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x00:	goto yy13;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy15;
	default:	goto yy3;
	}
yy6:
	++YYCURSOR;
#line 20 "integers.re"
	{ return OCT; }
#line 73 "integers.c"
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy6;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':	goto yy8;
	default:	goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	goto yy3;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy10;
	goto yy18;
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy10;
	goto yy20;
yy13:
	++YYCURSOR;
#line 21 "integers.re"
	{ return DEC; }
#line 103 "integers.c"
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy13;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy15;
	default:	goto yy10;
	}
yy17:
	yych = *++YYCURSOR;
yy18:
	switch (yych) {
	case 0x00:	goto yy21;
	case '0':
	case '1':	goto yy17;
	default:	goto yy10;
	}
yy19:
	yych = *++YYCURSOR;
yy20:
	switch (yych) {
	case 0x00:	goto yy23;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy19;
	default:	goto yy10;
	}
yy21:
	++YYCURSOR;
#line 19 "integers.re"
	{ return BIN; }
#line 162 "integers.c"
yy23:
	++YYCURSOR;
#line 22 "integers.re"
	{ return HEX; }
#line 167 "integers.c"
}
#line 23 "integers.re"

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        switch (lex(argv[i])) {
            case ERR: printf("error\n"); break;
            case BIN: printf("binary\n"); break;
            case OCT: printf("octal\n"); break;
            case DEC: printf("decimal\n"); break;
            case HEX: printf("hexadecimal\n"); break;
        }
    }
    return 0;
}
