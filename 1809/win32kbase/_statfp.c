/*
 * XREFs of _statfp @ 0x1C00AF6A0
 * Callers:
 *     _raise_exc_ex @ 0x1C00AF314 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00AF750 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
