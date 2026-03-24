/*
 * XREFs of _clrfp @ 0x14019A230
 * Callers:
 *     _raise_exc_ex @ 0x140199F44 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x14019A33A (_fclrf.c)
 *     _get_fpsr @ 0x1401C7270 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
