/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x140290EC0
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x140294EC0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140294F70 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140294FF0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1402950C0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x140295190 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
