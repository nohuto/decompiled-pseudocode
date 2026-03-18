/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140772AA8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14017D844 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x14019CA08 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140300A40 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmEnableProfile @ 0x1407495E4 (PpmEnableProfile.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407899A0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078A450 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408A75B0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408B6BF4 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v1 = 2048;
  else
    v1 = 4096;
  v3 = v1;
  return PpmReapplyPerfPolicy(&v3);
}
