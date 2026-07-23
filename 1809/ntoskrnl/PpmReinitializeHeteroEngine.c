/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14074F678
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140174728 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x140192B80 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1402E3E70 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmEnableProfile @ 0x14075800C (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407640D0 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x140764C40 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x14086C540 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14087B8A0 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
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
