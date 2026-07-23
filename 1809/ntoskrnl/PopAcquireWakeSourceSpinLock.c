/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x140143008
 * Callers:
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x140567640 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
