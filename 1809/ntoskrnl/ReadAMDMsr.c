/*
 * XREFs of ReadAMDMsr @ 0x1401C4970
 * Callers:
 *     KiDisableCacheErrataSource @ 0x14029A420 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
