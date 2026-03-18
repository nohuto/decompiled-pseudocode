/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x140142EE8
 * Callers:
 *     PopHandleWakeSources @ 0x140566540 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140566640 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
