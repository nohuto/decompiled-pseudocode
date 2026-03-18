/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x1401595B8
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140159598 (IoControlPnpDeviceActionQueue.c)
 *     PopUpdateWakeSourceWorker @ 0x1402F73F0 (PopUpdateWakeSourceWorker.c)
 *     IoFreePoDeviceNotifyList @ 0x14059C61C (IoFreePoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A10670 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  KIRQL v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v0);
  return PpDevNodeUnlockTree(1LL);
}
