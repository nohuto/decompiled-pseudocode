/*
 * XREFs of KeInsertDeviceQueue @ 0x1402AB3D0
 * Callers:
 *     IoAllocateController @ 0x140298030 (IoAllocateController.c)
 *     IoStartPacket @ 0x140298B60 (IoStartPacket.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1402A73F0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1402A7480 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

BOOLEAN __stdcall KeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN v4; // di
  BOOLEAN Busy; // al
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  Busy = DeviceQueue->Busy;
  DeviceQueue->Busy = 1;
  if ( Busy == 1 )
  {
    Blink = DeviceQueue->DeviceListHead.Blink;
    if ( Blink->Flink != &DeviceQueue->DeviceListHead )
      __fastfail(3u);
    DeviceQueueEntry->DeviceListEntry.Flink = &DeviceQueue->DeviceListHead;
    v4 = 1;
    DeviceQueueEntry->DeviceListEntry.Blink = Blink;
    Blink->Flink = &DeviceQueueEntry->DeviceListEntry;
    DeviceQueue->DeviceListHead.Blink = &DeviceQueueEntry->DeviceListEntry;
  }
  DeviceQueueEntry->Inserted = v4;
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}
