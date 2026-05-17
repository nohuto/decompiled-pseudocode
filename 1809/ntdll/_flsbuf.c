/*
 * XREFs of _flsbuf @ 0x180096480
 * Callers:
 *     _snprintf @ 0x180090D70 (_snprintf.c)
 *     _snwprintf @ 0x180090E20 (_snwprintf.c)
 *     swprintf @ 0x180091460 (swprintf.c)
 *     _vsprintf_l @ 0x180091590 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180091664 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009172C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1800917FC (_vsnwprintf_l.c)
 *     sprintf @ 0x180094500 (sprintf.c)
 *     write_char @ 0x180096CE0 (write_char.c)
 *     _soutput_s @ 0x18009C604 (_soutput_s.c)
 *     write_char_1 @ 0x18009C6E0 (write_char_1.c)
 *     _swoutput_s @ 0x18009D544 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
