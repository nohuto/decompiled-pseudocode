/*
 * XREFs of _flsbuf @ 0x1401983F0
 * Callers:
 *     _vsnwprintf_l @ 0x140194C1C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140194D1C (_vsnprintf_l.c)
 *     _snprintf @ 0x1401951E0 (_snprintf.c)
 *     _snwprintf @ 0x140195290 (_snwprintf.c)
 *     swprintf @ 0x140195790 (swprintf.c)
 *     _vswprintf_l @ 0x14019586C (_vswprintf_l.c)
 *     sprintf @ 0x140196AB0 (sprintf.c)
 *     _vsprintf_l @ 0x1401975A4 (_vsprintf_l.c)
 *     write_char_0 @ 0x1401996A4 (write_char_0.c)
 *     _soutput_s @ 0x14019C978 (_soutput_s.c)
 *     _swoutput_s @ 0x14019CAC4 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
