/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1401946E0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408A3200 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F8030 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
