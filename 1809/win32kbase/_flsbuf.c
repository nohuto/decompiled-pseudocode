/*
 * XREFs of _flsbuf @ 0x1C00A6B98
 * Callers:
 *     _vsnwprintf_l @ 0x1C00A6598 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1C00A66C0 (_vsnprintf_l.c)
 *     write_char_0 @ 0x1C00A7E4C (write_char_0.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
