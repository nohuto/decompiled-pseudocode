/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14074E4A8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140174608 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x140192A20 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3B80 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmEnableProfile @ 0x140756E3C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x140762F00 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A70 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x14086B300 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14087A660 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14074F044 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(v2) = 0;
  if ( a1 )
    v2 |= 0x800u;
  else
    v2 |= 0x1000u;
  return PpmReapplyPerfPolicy(&v2);
}
