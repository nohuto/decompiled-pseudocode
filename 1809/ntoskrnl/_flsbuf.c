/*
 * XREFs of _flsbuf @ 0x140198410
 * Callers:
 *     _vsnwprintf_l @ 0x140194C3C (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x140194D3C (_vsnprintf_l.c)
 *     _snprintf @ 0x140195200 (_snprintf.c)
 *     _snwprintf @ 0x1401952B0 (_snwprintf.c)
 *     swprintf @ 0x1401957B0 (swprintf.c)
 *     _vswprintf_l @ 0x14019588C (_vswprintf_l.c)
 *     sprintf @ 0x140196AD0 (sprintf.c)
 *     _vsprintf_l @ 0x1401975C4 (_vsprintf_l.c)
 *     write_char_0 @ 0x1401996C4 (write_char_0.c)
 *     _soutput_s @ 0x14019C998 (_soutput_s.c)
 *     _swoutput_s @ 0x14019CAE4 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
