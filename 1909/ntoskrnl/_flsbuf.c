/*
 * XREFs of _flsbuf @ 0x1401A3380
 * Callers:
 *     _vsnwprintf_l @ 0x14019FA5C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x14019FB8C (_vsnprintf_l.c)
 *     _snprintf @ 0x1401A0070 (_snprintf.c)
 *     _snwprintf @ 0x1401A0130 (_snwprintf.c)
 *     swprintf @ 0x1401A0640 (swprintf.c)
 *     _vswprintf_l @ 0x1401A072C (_vswprintf_l.c)
 *     sprintf @ 0x1401A19D0 (sprintf.c)
 *     _vsprintf_l @ 0x1401A24E4 (_vsprintf_l.c)
 *     write_char_0 @ 0x1401A4618 (write_char_0.c)
 *     _soutput_s @ 0x1401A790C (_soutput_s.c)
 *     _swoutput_s @ 0x1401A7A78 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
