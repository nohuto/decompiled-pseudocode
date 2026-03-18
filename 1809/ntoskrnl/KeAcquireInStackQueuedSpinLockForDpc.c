/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140290B40
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140294BD0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140294C80 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140294D00 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140294DD0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140294EA0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 DpcRequestSummary; // r8

  DpcRequestSummary = (unsigned int)KeGetCurrentPrcb()->DpcRequestSummary;
  if ( (DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    KxAcquireQueuedSpinLock((__int64)LockHandle, (volatile __int64 *)SpinLock, DpcRequestSummary);
  }
}
