/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1402A7720
 * Callers:
 *     KeInsertByKeyDeviceQueue @ 0x1402AB5B0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x1402AB670 (KeInsertDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402AB700 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1402AB7E0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeRemoveDeviceQueue @ 0x1402AB8C0 (KeRemoveDeviceQueue.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
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
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
  }
}
