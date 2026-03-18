/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x14015D014
 * Callers:
 *     PopWnfAudioCallback @ 0x140720080 (PopWnfAudioCallback.c)
 * Callees:
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1406721B4 (PopReleasePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140720134 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsNotifyAudioState @ 0x14072017C (PopStatsNotifyAudioState.c)
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
