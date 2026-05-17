/*
 * XREFs of _statfp @ 0x180098F0C
 * Callers:
 *     _raise_exc_ex @ 0x1800988F0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A6D80 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
