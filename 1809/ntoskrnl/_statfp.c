/*
 * XREFs of _statfp @ 0x14019A300
 * Callers:
 *     _raise_exc_ex @ 0x140199F44 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1401C7270 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
