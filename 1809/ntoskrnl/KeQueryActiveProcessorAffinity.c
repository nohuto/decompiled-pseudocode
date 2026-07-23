/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x14018A4D0
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x140867F50 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BC73C (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
