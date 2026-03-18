/*
 * XREFs of KeRemoveDeviceQueue @ 0x140294EA0
 * Callers:
 *     IoFreeController @ 0x140282F30 (IoFreeController.c)
 *     IopStartNextPacket @ 0x140284054 (IopStartNextPacket.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140290B40 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140290BD0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *v2; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE *Flink; // rcx
  __int64 v5; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  Flink = (struct _KDEVICE_QUEUE *)DeviceQueue->DeviceListHead.Flink;
  if ( Flink == (struct _KDEVICE_QUEUE *)&DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v2 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    if ( Flink->DeviceListHead.Flink != p_DeviceListHead
      || (v5 = *(_QWORD *)&Flink->Type, *(struct _KDEVICE_QUEUE_ENTRY **)(v5 + 8) != v2) )
    {
      __fastfail(3u);
    }
    p_DeviceListHead->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(v5 + 8) = p_DeviceListHead;
    v2->Inserted = 0;
    v6 = DeviceQueue->1;
    if ( v2 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v6 >> 8) )
      DeviceQueue->1 = v6;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v2;
}
