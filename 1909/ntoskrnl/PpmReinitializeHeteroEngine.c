/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140776088
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14017DF34 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x14019D188 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1403004F0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 *     PpmEnableProfile @ 0x14077FF38 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x14078BE00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x14078C8B0 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408A6E10 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408B64C4 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
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
