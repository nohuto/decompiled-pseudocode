/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x1402A73F0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x1402AB310 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1402AB3D0 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402AB460 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1402AB540 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x1402AB620 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    KxAcquireQueuedSpinLock((__int64)LockHandle, (volatile __int64 *)SpinLock);
  }
}
