/*
 * XREFs of KeInitializeProfileCallback @ 0x14084452C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C5790 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x1408B8AF8 (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageSamplerStart @ 0x1408C8B50 (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x1409F6D94 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDAB0 (KeCopyAffinityEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

unsigned __int16 __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset(a1, 0, 0xF8uLL);
  *a1 = 16252945;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_BYTE *)a1 + 242) = 0;
  *((_WORD *)a1 + 120) = a4;
  return KeCopyAffinityEx((__int64)(a1 + 18), (unsigned __int16 *)KeActiveProcessors);
}
