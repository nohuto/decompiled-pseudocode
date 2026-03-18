/*
 * XREFs of _flsbuf @ 0x1401A2C60
 * Callers:
 *     _vsnwprintf_l @ 0x14019F33C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14019F46C (_vsnprintf_l.c)
 *     _snprintf @ 0x14019F950 (_snprintf.c)
 *     _snwprintf @ 0x14019FA10 (_snwprintf.c)
 *     swprintf @ 0x14019FF20 (swprintf.c)
 *     _vswprintf_l @ 0x1401A000C (_vswprintf_l.c)
 *     sprintf @ 0x1401A12B0 (sprintf.c)
 *     _vsprintf_l @ 0x1401A1DC4 (_vsprintf_l.c)
 *     write_char_0 @ 0x1401A3EF8 (write_char_0.c)
 *     _soutput_s @ 0x1401A71EC (_soutput_s.c)
 *     _swoutput_s @ 0x1401A7358 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
