/*
 * XREFs of _clrfp @ 0x180098E3C
 * Callers:
 *     _raise_exc_ex @ 0x1800988F0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x180099E6A (_fclrf.c)
 *     _get_fpsr @ 0x1800A6D80 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
