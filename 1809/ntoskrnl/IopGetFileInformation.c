/*
 * XREFs of IopGetFileInformation @ 0x140662AD0
 * Callers:
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x14068CE30 (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x14081AE0C (IopGetRelatedFileName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v10; // rdx
  __int64 Irp; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  IRP *v14; // rbx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v18; // edx
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h]
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v20 = 0LL;
  v21 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v10, 0LL, retaddr);
  v14 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    v15 = Irp;
    CurrentThread = KeGetCurrentThread();
    v14->Overlay.AllocationSize.QuadPart = 0LL;
    v14->Tail.Overlay.Thread = CurrentThread;
    v14->UserEvent = &Event;
    v14->UserIosb = (PIO_STATUS_BLOCK)&v20;
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    v14->Flags = 4100;
    v14->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v14->Flags |= 0x10u;
    v14->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v15, v12, v13);
    v18 = IofCallDriver(RelatedDeviceObject, v14);
    if ( v18 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v18 = v20;
    }
    *a5 = v21;
    return v18;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
