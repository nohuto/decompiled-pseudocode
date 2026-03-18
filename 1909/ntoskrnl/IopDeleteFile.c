/*
 * XREFs of IopDeleteFile @ 0x1405F1150
 * Callers:
 *     <none>
 * Callees:
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140037290 (IopDecrementDeviceObjectRef.c)
 *     IopAllocateIrpMustSucceed @ 0x140037420 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140044170 (IoGetAttachedDevice.c)
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400F1460 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400F14B0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1401063C0 (IopDecrementVpbRefCount.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     ObIsObjectDeletionInline @ 0x1405F1140 (ObIsObjectDeletionInline.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1406BDF70 (FsRtlPTeardownPerFileObjectContexts.c)
 */

void __fastcall IopDeleteFile(__int64 BugCheckParameter1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  ULONG_PTR v3; // rsi
  int v4; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r15
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbp
  ULONG_PTR v11; // rcx
  char v12; // r14
  volatile signed __int32 *v13; // rdx
  ULONG_PTR v14; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  v3 = 0LL;
  v15[0] = 0LL;
  v15[1] = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter1 + 80);
    if ( (v4 & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(v2);
    }
    else
    {
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
      v4 = *(_DWORD *)(BugCheckParameter1 + 80);
    }
    v6 = AttachedDevice;
    if ( (v4 & 0x240000) == 0 )
      IopCloseFile(0LL, (struct _FILE_OBJECT *)BugCheckParameter1, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    IopResetEvent(BugCheckParameter1);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)v15;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9);
    v10 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v10 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v3 = *(_QWORD *)(v10 + 8);
        if ( v3 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v10 + 8), 1);
      }
    }
    v11 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v11 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v11, 1);
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
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v14 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v14, 0x80uLL, *(_QWORD *)(v14 + 16));
      ObfDereferenceObject(*(PVOID *)v14);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1);
    if ( !v12 )
    {
      ObIsObjectDeletionInline(BugCheckParameter1);
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0);
    }
    if ( v3 && v10 )
    {
      ObIsObjectDeletionInline(BugCheckParameter1);
      IopDecrementDeviceObjectRef(v3, 0);
    }
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
