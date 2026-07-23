/*
 * XREFs of _flsbuf @ 0x180096490
 * Callers:
 *     _snprintf @ 0x180090D80 (_snprintf.c)
 *     _snwprintf @ 0x180090E30 (_snwprintf.c)
 *     swprintf @ 0x180091470 (swprintf.c)
 *     _vsprintf_l @ 0x1800915A0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x180091674 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18009173C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18009180C (_vsnwprintf_l.c)
 *     sprintf @ 0x180094510 (sprintf.c)
 *     write_char @ 0x180096CF0 (write_char.c)
 *     _soutput_s @ 0x18009C614 (_soutput_s.c)
 *     write_char_1 @ 0x18009C6F0 (write_char_1.c)
 *     _swoutput_s @ 0x18009D554 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
