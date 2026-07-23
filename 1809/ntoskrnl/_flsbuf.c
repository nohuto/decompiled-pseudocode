/*
 * XREFs of _flsbuf @ 0x140198550
 * Callers:
 *     _vsnwprintf_l @ 0x140194D7C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140194E7C (_vsnprintf_l.c)
 *     _snprintf @ 0x140195340 (_snprintf.c)
 *     _snwprintf @ 0x1401953F0 (_snwprintf.c)
 *     swprintf @ 0x1401958F0 (swprintf.c)
 *     _vswprintf_l @ 0x1401959CC (_vswprintf_l.c)
 *     sprintf @ 0x140196C10 (sprintf.c)
 *     _vsprintf_l @ 0x140197704 (_vsprintf_l.c)
 *     write_char_0 @ 0x140199804 (write_char_0.c)
 *     _soutput_s @ 0x14019CAD8 (_soutput_s.c)
 *     _swoutput_s @ 0x14019CC24 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
