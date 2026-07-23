/*
 * XREFs of NtSetVolumeInformationFile @ 0x140700510
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopAcquireFastLock_0 @ 0x1400DDA54 (IopAcquireFastLock_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400DDA90 (IopVerifierExAllocatePool_1.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetRelatedTargetDevice @ 0x1405A3CA4 (IoGetRelatedTargetDevice.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x1407008E0 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v8; // r12
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // r14
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  PFILE_OBJECT v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v18; // rdi
  __int64 v19; // rdx
  IRP *v20; // rax
  IRP *v21; // r14
  struct _IO_STATUS_BLOCK *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _IRP *PoolWithQuota; // rax
  char v26; // r8
  int v27; // eax
  ULONG v28; // edx
  __int64 v29; // rcx
  char v30; // r13
  int v31; // ebx
  struct _KEVENT *Pool_1; // rax
  char v33; // [rsp+40h] [rbp-B8h] BYREF
  char v34; // [rsp+41h] [rbp-B7h]
  ULONG v35; // [rsp+44h] [rbp-B4h]
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]
  struct _IO_STATUS_BLOCK *v38; // [rsp+58h] [rbp-A0h]
  PVOID P; // [rsp+60h] [rbp-98h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-88h]
  PIRP Irp; // [rsp+78h] [rbp-80h]
  _QWORD v43[2]; // [rsp+80h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+90h] [rbp-68h] BYREF
  GUID v45; // [rsp+94h] [rbp-64h]
  __int64 v46; // [rsp+A8h] [rbp-50h]
  int v47; // [rsp+B0h] [rbp-48h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]

  v5 = Length;
  v35 = Length;
  v38 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v11 = *((_BYTE *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(
             FileHandle,
             IopSetFsOperationAccess[FsInformationClass],
             PreviousMode,
             (PVOID *)&FileObject,
             0LL);
  if ( result < 0 )
    return result;
  v16 = FileObject;
  RelatedTargetDevice = IoGetRelatedTargetDevice(FileObject, &Object);
  v18 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v18 = 0LL;
  Object = v18;
  if ( (v16->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)&v16->Type) )
    {
      v31 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (v16->Flags & 4) != 0, &v33);
      if ( v33 )
      {
        ObfDereferenceObject(v16);
        if ( !v18 )
          return v31;
        goto LABEL_43;
      }
      v5 = v35;
    }
    v33 = 1;
  }
  else
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
    v8 = Pool_1;
    P = Pool_1;
    if ( !Pool_1 )
    {
      ObfDereferenceObject(v16);
LABEL_60:
      if ( v18 )
        ObfDereferenceObject(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    v33 = 0;
  }
  if ( (v16->Flags & 0x4000000) == 0 )
    KeResetEvent(&v16->Event);
  DeviceObject = IoGetRelatedDeviceObject(v16);
  LOBYTE(v19) = DeviceObject->StackSize;
  v20 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v19, 0LL, retaddr);
  v21 = v20;
  Irp = v20;
  if ( !v20 )
  {
    if ( (v16->Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v16, 0LL);
    goto LABEL_60;
  }
  v20->Tail.Overlay.OriginalFileObject = v16;
  v20->Tail.Overlay.Thread = (PETHREAD)v37;
  v20->RequestorMode = v34;
  v43[0] = 0LL;
  v43[1] = 0LL;
  if ( v33 )
  {
    v22 = v38;
    v23 = 0LL;
  }
  else
  {
    v20->Flags = 4;
    v22 = (struct _IO_STATUS_BLOCK *)v43;
    v23 = (__int64)v8;
  }
  v21->UserEvent = (PKEVENT)v23;
  v21->UserIosb = v22;
  v21->Overlay.AllocationSize.QuadPart = 0LL;
  v24 = (__int64)&v21->Tail.Overlay.CurrentStackLocation[-1];
  v37 = v24;
  *(_BYTE *)v24 = 11;
  *(_QWORD *)(v24 + 48) = v16;
  v21->AssociatedIrp.MasterIrp = 0LL;
  v21->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v23, v5);
  v21->AssociatedIrp.MasterIrp = PoolWithQuota;
  memmove(PoolWithQuota, FsInformation, v5);
  v26 = v34;
  if ( !v34 || FsInformationClass != FileFsLabelInformation )
  {
    v28 = v35;
LABEL_38:
    v21->Flags |= 0x30u;
    v29 = v37;
    *(_DWORD *)(v37 + 8) = v28;
    *(_DWORD *)(v29 + 16) = FsInformationClass;
    v30 = v33;
    v31 = IopSynchronousServiceTail(DeviceObject, v21, (__int64)v16, 0, v26, v33, 2u);
    if ( !v30 )
      v31 = IopSynchronousApiServiceTail(v31, v8, v21, v34, (unsigned int *)v43, v38);
    if ( !v18 )
      return v31;
    if ( v31 >= 0 )
    {
      NotificationStructure = 2359297;
      v46 = 0LL;
      v47 = -1;
      v45 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v18, &NotificationStructure);
    }
LABEL_43:
    ObfDereferenceObject(v18);
    return v31;
  }
  v27 = *(_DWORD *)v21->AssociatedIrp.MasterIrp;
  if ( v27 >= 0 )
  {
    v28 = v35;
    if ( v27 + 4 <= v35 )
      goto LABEL_38;
  }
  IopExceptionCleanup(v16, v21, 0LL, v8);
  if ( v18 )
    ObfDereferenceObject(v18);
  return -1073741811;
}
