/*
 * XREFs of IopGetFileInformation @ 0x140627E84
 * Callers:
 *     IopGetRelatedFileName @ 0x1405B4D2C (IopGetRelatedFileName.c)
 *     IopQueryNameInternal @ 0x140629D54 (IopQueryNameInternal.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 *     IopGetBasicInformationFile @ 0x1406DE1AC (IopGetBasicInformationFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  __int64 v11; // rdx
  IRP *v12; // rbx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v16; // edx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  v19 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IopAllocateIrpExReturn();
  v12 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    v13 = Irp;
    CurrentThread = KeGetCurrentThread();
    v12->Overlay.AllocationSize.QuadPart = 0LL;
    v12->Tail.Overlay.Thread = CurrentThread;
    v12->UserEvent = &Event;
    v12->UserIosb = (PIO_STATUS_BLOCK)&v18;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->Flags = 4100;
    v12->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v12->Flags |= 0x10u;
    v12->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v13, v11);
    v16 = IofCallDriver(RelatedDeviceObject, v12);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v18;
    }
    *a5 = v19;
    return v16;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
