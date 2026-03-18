/*
 * XREFs of PiPagePathSetState @ 0x14075C1FC
 * Callers:
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140759760 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCleanup @ 0x1407F6534 (CmpVolumeContextCleanup.c)
 *     PpPagePathAssign @ 0x140826F18 (PpPagePathAssign.c)
 *     MiDeletePagefile @ 0x140853110 (MiDeletePagefile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x14008E4E0 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8B70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8DD0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     IoQueueThreadIrp @ 0x140160DF0 (IoQueueThreadIrp.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     IoGetRelatedTargetDevice @ 0x1405A2CA4 (IoGetRelatedTargetDevice.c)
 *     PoDirectedDripsNotifyPagingDeviceUsage @ 0x14075C340 (PoDirectedDripsNotifyPagingDeviceUsage.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, BOOLEAN a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  PIRP Irp; // rax
  IRP *v6; // rbx
  IRP *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  PVOID Objecta; // [rsp+80h] [rbp+18h] BYREF

  v13[0] = 0LL;
  v13[1] = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v7 = Irp;
    CurrentThread = KeGetCurrentThread();
    v6->Overlay.AllocationSize.QuadPart = 0LL;
    v6->Tail.Overlay.Thread = CurrentThread;
    v6->UserEvent = &Event;
    v6->UserIosb = (PIO_STATUS_BLOCK)v13;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v6->RequestorMode = 0;
    v6->Flags = 4;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
    CurrentStackLocation[-1].FileObject = Object;
    v6->AssociatedIrp.MasterIrp = 0LL;
    v6->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = 1;
    IoQueueThreadIrp(v7);
    PpDevNodeLockTree(1);
    v10 = IofCallDriver(RelatedDeviceObject, v6);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v13[0];
    }
    if ( v10 >= 0 && (int)IoGetRelatedTargetDevice(Object, &Objecta) >= 0 )
    {
      LOBYTE(v11) = a2;
      PoDirectedDripsNotifyPagingDeviceUsage(Objecta, v11);
      ObfDereferenceObject(Objecta);
    }
    PpDevNodeUnlockTree(1);
    return (unsigned int)v10;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
