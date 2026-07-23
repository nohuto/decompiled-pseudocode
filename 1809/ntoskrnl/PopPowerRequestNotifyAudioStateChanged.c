/*
 * XREFs of PopPowerRequestNotifyAudioStateChanged @ 0x140141FA0
 * Callers:
 *     PopWnfAudioCallback @ 0x1406DC870 (PopWnfAudioCallback.c)
 * Callees:
 *     PopReleasePowerRequestPushLock @ 0x14058AA6C (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14058AD50 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1406DC924 (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopStatsNotifyAudioState @ 0x1406DC96C (PopStatsNotifyAudioState.c)
 */

__int64 __fastcall PopPowerRequestNotifyAudioStateChanged(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  LOBYTE(v2) = v1;
  BYTE1(PopExecutionRequiredContext) = v1;
  PopStatsNotifyAudioState(v2);
  PopHandleExecutionRequiredEnablementUpdate();
  return PopReleasePowerRequestPushLock();
}
