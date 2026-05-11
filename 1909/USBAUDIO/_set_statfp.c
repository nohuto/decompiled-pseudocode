/*
 * XREFs of _set_statfp @ 0x1C0011814
 * Callers:
 *     _exception_enabled @ 0x1C00110B8 (_exception_enabled.c)
 * Callees:
 *     _set_fpsr @ 0x1C0011860 (_set_fpsr.c)
 *     _get_fpsr @ 0x1C00124C0 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
