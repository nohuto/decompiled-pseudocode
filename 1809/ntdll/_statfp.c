/*
 * XREFs of _statfp @ 0x180098F1C
 * Callers:
 *     _raise_exc_ex @ 0x180098900 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A6DA0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
