/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x140194EC0
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408A2A40 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F7A14 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
