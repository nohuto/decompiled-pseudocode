/*
 * XREFs of _statfp @ 0x1C00103D0
 * Callers:
 *     _raise_exc_ex @ 0x1C0010044 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0011060 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
