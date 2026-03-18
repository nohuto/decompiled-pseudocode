/*
 * XREFs of _clrfp @ 0x1401A4A9C
 * Callers:
 *     _raise_exc_ex @ 0x1401A47B0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1401A4BAA (_fclrf.c)
 *     _get_fpsr @ 0x1401CD840 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
