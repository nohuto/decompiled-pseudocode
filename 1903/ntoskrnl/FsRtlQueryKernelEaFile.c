/*
 * XREFs of FsRtlQueryKernelEaFile @ 0x14069D570
 * Callers:
 *     sub_14091DD34 @ 0x14091DD34 (sub_14091DD34.c)
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

__int64 __fastcall FsRtlQueryKernelEaFile(
        PFILE_OBJECT FileObject,
        void *a2,
        ULONG a3,
        char a4,
        UNICODE_STRING *a5,
        ULONG a6,
        ULONG *a7,
        char a8,
        _DWORD *a9)
{
  IRP *v13; // rbx
  __int64 v14; // rdx
  IRP *v15; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v17; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  PVOID ObjectArray; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v14) = DeviceObject->StackSize;
    v15 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v14, 0LL);
    v13 = v15;
    Irp = v15;
    if ( v15 )
    {
      CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 7;
      CurrentStackLocation[-1].FileObject = FileObject;
      v15->UserBuffer = a2;
      CurrentStackLocation[-1].Parameters.Read.Length = a3;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a5;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
      if ( a7 )
      {
        CurrentStackLocation[-1].Parameters.Create.EaLength = *a7;
        CurrentStackLocation[-1].Flags |= 4u;
      }
      else
      {
        CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
      }
      if ( a8 )
        CurrentStackLocation[-1].Flags |= 1u;
      if ( a4 )
        CurrentStackLocation[-1].Flags |= 2u;
      v13 = v15;
      v15->Tail.Overlay.Thread = KeGetCurrentThread();
      v15->Flags = 4;
      v15->RequestorMode = 0;
      v17 = v15->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
      v17[-1].Context = &Object;
      v17[-1].Control = 0;
      v17[-1].Control = 64;
      v17[-1].Control = -64;
      v17[-1].Control = -32;
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
      *a9 = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v13 )
  {
    MdlAddress = v13->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v13->MdlAddress = 0LL;
    }
    IoFreeIrp(v13);
  }
  return Status;
}
