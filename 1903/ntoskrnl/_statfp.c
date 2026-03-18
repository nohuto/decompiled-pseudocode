/*
 * XREFs of _statfp @ 0x1401A4B6C
 * Callers:
 *     _raise_exc_ex @ 0x1401A47B0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1401CD840 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
