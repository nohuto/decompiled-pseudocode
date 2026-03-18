/*
 * XREFs of _set_statfp @ 0x1401A5264
 * Callers:
 *     _exception_enabled @ 0x1401A4890 (_exception_enabled.c)
 * Callees:
 *     _set_fpsr @ 0x1401A52C0 (_set_fpsr.c)
 *     _get_fpsr @ 0x1401CE3C0 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
