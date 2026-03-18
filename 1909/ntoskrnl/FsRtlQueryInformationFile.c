/*
 * XREFs of FsRtlQueryInformationFile @ 0x14084E8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IoAllocateIrpEx @ 0x1400893F0 (IoAllocateIrpEx.c)
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14060C800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x14084EAD0 (FsRtlpFreeMdlChain.c)
 */

NTSTATUS __stdcall FsRtlQueryInformationFile(
        PFILE_OBJECT FileObject,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        PULONG RetFileInformationSize)
{
  IRP *v9; // rbx
  NTSTATUS Status; // edi
  __int64 v11; // rdx
  IRP *v12; // rax
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  PVOID ObjectArray; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-20h] BYREF

  v9 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v11) = DeviceObject->StackSize;
    v12 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v11, 0LL);
    v9 = v12;
    Irp = v12;
    if ( v12 )
    {
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&v12->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1029;
      CurrentStackLocation[-1].FileObject = FileObject;
      v9->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
      v9 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags |= 4u;
      Irp->RequestorMode = 0;
      v15 = p_CurrentStackLocation->CurrentStackLocation;
      v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
      v15[-1].Context = &Object;
      v15[-1].Control = 0;
      v15[-1].Control = 64;
      v15[-1].Control = -64;
      v15[-1].Control = -32;
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
      *RetFileInformationSize = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v9 )
  {
    MdlAddress = v9->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v9->MdlAddress = 0LL;
    }
    IoFreeIrp(v9);
  }
  return Status;
}
