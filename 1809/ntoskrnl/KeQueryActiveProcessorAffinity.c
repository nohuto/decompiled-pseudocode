/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x14018A390
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140866CF0 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BB47C (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDAB0 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
