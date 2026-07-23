/*
 * XREFs of NtQueryVolumeInformationFile @ 0x14065F620
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x14065F3D4 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14065F4D8 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopGetMountFlag @ 0x1400DD910 (IopGetMountFlag.c)
 *     IopAcquireFastLock_0 @ 0x1400DDA54 (IopAcquireFastLock_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400DDA90 (IopVerifierExAllocatePool_1.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopGetDriverPathInformation @ 0x14027F0E8 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r13
  NTSTATUS v9; // r14d
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v12; // ebx
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  NTSTATUS v23; // r12d
  unsigned int *v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rcx
  char MountFlag; // cl
  __int64 v28; // rbx
  int v29; // eax
  NTSTATUS result; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  IRP *v32; // rax
  IRP *v33; // r12
  PIO_STATUS_BLOCK v34; // rax
  struct _KEVENT *v35; // rcx
  __int64 v36; // rdi
  struct _IRP *PoolWithQuota; // rax
  struct _KEVENT *Pool_1; // rax
  _BYTE *v40; // r12
  NTSTATUS DriverPathInformation; // eax
  NTSTATUS v42; // ebx
  PVOID v43; // rbx
  unsigned __int8 v44; // [rsp+40h] [rbp-68h]
  char v45; // [rsp+41h] [rbp-67h]
  char v46; // [rsp+43h] [rbp-65h] BYREF
  NTSTATUS v47; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  PVOID v50; // [rsp+58h] [rbp-50h]
  _BYTE *v51; // [rsp+60h] [rbp-48h]
  PVOID v52; // [rsp+68h] [rbp-40h]
  struct _KTHREAD *v53; // [rsp+70h] [rbp-38h]
  PIRP Irp; // [rsp+78h] [rbp-30h]
  _QWORD v55[2]; // [rsp+80h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v5 = Length;
  v9 = 0;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v44 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v13 = *((_BYTE *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !v13 )
      return -1073741821;
    if ( Length < v13 )
      return -1073741820;
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v15 && ((v20 = *(_WORD *)(v15 + 8), v20 == 332) || v20 == 452) )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v44;
    }
    else if ( Length )
    {
      v17 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v18 || v18 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v19 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v17 = *(_BYTE *)v17;
        v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v17 != v19 );
    }
  }
  else
  {
    v12 = FsInformationClass;
  }
  v23 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v12],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  v24 = (unsigned int *)Object;
  v50 = Object;
  v52 = Object;
  if ( v23 < 0 )
    return v23;
  v25 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v25 && (*v25 & 4) != 0 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    v50 = v52;
    v24 = (unsigned int *)Object;
  }
  v26 = v24[20];
  if ( (v24[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v24);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_38;
  }
  if ( (v24[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v24 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v28 = *((_QWORD *)v24 + 1);
    if ( *(_QWORD *)(v28 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v24 + 1), v21, v22);
    if ( (unsigned int)v5 < 8 )
    {
      v9 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v28 + 72);
      v29 = *(_DWORD *)(v28 + 52);
      *((_DWORD *)FsInformation + 1) = v29;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v29 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v47 = 0;
    }
    ObfDereferenceObject(v24);
    return v9;
  }
LABEL_38:
  if ( (v26 & 2) != 0 )
  {
    if ( !IopAcquireFastLock_0((volatile __int32 *)v24) )
    {
      v23 = IopAcquireFileObjectLock((char *)v24, v44, (v24[20] & 4) != 0, &v46);
      if ( v46 )
      {
        ObfDereferenceObject(v24);
        return v23;
      }
    }
    v45 = 1;
  }
  else
  {
    v45 = 0;
  }
  if ( v12 != FileFsDriverPathInformation )
  {
    if ( (v24[20] & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v24 + 38));
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v24);
    Object = RelatedDeviceObject;
    if ( (v24[20] & 2) == 0 )
    {
      Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
      P = Pool_1;
      if ( !Pool_1 )
      {
        ObfDereferenceObject(v24);
        return -1073741670;
      }
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    }
    v32 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)RelatedDeviceObject,
                   (unsigned __int8)RelatedDeviceObject->StackSize,
                   0LL,
                   retaddr);
    v33 = v32;
    Irp = v32;
    if ( v32 )
    {
      v32->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v24;
      v32->Tail.Overlay.Thread = v53;
      v32->RequestorMode = v44;
      v55[0] = 0LL;
      v55[1] = 0LL;
      if ( v45 )
      {
        v34 = IoStatusBlock;
        v35 = 0LL;
      }
      else
      {
        v32->Flags = 4;
        v34 = (PIO_STATUS_BLOCK)v55;
        v35 = (struct _KEVENT *)P;
      }
      v33->UserEvent = v35;
      v33->UserIosb = v34;
      v33->Overlay.AllocationSize.QuadPart = 0LL;
      v36 = (__int64)&v33->Tail.Overlay.CurrentStackLocation[-1];
      *(_BYTE *)v36 = 10;
      *(_QWORD *)(v36 + 48) = v50;
      v33->UserBuffer = FsInformation;
      v33->AssociatedIrp.MasterIrp = 0LL;
      v33->MdlAddress = 0LL;
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota((__int64)v35, v5);
      v33->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v5);
      v33->Flags |= 0x870u;
      *(_DWORD *)(v36 + 8) = v5;
      *(_DWORD *)(v36 + 16) = v12;
      result = IopSynchronousServiceTail((PDEVICE_OBJECT)Object, v33, (__int64)v50, 1, v44, v45, 2u);
      if ( !v45 )
        return IopSynchronousApiServiceTail((unsigned int)result, P, v33, v44, v55, IoStatusBlock);
      return result;
    }
    if ( (v24[20] & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v24, 0LL);
    return -1073741670;
  }
  v51 = 0LL;
  v40 = IopVerifierExAllocatePoolWithQuota(v26, v5);
  v51 = v40;
  memmove(v40, FsInformation, v5);
  DriverPathInformation = IopGetDriverPathInformation((__int64)v24, (__int64)v40, v5);
  v42 = DriverPathInformation;
  v47 = DriverPathInformation;
  if ( DriverPathInformation < 0 )
    RtlRaiseStatus(DriverPathInformation);
  *(_BYTE *)FsInformation = *v40;
  IoStatusBlock->Status = 0;
  IoStatusBlock->Information = 12LL;
  if ( v40 )
    ExFreePoolWithTag(v40, 0);
  if ( (v24[20] & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)v24 + 29, 0);
    v43 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v43);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v42 = v47;
    v24 = (unsigned int *)Object;
  }
  ObfDereferenceObject(v24);
  return v42;
}
