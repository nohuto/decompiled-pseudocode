/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14015E2C8
 * Callers:
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x14059634C (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
