/*
 * XREFs of IoStartPacket @ 0x140283BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeInsertByKeyDeviceQueue @ 0x140294EC0 (KeInsertByKeyDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x140294F70 (KeInsertDeviceQueue.c)
 */

void __stdcall IoStartPacket(PDEVICE_OBJECT DeviceObject, PIRP Irp, PULONG Key, PDRIVER_CANCEL CancelFunction)
{
  KIRQL v8; // bp
  unsigned __int8 CurrentIrql; // r14
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdx
  KDEVICE_QUEUE *p_DeviceQueue; // rcx
  BOOLEAN inserted; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( CancelFunction )
  {
    v8 = KeAcquireQueuedSpinLock(7uLL);
    Irp->CancelRoutine = CancelFunction;
  }
  p_Tail = &Irp->Tail;
  p_DeviceQueue = &DeviceObject->DeviceQueue;
  if ( Key )
    inserted = KeInsertByKeyDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry, *Key);
  else
    inserted = KeInsertDeviceQueue(p_DeviceQueue, &p_Tail->Overlay.DeviceQueueEntry);
  if ( inserted )
  {
    if ( CancelFunction )
    {
      if ( Irp->Cancel )
      {
        Irp->CancelRoutine = 0LL;
        Irp->CancelIrql = v8;
        ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))CancelFunction)(DeviceObject, Irp);
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v8);
      }
    }
  }
  else
  {
    DeviceObject->CurrentIrp = Irp;
    if ( CancelFunction )
    {
      if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x200) != 0 )
        Irp->CancelRoutine = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v8);
    }
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))DeviceObject->DriverObject->DriverStartIo)(DeviceObject, Irp);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
}
