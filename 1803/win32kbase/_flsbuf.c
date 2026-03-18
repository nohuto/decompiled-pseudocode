/*
 * XREFs of _flsbuf @ 0x1C0074578
 * Callers:
 *     _vsnwprintf_l @ 0x1C0073DC8 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1C0073F64 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1C0075840 (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
