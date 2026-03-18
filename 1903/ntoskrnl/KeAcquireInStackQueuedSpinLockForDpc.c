/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x1402A7690
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x1402AB5B0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1402AB670 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402AB700 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1402AB7E0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x1402AB8C0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
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
