/*
 * XREFs of _statfp @ 0x1C00C135C
 * Callers:
 *     _raise_exc_ex @ 0x1C00C0FD0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00C1410 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
