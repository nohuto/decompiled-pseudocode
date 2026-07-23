/*
 * XREFs of NtWriteFileGather @ 0x140674810
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400379C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     MmProbeAndLockSelectedPages @ 0x1400DE3F0 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400DE82C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     IopExceptionFilter @ 0x1402934E8 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402C02A8 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  struct _KTHREAD *v42; // rax
  PFILE_OBJECT v43; // rbx
  PRTL_BALANCED_NODE v44; // rax
  NTSTATUS v45; // ebx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  _BYTE v47[15]; // [rsp+41h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-98h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  ULONG v50; // [rsp+60h] [rbp-88h]
  PVOID v51; // [rsp+68h] [rbp-80h]
  int v52; // [rsp+70h] [rbp-78h]
  ULONG *v53; // [rsp+78h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-68h]
  ULONG v55; // [rsp+88h] [rbp-60h]
  ACCESS_MASK v56; // [rsp+8Ch] [rbp-5Ch]
  PVOID Object; // [rsp+90h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v58; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v60; // [rsp+A8h] [rbp-40h]
  LARGE_INTEGER v62; // [rsp+100h] [rbp+18h] BYREF
  PVOID v63; // [rsp+108h] [rbp+20h]

  v63 = ApcContext;
  v62.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  P = 0LL;
  v58 = 0LL;
  v51 = 0LL;
  v50 = 0;
  *(_QWORD *)&v47[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v58);
  if ( result < 0 )
    return result;
  GrantedAccess = v58.GrantedAccess;
  v56 = v58.GrantedAccess;
  v14 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v14->Flags;
  v53 = &v14->Flags;
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
    v52 = 0;
    v21 = (__int64)IoStatusBlock;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v62, *(_BYTE *)p_Flags & 2);
    v60 = KeGetCurrentThread();
    v23 = v60->ApcState.Process[1].ActiveProcessors.Bitmap[6];
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
      v55 = 0;
      while ( v28 < v20 )
      {
        if ( ((__int64)BufferDescription[v28].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v55 = ++v28;
      }
      v26 = BufferLength;
    }
    v14 = FileObject;
    if ( FileObject->CompletionContext && (v62.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v47[7] = *v10;
      v14 = FileObject;
    }
    p_Flags = &v14->Flags;
    v53 = &v14->Flags;
    v29 = v14->Flags;
    if ( (v29 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( SectorSize && ((SectorSize - 1) & v26) != 0 && v26 % SectorSize )
        RtlRaiseStatus(-1073741811);
      if ( v10
        && *(_QWORD *)&v47[7] != -1LL
        && (*(_DWORD *)&v47[7] != -2 || *(_DWORD *)&v47[11] != -1 || (v29 & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v47[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v22 = (__int64)v9;
      v50 = *(_DWORD *)v22;
      v14 = FileObject;
    }
    GrantedAccess = v56;
    goto LABEL_61;
  }
  if ( v10 )
    *(LARGE_INTEGER *)&v47[7] = *v10;
  if ( v9 )
    v50 = *v9;
LABEL_61:
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v47[7] = -1;
    *(_DWORD *)&v47[11] = -1;
  }
  if ( Event )
  {
    v31 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v51 = Object;
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
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    v43 = FileObject;
    v44 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v47[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v43->Busy, 1) )
    {
      v14 = FileObject;
      v45 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v47);
    }
    else
    {
      if ( v44 )
        BYTE2(v44[1].Left) |= 1u;
      v14 = FileObject;
      ObfReferenceObject(FileObject);
      v45 = 0;
    }
    if ( v47[0] )
    {
      if ( v51 )
        ObfDereferenceObject(v51);
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v45;
    }
    v32 = 1;
    if ( !v10 && !*(_DWORD *)&v47[7] || *(_DWORD *)&v47[7] == -2 && *(_DWORD *)&v47[11] == -1 )
      *(_QWORD *)&v47[7] = v14->CurrentByteOffset.QuadPart;
    p_Flags = v53;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( v51 )
        ObfDereferenceObject(v51);
LABEL_118:
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return -1073741811;
    }
    v32 = 0;
  }
  if ( *(int *)&v47[11] < 0 && (*(_DWORD *)&v47[11] != -1 || *(_DWORD *)&v47[7] != -1) )
  {
    if ( v51 )
      ObfDereferenceObject(v51);
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
    Irp->UserEvent = (PKEVENT)v51;
    v35 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v62;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v63;
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
    if ( (*v53 & 8) != 0 )
      v34->Flags |= 0xA01u;
    else
      v34->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = v37;
    CurrentStackLocation[-1].Parameters.Create.Options = v50;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v47[7];
    FileObjectExtension = v14->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v35->Information;
    return IopSynchronousServiceTail(DeviceObject, v34, (__int64)v14, 1, AccessMode, v32, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v14, v51);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
