/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140290BD0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140294BD0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140294C80 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140294D00 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140294DD0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140294EA0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle);
    OldIrql = LockHandle->OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle);
  }
}
