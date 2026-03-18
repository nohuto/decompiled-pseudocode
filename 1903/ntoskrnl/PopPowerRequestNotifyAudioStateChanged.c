/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x14015C974
 * Callers:
 *     PopWnfAudioCallback @ 0x14071E1F0 (PopWnfAudioCallback.c)
 * Callees:
 *     PopReleasePowerRequestPushLock @ 0x14069FCA8 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14071E2A4 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsNotifyAudioState @ 0x14071E2EC (PopStatsNotifyAudioState.c)
 */

__int64 __fastcall PopPowerRequestNotifyAudioStateChanged(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  LOBYTE(v2) = v1;
  BYTE1(PopExecutionRequiredContext) = v1;
  PopStatsNotifyAudioState(v2);
  PopHandleExecutionRequiredEnablementUpdate();
  return PopReleasePowerRequestPushLock(v4, v3);
}
