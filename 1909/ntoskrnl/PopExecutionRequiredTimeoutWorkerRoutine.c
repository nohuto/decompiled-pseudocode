/*
 * XREFs of PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408A2180
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406719F8 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x140720134 (PopHandleExecutionRequiredEnablementUpdate.c)
 */

void PopExecutionRequiredTimeoutWorkerRoutine()
{
  unsigned __int64 v0; // rcx

  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  PopHandleExecutionRequiredEnablementUpdate(v0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
