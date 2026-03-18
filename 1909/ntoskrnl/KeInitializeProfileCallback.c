/*
 * XREFs of KeInitializeProfileCallback @ 0x14087F04C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E8458 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x1408F4FAC (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140A3C3B8 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int16 __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset(a1, 0, 0xF8uLL);
  *a1 = 16252945;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_WORD *)a1 + 120) = a4;
  return KeCopyAffinityEx((__int64)(a1 + 18), (unsigned __int16 *)KeActiveProcessors);
}
