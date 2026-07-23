/*
 * XREFs of IopDeleteFile @ 0x14063C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopDeleteFileObjectExtension @ 0x140092090 (IopDeleteFileObjectExtension.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1400B88D0 (IopDecrementVpbRefCount.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpMustSucceed @ 0x1400B91E0 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400DCA80 (IopDecrementDeviceObjectRefCount.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x140699A10 (FsRtlPTeardownPerFileObjectContexts.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  int v4; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r15
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // r8
  ULONG_PTR v14; // rcx
  char v15; // r14
  volatile signed __int32 *v16; // rdx
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  char v19; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  if ( v3 )
  {
    v4 = *(_DWORD *)(BugCheckParameter1 + 80);
    if ( (v4 & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(v3);
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
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v19;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9, v10);
    v12 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v12 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1, v11);
        v2 = *(_QWORD *)(v12 + 8);
        if ( v2 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v12 + 8), 1, v13);
      }
    }
    v14 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v14 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v14, 1);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    if ( IofCallDriver(v6, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v16, v17);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v18 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v18 )
    {
      if ( *(_QWORD *)(v18 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v18, 0x80uLL, *(_QWORD *)(v18 + 16));
      ObfDereferenceObject(*(PVOID *)v18);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1);
    if ( !v15 )
      IopDecrementDeviceObjectRef(
        *(_QWORD *)(BugCheckParameter1 + 8),
        0,
        (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
    if ( v2 && v12 )
      IopDecrementDeviceObjectRef(v2, 0, (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
