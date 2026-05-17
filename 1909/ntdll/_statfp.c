/*
 * XREFs of _statfp @ 0x180095E50
 * Callers:
 *     _raise_exc_ex @ 0x180095840 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A3A50 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
