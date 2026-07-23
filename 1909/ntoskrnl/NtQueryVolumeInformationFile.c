/*
 * XREFs of NtQueryVolumeInformationFile @ 0x14062F040
 * Callers:
 *     PfSnIsVolumeMounted @ 0x14062A72C (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14062AE1C (PfSnQueryVolumeInfo.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AB7BC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopFileObjectRevoked @ 0x14003F9F0 (IopFileObjectRevoked.c)
 *     IopVerifierExAllocatePool @ 0x140089464 (IopVerifierExAllocatePool.c)
 *     IopGetMountFlag @ 0x140089560 (IopGetMountFlag.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400896A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopGetDriverPathInformation @ 0x140293620 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x140913900 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // r14d
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v11; // r12d
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  int v20; // ebx
  char *v21; // rdi
  PIRP v22; // rbx
  int v23; // r13d
  char MountFlag; // cl
  __int64 v25; // rbx
  int v26; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // rbx
  PRTL_BALANCED_NODE v30; // rax
  char v31; // r13
  IRP *v32; // rax
  __int64 v33; // rcx
  IRP *v34; // rbx
  __int64 v35; // rax
  struct _IRP *v36; // rax
  __int64 v37; // rax
  char v38; // si
  KPROCESSOR_MODE v39; // r14
  struct _KEVENT *Pool; // rax
  _BYTE *PoolWithQuota_0; // r12
  NTSTATUS DriverPathInformation; // eax
  char v43; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v44; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  NTSTATUS v46; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  PIRP Irp; // [rsp+60h] [rbp-58h]
  __int64 v49; // [rsp+68h] [rbp-50h]
  _BYTE *v50; // [rsp+70h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-40h]
  _QWORD v52[2]; // [rsp+80h] [rbp-38h] BYREF

  v8 = 0;
  P = 0LL;
  v52[0] = 0LL;
  v52[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v44 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v12 = *((_BYTE *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6];
    if ( v14 && ((v18 = *(_WORD *)(v14 + 8), v18 == 332) || v18 == 452) )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v44;
    }
    else if ( Length )
    {
      v15 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v16 || v16 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
    }
  }
  else
  {
    v11 = FsInformationClass;
  }
  v20 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v11],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  v21 = (char *)Object;
  if ( v20 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v21);
    return -1073739504;
  }
  if ( v20 < 0 )
    return v20;
  v22 = (PIRP)(v21 + 80);
  Irp = (PIRP)(v21 + 80);
  v23 = *((_DWORD *)v21 + 20);
  if ( (v23 & 0x800) != 0 )
  {
    if ( v11 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v21);
      return -1073741808;
    }
  }
  else if ( v11 != FileFsDeviceInformation )
  {
    goto LABEL_36;
  }
  if ( (*((_DWORD *)v21 + 20) & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v21 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v25 = *((_QWORD *)v21 + 1);
    if ( *(_QWORD *)(v25 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v21 + 1));
    if ( Length < 8 )
    {
      v8 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v25 + 72);
      v26 = *(_DWORD *)(v25 + 52);
      *((_DWORD *)FsInformation + 1) = v26;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v26 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v46 = 0;
    }
    ObfDereferenceObject(v21);
    return v8;
  }
LABEL_36:
  if ( (v23 & 2) != 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    v29 = (volatile __int32 *)Object;
    v30 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v43 = 0;
    if ( _InterlockedExchange(v29 + 29, 1) )
    {
      v21 = (char *)Object;
      v20 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v43);
    }
    else
    {
      if ( v30 )
        BYTE2(v30[1].Left) |= 1u;
      v21 = (char *)Object;
      ObfReferenceObject(Object);
      v20 = 0;
    }
    if ( v43 )
      goto LABEL_72;
    v31 = 1;
    v22 = Irp;
  }
  else
  {
    v31 = 0;
  }
  v43 = v31;
  if ( v11 == FileFsDriverPathInformation )
  {
    v50 = 0LL;
    PoolWithQuota_0 = IopVerifierExAllocatePoolWithQuota_0(v19, Length);
    v50 = PoolWithQuota_0;
    memmove(PoolWithQuota_0, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v21, (__int64)PoolWithQuota_0, Length);
    v20 = DriverPathInformation;
    v46 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota_0;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    if ( (*((_DWORD *)v21 + 20) & 2) != 0 )
      IopReleaseFileObjectLock((volatile __int32 *)v21);
LABEL_72:
    ObfDereferenceObject(v21);
    return v20;
  }
  if ( (*(_DWORD *)&v22->Type & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v21 + 152));
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v21);
  if ( (*(_DWORD *)&v22->Type & 2) == 0 )
  {
    Pool = (struct _KEVENT *)IopVerifierExAllocatePool();
    P = Pool;
    if ( !Pool )
    {
      ObfDereferenceObject(v21);
      return -1073741670;
    }
    KeInitializeEvent(Pool, SynchronizationEvent, 0);
  }
  v32 = (IRP *)IopAllocateIrpExReturn();
  Irp = v32;
  if ( !v32 )
  {
    if ( (*(_DWORD *)&v22->Type & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v21, 0LL);
    return -1073741670;
  }
  v34 = v32;
  v32->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v21;
  v32->Tail.Overlay.Thread = (PETHREAD)v49;
  v32->RequestorMode = v44;
  if ( v31 )
  {
    v32->UserEvent = 0LL;
    v32->UserIosb = IoStatusBlock;
  }
  else
  {
    v32->UserEvent = (PKEVENT)P;
    v32->UserIosb = (PIO_STATUS_BLOCK)v52;
    v32->Flags = 4;
  }
  v32->Overlay.AllocationSize.QuadPart = 0LL;
  v35 = (__int64)&v32->Tail.Overlay.CurrentStackLocation[-1];
  v49 = v35;
  *(_BYTE *)v35 = 10;
  *(_QWORD *)(v35 + 48) = v21;
  v34->UserBuffer = FsInformation;
  v34->AssociatedIrp.MasterIrp = 0LL;
  v34->MdlAddress = 0LL;
  v36 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v33, Length);
  v34->AssociatedIrp.MasterIrp = v36;
  if ( !IopDisableBufferedIoInit )
    memset(v36, 0, Length);
  v34->Flags |= 0x870u;
  v37 = v49;
  *(_DWORD *)(v49 + 8) = Length;
  *(_DWORD *)(v37 + 16) = v11;
  v38 = v43;
  v39 = v44;
  result = IopSynchronousServiceTail(DeviceObject, v34, (__int64)v21, 1, v44, v43, 2u);
  if ( !v38 )
    return IopSynchronousApiServiceTail(result, P, v34, v39, (unsigned int *)v52, IoStatusBlock);
  return result;
}
