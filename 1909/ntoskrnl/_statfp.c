/*
 * XREFs of _statfp @ 0x1401A528C
 * Callers:
 *     _raise_exc_ex @ 0x1401A4ED0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1401CE3C0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
