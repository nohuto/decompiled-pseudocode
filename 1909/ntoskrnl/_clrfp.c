/*
 * XREFs of _clrfp @ 0x1401A51BC
 * Callers:
 *     _raise_exc_ex @ 0x1401A4ED0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1401A52CA (_fclrf.c)
 *     _get_fpsr @ 0x1401CE3C0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
