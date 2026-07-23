/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140290E30
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140294EC0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140294F70 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140294FF0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1402950C0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140295190 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
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
