/*
 * XREFs of ReadAMDMsr @ 0x1401CB0B0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1402B1720 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
