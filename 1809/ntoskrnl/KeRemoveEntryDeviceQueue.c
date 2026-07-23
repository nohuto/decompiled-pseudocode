/*
 * XREFs of KeRemoveEntryDeviceQueue @ 0x140295220
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRemoveEntryDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN Inserted; // si
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&DeviceQueue->Lock, &LockHandle);
  Inserted = DeviceQueueEntry->Inserted;
  if ( Inserted == 1 )
  {
    DeviceQueueEntry->Inserted = 0;
    Flink = DeviceQueueEntry->DeviceListEntry.Flink;
    Blink = DeviceQueueEntry->DeviceListEntry.Blink;
    if ( (PKDEVICE_QUEUE_ENTRY)DeviceQueueEntry->DeviceListEntry.Flink->Blink != DeviceQueueEntry
      || (PKDEVICE_QUEUE_ENTRY)Blink->Flink != DeviceQueueEntry )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v7 = DeviceQueue->1;
    if ( DeviceQueueEntry == (PKDEVICE_QUEUE_ENTRY)(*(__int64 *)&v7 >> 8) )
      DeviceQueue->1 = v7;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return Inserted;
}
