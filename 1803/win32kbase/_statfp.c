/*
 * XREFs of _statfp @ 0x1C0079AC0
 * Callers:
 *     _raise_exc_ex @ 0x1C0079734 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0079B60 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
