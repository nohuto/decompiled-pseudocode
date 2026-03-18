/*
 * XREFs of NtWriteFileGather @ 0x1406A3D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400EEE18 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IopExceptionFilter @ 0x140293788 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402C0548 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtWriteFileGather(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  PULONG v9; // r13
  PLARGE_INTEGER v10; // r12
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // r15
  PFILE_OBJECT v14; // rsi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  ULONG *p_Flags; // rbx
  ULONG Flags; // edx
  unsigned __int64 DeviceType; // rcx
  __int64 v19; // r8
  ULONG v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  __int16 v24; // ax
  SIZE_T v25; // rdi
  ULONG v26; // r10d
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rbx
  ULONG v28; // edx
  ULONG v29; // r9d
  USHORT SectorSize; // cx
  int v31; // r14d
  char v32; // r15
  IRP *Irp; // rax
  IRP *v34; // rdi
  PIO_STATUS_BLOCK v35; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG v37; // r12d
  struct _MDL *Mdl; // rax
  unsigned __int64 v39; // rbx
  UCHAR MajorFunction; // r12
  _DWORD *FileObjectExtension; // rax
  char v42; // r14
  struct _KTHREAD *v43; // rax
  PFILE_OBJECT v44; // rbx
  _KLOCK_ENTRY *v45; // rax
  NTSTATUS v46; // ebx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  _BYTE v48[15]; // [rsp+41h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-98h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  ULONG v51; // [rsp+60h] [rbp-88h]
  PVOID v52; // [rsp+68h] [rbp-80h]
  int v53; // [rsp+70h] [rbp-78h]
  ULONG *v54; // [rsp+78h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-68h]
  ULONG v56; // [rsp+88h] [rbp-60h]
  ACCESS_MASK v57; // [rsp+8Ch] [rbp-5Ch]
  PVOID Object; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v59; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v61; // [rsp+A8h] [rbp-40h]
  LARGE_INTEGER v63; // [rsp+100h] [rbp+18h] BYREF
  PVOID v64; // [rsp+108h] [rbp+20h]

  v64 = ApcContext;
  v63.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  P = 0LL;
  v59 = 0LL;
  v52 = 0LL;
  v51 = 0;
  *(_QWORD *)&v48[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v59);
  if ( result < 0 )
    return result;
  GrantedAccess = v59.GrantedAccess;
  v57 = v59.GrantedAccess;
  v14 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v14->Flags;
  v54 = &v14->Flags;
  Flags = v14->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v19 = 0x40000100100348LL, !_bittest64(&v19, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v14);
    return -1073741811;
  }
  v20 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v14);
      return -1073741790;
    }
    v53 = 0;
    v21 = (__int64)IoStatusBlock;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v63, *(_BYTE *)p_Flags & 2);
    v61 = KeGetCurrentThread();
    v23 = v61->ApcState.Process[1].ActiveProcessors.Bitmap[6];
    if ( v23 && ((v24 = *(_WORD *)(v23 + 8), v24 == 332) || v24 == 452) )
    {
      v25 = 8LL * v20;
      if ( v25 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_22;
      }
    }
    else
    {
      v25 = 8LL * v20;
      if ( v25 )
      {
        if ( ((unsigned __int8)BufferDescription & 7) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_22:
        if ( (unsigned __int64)&BufferDescription[v25 / 8] > 0x7FFFFFFF0000LL
          || &BufferDescription[v25 / 8] < BufferDescription )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    v26 = BufferLength;
    if ( BufferLength )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v25);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v25);
      BufferDescription = PoolWithQuota_1;
      v28 = 0;
      v56 = 0;
      while ( v28 < v20 )
      {
        if ( ((__int64)BufferDescription[v28].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v56 = ++v28;
      }
      v26 = BufferLength;
    }
    v14 = FileObject;
    if ( FileObject->CompletionContext && (v63.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v48[7] = *v10;
      v14 = FileObject;
    }
    p_Flags = &v14->Flags;
    v54 = &v14->Flags;
    v29 = v14->Flags;
    if ( (v29 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( SectorSize && ((SectorSize - 1) & v26) != 0 && v26 % SectorSize )
        RtlRaiseStatus(-1073741811);
      if ( v10
        && *(_QWORD *)&v48[7] != -1LL
        && (*(_DWORD *)&v48[7] != -2 || *(_DWORD *)&v48[11] != -1 || (v29 & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v48[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v22 = (__int64)v9;
      v51 = *(_DWORD *)v22;
      v14 = FileObject;
    }
    GrantedAccess = v57;
    goto LABEL_61;
  }
  if ( v10 )
    *(LARGE_INTEGER *)&v48[7] = *v10;
  if ( v9 )
    v51 = *v9;
LABEL_61:
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v48[7] = -1;
    *(_DWORD *)&v48[11] = -1;
  }
  if ( Event )
  {
    v31 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v52 = Object;
    if ( v31 < 0 )
    {
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v42 = (*p_Flags & 4) != 0;
    v43 = KeGetCurrentThread();
    --v43->KernelApcDisable;
    v44 = FileObject;
    v45 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v48[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v44->Busy, 1) )
    {
      v14 = FileObject;
      v46 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, AccessMode, v42, v45, v48);
    }
    else
    {
      if ( v45 )
        v45->AcquiredByte |= 1u;
      v14 = FileObject;
      ObfReferenceObject(FileObject);
      v46 = 0;
    }
    if ( v48[0] )
    {
      if ( v52 )
        ObfDereferenceObject(v52);
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v46;
    }
    v32 = 1;
    if ( !v10 && !*(_DWORD *)&v48[7] || *(_DWORD *)&v48[7] == -2 && *(_DWORD *)&v48[11] == -1 )
      *(_QWORD *)&v48[7] = v14->CurrentByteOffset.QuadPart;
    p_Flags = v54;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( v52 )
        ObfDereferenceObject(v52);
LABEL_118:
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return -1073741811;
    }
    v32 = 0;
  }
  if ( *(int *)&v48[11] < 0 && (*(_DWORD *)&v48[11] != -1 || *(_DWORD *)&v48[7] != -1) )
  {
    if ( v52 )
      ObfDereferenceObject(v52);
    if ( v32 )
      IopReleaseFileObjectLock((volatile __int32 *)&v14->Type);
    goto LABEL_118;
  }
  IopResetEvent((__int64)v14);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v34 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v14;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)v52;
    v35 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v63;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v64;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v14;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v37 = BufferLength;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      v39 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          v39,
          (__int64)DeviceObject->DriverObject->MajorFunction[MajorFunction],
          (__int64)DeviceObject);
      v34->UserBuffer = BufferDescription->Buffer;
      v37 = BufferLength;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( (*v54 & 8) != 0 )
      v34->Flags |= 0xA01u;
    else
      v34->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = v37;
    CurrentStackLocation[-1].Parameters.Create.Options = v51;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v48[7];
    FileObjectExtension = v14->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v35->Information;
    return IopSynchronousServiceTail(DeviceObject, v34, (__int64)v14, 1, AccessMode, v32, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v14, v52);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
