/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x14018A370
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140866D10 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BB49C (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDA90 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
