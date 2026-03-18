/*
 * XREFs of PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408A2940
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406A0544 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14071E2A4 (PopHandleExecutionRequiredEnablementUpdate.c)
 */

void PopExecutionRequiredTimeoutWorkerRoutine()
{
  unsigned __int64 v0; // rcx

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  PopHandleExecutionRequiredEnablementUpdate(v0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
