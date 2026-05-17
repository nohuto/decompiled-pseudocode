/*
 * XREFs of _flsbuf @ 0x1800933C0
 * Callers:
 *     _snprintf @ 0x18008DD00 (_snprintf.c)
 *     _snwprintf @ 0x18008DDB0 (_snwprintf.c)
 *     swprintf @ 0x18008E3F0 (swprintf.c)
 *     _vsprintf_l @ 0x18008E520 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E5F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E6BC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E78C (_vsnwprintf_l.c)
 *     sprintf @ 0x180091440 (sprintf.c)
 *     write_char @ 0x180093C20 (write_char.c)
 *     _soutput_s @ 0x180099538 (_soutput_s.c)
 *     write_char_1 @ 0x180099634 (write_char_1.c)
 *     _swoutput_s @ 0x18009A4CC (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
