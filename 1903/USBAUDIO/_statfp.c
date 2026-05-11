/*
 * XREFs of _statfp @ 0x1C00116FC
 * Callers:
 *     _raise_exc_ex @ 0x1C0011370 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0012380 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
