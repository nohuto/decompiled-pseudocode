/*
 * XREFs of IoRegisterFileSystem @ 0x14070E3C0
 * Callers:
 *     RawInitialize @ 0x1409D4DD0 (RawInitialize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x14016C640 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     FsRtlSetDriverBacking @ 0x14070E560 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v8; // rax
  __int64 *v9; // rdi
  void (__fastcall *v10)(PDEVICE_OBJECT, struct _LIST_ENTRY *); // rax
  __int64 v11; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Blink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v14; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  if ( DeviceType == 20 )
  {
    v5 = &IopNetworkFileSystemQueueHead;
  }
  else
  {
    switch ( DeviceType )
    {
      case 3u:
        v5 = &IopCdRomFileSystemQueueHead;
        break;
      case 8u:
        v5 = &IopDiskFileSystemQueueHead;
        break;
      case 0x20u:
        v5 = &IopTapeFileSystemQueueHead;
        break;
      default:
        goto LABEL_13;
    }
    DeviceObject->DriverObject->Flags |= 0x80u;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    Flink = (struct _LIST_ENTRY *)v5[1];
    p_Queue = &DeviceObject->Queue;
    Blink = Flink->Blink;
    if ( Blink->Flink == Flink )
    {
      p_Queue->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = Blink;
      Blink->Flink = &p_Queue->ListEntry;
      Flink->Blink = &p_Queue->ListEntry;
      goto LABEL_13;
    }
LABEL_26:
    __fastfail(3u);
  }
  Flink = (struct _LIST_ENTRY *)*v5;
  if ( (Flags & 0x200) != 0 )
  {
    v14 = &DeviceObject->Queue;
    if ( (__int64 *)Flink->Blink == v5 )
    {
      v14->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v5;
      Flink->Blink = &v14->ListEntry;
      *v5 = (__int64)v14;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  v7 = (struct _LIST_ENTRY *)v5;
  while ( Flink != (struct _LIST_ENTRY *)v5 && ((__int64)Flink[-2].Flink & 0x200) != 0 )
  {
    v7 = Flink;
    Flink = Flink->Flink;
  }
  Flink = v7->Flink;
  v8 = &DeviceObject->Queue;
  if ( v7->Flink->Blink != v7 )
    goto LABEL_26;
  v8->ListEntry.Flink = Flink;
  DeviceObject->Queue.ListEntry.Blink = v7;
  Flink->Blink = &v8->ListEntry;
  v7->Flink = &v8->ListEntry;
LABEL_13:
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v9 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v9 != &IopFsNotifyChangeQueueHead )
  {
    v10 = (void (__fastcall *)(PDEVICE_OBJECT, struct _LIST_ENTRY *))v9[3];
    LOBYTE(Flink) = 1;
    v9 = (__int64 *)*v9;
    v10(DeviceObject, Flink);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1, v11);
}
