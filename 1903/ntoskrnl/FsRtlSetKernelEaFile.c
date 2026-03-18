/*
 * XREFs of FsRtlSetKernelEaFile @ 0x14069D0C0
 * Callers:
 *     sub_14091E24C @ 0x14091E24C (sub_14091E24C.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IoAllocateIrpEx @ 0x1400EB290 (IoAllocateIrpEx.c)
 *     IoCancelIrp @ 0x1401279E0 (IoCancelIrp.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060ACF0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x14084F3D0 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlSetKernelEaFile(PFILE_OBJECT FileObject, void *a2, ULONG a3)
{
  IRP *v6; // rbx
  __int64 v7; // rdx
  IRP *v8; // rax
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v11; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PVOID ObjectArray; // [rsp+38h] [rbp-30h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp+20h]

  v6 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v7) = DeviceObject->StackSize;
    v8 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v7, 0LL);
    v6 = v8;
    Irp = v8;
    if ( v8 )
    {
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1032;
      CurrentStackLocation[-1].FileObject = FileObject;
      v6->UserBuffer = a2;
      CurrentStackLocation[-1].Parameters.Read.Length = a3;
      v6 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags = 4;
      Irp->RequestorMode = 0;
      v11 = p_CurrentStackLocation->CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
      v11[-1].Context = &Object;
      v11[-1].Control = 0;
      v11[-1].Control = 64;
      v11[-1].Control = -64;
      v11[-1].Control = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        ObjectArray = &Object;
        if ( FsRtlCancellableWaitForMultipleObjects(1u, &ObjectArray, WaitAll, 0LL, 0LL, 0LL) == -1073741749 )
        {
          IoCancelIrp(Irp);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
      Status = Irp->IoStatus.Status;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v6 )
  {
    MdlAddress = v6->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v6->MdlAddress = 0LL;
    }
    IoFreeIrp(v6);
  }
  return Status;
}
