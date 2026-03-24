/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14074E488
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140174628 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x140192A40 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3C80 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmEnableProfile @ 0x140756E1C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x140762EE0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140763A50 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x14086B2E0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14087A640 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14074F024 (PpmReapplyPerfPolicy.c)
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
