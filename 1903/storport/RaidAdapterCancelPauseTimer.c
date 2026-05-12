/*
 * XREFs of RaidAdapterCancelPauseTimer @ 0x1C0033240
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001B40 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0033304 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0016638 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterCancelPauseTimer(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // di

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1);
  return v3;
}
