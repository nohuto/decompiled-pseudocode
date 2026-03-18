/*
 * XREFs of NtSetVolumeInformationFile @ 0x14072B860
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePool @ 0x140088160 (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406278C4 (IopSynchronousApiServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x140663780 (IoGetRelatedTargetDevice.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IoReportTargetDeviceChange @ 0x14072BCC0 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  char PreviousMode; // r10
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v16; // r14
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v18; // rsi
  char v19; // di
  struct _KTHREAD *v20; // rax
  __int64 v21; // rbx
  _KLOCK_ENTRY *v22; // rax
  int v23; // ebx
  IRP *v24; // rax
  IRP *v25; // rdi
  struct _IO_STATUS_BLOCK *v26; // rax
  __int64 v27; // rax
  struct _IRP *PoolWithQuota_0; // rax
  char v29; // r8
  int v30; // eax
  int v31; // edx
  __int64 v32; // rcx
  char v33; // r13
  PVOID v34; // rcx
  struct _KEVENT *Pool; // rax
  char v36; // [rsp+40h] [rbp-C8h] BYREF
  char v37; // [rsp+41h] [rbp-C7h]
  _DWORD Size[3]; // [rsp+44h] [rbp-C4h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h]
  struct _IO_STATUS_BLOCK *v41; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  ULONG *p_Flags; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  _QWORD v46[2]; // [rsp+88h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v48; // [rsp+9Ch] [rbp-6Ch]
  int v49; // [rsp+ACh] [rbp-5Ch]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  int v51; // [rsp+B8h] [rbp-50h]
  int v52; // [rsp+BCh] [rbp-4Ch]

  v5 = Length;
  Size[0] = Length;
  v41 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  v46[0] = 0LL;
  v46[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v40 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v37 = PreviousMode;
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
    v13 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6];
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
             (PVOID *)&Size[1],
             0LL);
  if ( result < 0 )
    return result;
  v16 = *(struct _FILE_OBJECT **)&Size[1];
  RelatedTargetDevice = IoGetRelatedTargetDevice(*(struct _FILE_OBJECT **)&Size[1], &Object);
  v18 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v18 = 0LL;
  Object = v18;
  p_Flags = &v16->Flags;
  if ( (v16->Flags & 2) != 0 )
  {
    v19 = (v16->Flags & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = *(_QWORD *)&Size[1];
    v22 = (_KLOCK_ENTRY *)KeAbPreAcquire(*(_QWORD *)&Size[1] + 128LL, 0LL, 0);
    v36 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v21 + 116), 1) )
    {
      v16 = *(struct _FILE_OBJECT **)&Size[1];
      v23 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&Size[1], v37, v19, v22, &v36);
    }
    else
    {
      if ( v22 )
        v22->AcquiredByte |= 1u;
      v16 = *(struct _FILE_OBJECT **)&Size[1];
      ObfReferenceObject(*(PVOID *)&Size[1]);
      v23 = 0;
    }
    if ( v36 )
    {
      ObfDereferenceObject(v16);
      v34 = Object;
      if ( !Object )
        return v23;
      goto LABEL_46;
    }
    v36 = 1;
    v18 = (struct _DEVICE_OBJECT *)Object;
    v5 = Size[0];
  }
  else
  {
    Pool = (struct _KEVENT *)IopVerifierExAllocatePool();
    v8 = Pool;
    P = Pool;
    if ( !Pool )
    {
      ObfDereferenceObject(v16);
LABEL_58:
      if ( v18 )
        ObfDereferenceObject(v18);
      return -1073741670;
    }
    KeInitializeEvent(Pool, SynchronizationEvent, 0);
    v36 = 0;
  }
  IopResetEvent((__int64)v16);
  DeviceObject = IoGetRelatedDeviceObject(v16);
  v24 = (IRP *)IopAllocateIrpExReturn();
  v25 = v24;
  Irp = v24;
  if ( !v24 )
  {
    if ( (*p_Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v16, 0LL);
    goto LABEL_58;
  }
  v24->Tail.Overlay.OriginalFileObject = v16;
  v24->Tail.Overlay.Thread = (PETHREAD)v40;
  v24->RequestorMode = v37;
  if ( v36 )
  {
    v24->UserEvent = 0LL;
    v26 = v41;
  }
  else
  {
    v24->UserEvent = v8;
    v26 = (struct _IO_STATUS_BLOCK *)v46;
    v25->Flags = 4;
  }
  v25->UserIosb = v26;
  v25->Overlay.AllocationSize.QuadPart = 0LL;
  v27 = (__int64)&v25->Tail.Overlay.CurrentStackLocation[-1];
  v40 = v27;
  *(_BYTE *)v27 = 11;
  *(_QWORD *)(v27 + 48) = v16;
  v25->AssociatedIrp.MasterIrp = 0LL;
  v25->MdlAddress = 0LL;
  PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(0LL, v5);
  v25->AssociatedIrp.MasterIrp = PoolWithQuota_0;
  memmove(PoolWithQuota_0, FsInformation, v5);
  v29 = v37;
  if ( !v37 || FsInformationClass != FileFsLabelInformation )
  {
    v31 = Size[0];
LABEL_40:
    v25->Flags |= 0x30u;
    v32 = v40;
    *(_DWORD *)(v40 + 8) = v31;
    *(_DWORD *)(v32 + 16) = FsInformationClass;
    v33 = v36;
    v23 = IopSynchronousServiceTail(DeviceObject, v25, (__int64)v16, 0, v29, v36, 2u);
    if ( !v33 )
      v23 = IopSynchronousApiServiceTail(v23, v8, v25, v37, (unsigned int *)v46, v41);
    if ( !v18 )
      return v23;
    if ( v23 >= 0 )
    {
      v49 = 0;
      v52 = 0;
      NotificationStructure = 2359297;
      v50 = 0LL;
      v51 = -1;
      v48 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v18, &NotificationStructure);
    }
    v34 = v18;
LABEL_46:
    ObfDereferenceObject(v34);
    return v23;
  }
  v30 = *(_DWORD *)v25->AssociatedIrp.MasterIrp;
  if ( v30 >= 0 )
  {
    v31 = Size[0];
    if ( (unsigned int)(v30 + 4) <= Size[0] )
      goto LABEL_40;
  }
  IopExceptionCleanup(v16, v25, 0LL, v8);
  if ( v18 )
    ObfDereferenceObject(v18);
  return -1073741811;
}
