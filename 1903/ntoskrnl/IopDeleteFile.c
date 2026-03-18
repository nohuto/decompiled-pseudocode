/*
 * XREFs of IopDeleteFile @ 0x1405F0850
 * Callers:
 *     <none>
 * Callees:
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     IopAllocateIrpMustSucceed @ 0x140037030 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     IopDeleteFileObjectExtension @ 0x1400840D0 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400B4440 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x140102B20 (IopDecrementVpbRefCount.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406BE4C0 (FsRtlPTeardownPerFileObjectContexts.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG_PTR v3; // rdi
  ULONG Flags; // esi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r14
  IRP *MustSucceed; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  PVPB Vpb; // rbp
  PDEVICE_OBJECT v11; // rcx
  char v12; // r15
  volatile signed __int32 *v13; // rdx
  PIO_COMPLETION_CONTEXT CompletionContext; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v15[0] = 0LL;
  DeviceObject = FileObject->DeviceObject;
  v3 = 0LL;
  v15[1] = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( DeviceObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    }
    else
    {
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
      Flags = FileObject->Flags;
    }
    v6 = AttachedDevice;
    if ( (Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    IopResetEvent((__int64)FileObject);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = FileObject;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)v15;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9);
    Vpb = FileObject->Vpb;
    if ( Vpb )
    {
      if ( (FileObject->Flags & 0x800) == 0 )
      {
        IopDecrementVpbRefCount((__int64)FileObject->Vpb, 1);
        v3 = (ULONG_PTR)Vpb->DeviceObject;
        if ( v3 )
          IopIncrementDeviceObjectRefCount((ULONG_PTR)Vpb->DeviceObject, 1);
      }
    }
    v11 = FileObject->DeviceObject;
    if ( (v11->Flags & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount((ULONG_PTR)v11, 1);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v13);
    IoFreeIrp(MustSucceed);
    if ( FileObject->FileName.Length )
      ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
    CompletionContext = FileObject->CompletionContext;
    if ( CompletionContext )
    {
      ObfDereferenceObject(CompletionContext->Port);
      ExFreePoolWithTag(FileObject->CompletionContext, 0);
    }
    if ( FileObject->FileObjectExtension )
      FsRtlPTeardownPerFileObjectContexts(FileObject);
    if ( !v12 )
      IopDecrementDeviceObjectRef((ULONG_PTR)FileObject->DeviceObject, 0);
    if ( v3 && Vpb )
      IopDecrementDeviceObjectRef(v3, 0);
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
