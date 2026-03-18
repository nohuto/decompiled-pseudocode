/*
 * XREFs of _flsbuf @ 0x1C00BB7A8
 * Callers:
 *     _vsnprintf_l @ 0x1C00BB180 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00BB2DC (_vsnwprintf_l.c)
 *     write_char @ 0x1C00BBFD8 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
