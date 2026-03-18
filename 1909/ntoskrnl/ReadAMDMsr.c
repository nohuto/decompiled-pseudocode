/*
 * XREFs of ReadAMDMsr @ 0x1401CBC30
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1402B1480 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
