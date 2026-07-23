/*
 * XREFs of ReadAMDMsr @ 0x1401C4AD0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x14029A610 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
