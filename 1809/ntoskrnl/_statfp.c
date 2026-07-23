/*
 * XREFs of _statfp @ 0x14019A440
 * Callers:
 *     _raise_exc_ex @ 0x14019A084 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1401C73D0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
