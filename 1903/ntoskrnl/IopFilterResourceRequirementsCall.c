/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140722700
 * Callers:
 *     IopQueryDeviceResources @ 0x140722160 (IopQueryDeviceResources.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReference @ 0x14000E250 (IoGetAttachedDeviceReference.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IovUtilWatermarkIrp @ 0x1400998EC (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x140099A10 (IoAllocateIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rbx
  __int64 v7; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v12; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  v11 = 0LL;
  v12 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    if ( a2 )
    {
      Irp->IoStatus.Status = 0;
      v12 = a2;
      Irp->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v11) = -1073741637;
      Irp->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v11;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v7);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v9 = IofCallDriver(AttachedDeviceReference, Irp);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v11;
    }
    *a3 = v12;
  }
  else
  {
    v9 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v9;
}
