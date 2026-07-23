/*
 * XREFs of NtWriteFile @ 0x140629160
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140324858 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
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
 *     IopFileObjectRevoked @ 0x14003FCB0 (IopFileObjectRevoked.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400EEE18 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IopExceptionFilter @ 0x140293788 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402C0548 (MmUpdateMdlTracker.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS v11; // ebx
  PFILE_OBJECT v12; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r8
  __int64 v14; // rcx
  ULONG *p_Flags; // rbx
  ULONG v16; // r13d
  PVOID v17; // r15
  PLARGE_INTEGER v18; // rsi
  __int64 v19; // rax
  USHORT SectorSize; // r10
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // r11d
  PRKEVENT v25; // rbx
  ULONG *v26; // r12
  ULONG Flags; // eax
  struct _KTHREAD *v28; // rax
  PRTL_BALANCED_NODE v29; // rax
  __int64 v30; // r9
  struct _IRP *MasterIrp; // rbx
  char v32; // bl
  struct _KTHREAD *v33; // rax
  struct _KTHREAD *v34; // rcx
  unsigned __int64 v35; // rax
  volatile __int32 *p_Type; // rbx
  char v37; // r14
  IRP *v38; // rax
  IRP *v39; // rsi
  char v40; // cl
  PIO_STATUS_BLOCK v41; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PDEVICE_OBJECT v43; // rbx
  ULONG v44; // eax
  _DWORD *FileObjectExtension; // rax
  int v46; // r12d
  struct _MDL *Mdl; // r15
  PRKEVENT v48; // rdi
  struct _IRP *PoolWithQuota_1; // rax
  KPROCESSOR_MODE v50; // [rsp+50h] [rbp-A8h]
  _BYTE v51[15]; // [rsp+51h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-98h]
  PRKEVENT Eventa; // [rsp+68h] [rbp-90h]
  ULONG v54; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-80h]
  PIRP Irp; // [rsp+80h] [rbp-78h]
  int v57; // [rsp+88h] [rbp-70h]
  __int128 v58; // [rsp+90h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-58h]
  PVOID Object[2]; // [rsp+A8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-40h]
  LARGE_INTEGER v62; // [rsp+110h] [rbp+18h] BYREF
  PVOID v63; // [rsp+118h] [rbp+20h]

  v63 = ApcContext;
  v62.QuadPart = (LONGLONG)ApcRoutine;
  v59 = 0LL;
  Eventa = 0LL;
  v54 = 0;
  *(_QWORD *)&v51[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v50 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  v12 = FileObject;
  if ( v11 >= 0 && IopFileObjectRevoked((__int64)FileObject) )
  {
    ObfDereferenceObject(FileObject);
    return -1073739504;
  }
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v57 = 0;
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v62, FileObject->Flags & 2);
    v16 = Length;
    v17 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( FileObject->CompletionContext && (v62.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_27;
    v18 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v51[7] = *ByteOffset;
      v12 = FileObject;
    }
    RelatedDeviceObject = DeviceObject;
    if ( (*p_Flags & 8) == 0 )
      goto LABEL_13;
    SectorSize = DeviceObject->SectorSize;
    if ( SectorSize )
    {
      v21 = SectorSize;
      v22 = SectorSize;
      v23 = SectorSize;
      if ( ((SectorSize - 1) & Length) != 0 )
        goto LABEL_32;
    }
    else
    {
      v21 = 0;
      v22 = 0;
    }
    v23 = v22;
    if ( (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
    {
LABEL_22:
      if ( !ByteOffset
        || *(_QWORD *)&v51[7] == -1LL
        || *(_DWORD *)&v51[7] == -2 && *(_DWORD *)&v51[11] == -1 && (*p_Flags & 2) != 0
        || !SectorSize
        || ((v21 - 1) & *(_DWORD *)&v51[7]) == 0 )
      {
LABEL_13:
        v19 = (__int64)Key;
        if ( Key )
        {
          if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
            v19 = 0x7FFFFFFF0000LL;
          v54 = *(_DWORD *)v19;
          v12 = FileObject;
        }
        goto LABEL_41;
      }
LABEL_27:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
LABEL_32:
    if ( SectorSize && Length % v23 || (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
      goto LABEL_27;
    goto LABEL_22;
  }
  v18 = ByteOffset;
  if ( ByteOffset )
    *(LARGE_INTEGER *)&v51[7] = *ByteOffset;
  v16 = Length;
  v17 = Buffer;
  if ( Key )
    v54 = *Key;
LABEL_41:
  if ( (BYTE4(v59) & 6) == 4 )
    *(_QWORD *)&v51[7] = -1LL;
  if ( Event )
  {
    v46 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, Object, 0LL);
    v25 = (PRKEVENT)Object[0];
    Eventa = (PRKEVENT)Object[0];
    if ( v46 < 0 )
    {
      ObfDereferenceObject(v12);
      return v46;
    }
    KeResetEvent((PRKEVENT)Object[0]);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v25 = Eventa;
  }
  Irp = (PIRP)RelatedDeviceObject->DriverObject->FastIoDispatch;
  v26 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) != 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    v29 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    v51[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v12 = FileObject;
      v11 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v51);
    }
    else
    {
      if ( v29 )
        BYTE2(v29[1].Left) |= 1u;
      v12 = FileObject;
      ObfReferenceObject(FileObject);
      v11 = 0;
    }
    if ( !v51[0] )
    {
      v51[1] = 1;
      if ( !v18 && !*(_DWORD *)&v51[7] || *(_DWORD *)&v51[7] == -2 && *(_DWORD *)&v51[11] == -1 )
        *(_QWORD *)&v51[7] = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v58 = 0uLL;
        MasterIrp = Irp->AssociatedIrp.MasterIrp;
        Object[1] = MasterIrp;
        if ( *(int *)&v51[11] < 0 && (*(_DWORD *)&v51[11] != -1 || *(_DWORD *)&v51[7] != -1) )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
LABEL_115:
          IopReleaseFileObjectLock((volatile __int32 *)&v12->Type);
LABEL_116:
          ObfDereferenceObject(v12);
          return -1073741811;
        }
        if ( (MmVerifierData & 0x10) != 0 )
          Irp = (PIRP)VfFastIoSnapState();
        else
          Irp = 0LL;
        LOBYTE(v30) = 1;
        v32 = ((__int64 (__fastcall *)(PFILE_OBJECT, _BYTE *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT))MasterIrp)(
                v12,
                &v51[7],
                v16,
                v30,
                v54,
                v17,
                &v58,
                DeviceObject);
        if ( Irp )
          VfFastIoCheckState(Irp);
        if ( v32 && !(_DWORD)v58 )
        {
          v33 = KeGetCurrentThread();
          ++v33->WriteOperationCount;
          __incgsdword(0x2EE0u);
          v34 = KeGetCurrentThread();
          v35 = DWORD2(v58);
          v34->WriteTransferCount += DWORD2(v58);
          __addgsqword(0x2EF0u, v35);
          *(_OWORD *)&IoStatusBlock->Status = v58;
          p_Type = (volatile __int32 *)&FileObject->Type;
          if ( Event )
          {
            v48 = Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            ObfDereferenceObject(v48);
          }
          IopReleaseFileObjectLock(p_Type);
          ObfDereferenceObject((PVOID)p_Type);
          return v58;
        }
        v25 = Eventa;
        v37 = 1;
      }
      else
      {
        v25 = Eventa;
        v37 = 1;
      }
      goto LABEL_66;
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(v12);
    return v11;
  }
  if ( !v18 && (Flags & 0x280) == 0 )
  {
    if ( v25 )
      ObfDereferenceObject(v25);
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v37 = 0;
  v51[1] = 0;
LABEL_66:
  if ( *(int *)&v51[11] < 0 && (*(_DWORD *)&v51[11] != -1 || *(_DWORD *)&v51[7] != -1) )
  {
    if ( v25 )
      ObfDereferenceObject(v25);
    if ( !v37 )
      goto LABEL_116;
    goto LABEL_115;
  }
  IopResetEvent((__int64)v12);
  v38 = (IRP *)IopAllocateIrpExReturn();
  v39 = v38;
  Irp = v38;
  if ( v38 )
  {
    v38->Tail.Overlay.OriginalFileObject = v12;
    v38->Tail.Overlay.Thread = CurrentThread;
    v38->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v40 = v50;
    v38->RequestorMode = v50;
    v38->PendingReturned = 0;
    v38->Cancel = 0;
    v38->CancelRoutine = 0LL;
    v38->UserEvent = v25;
    v41 = IoStatusBlock;
    v38->UserIosb = IoStatusBlock;
    v38->Overlay.AllocationSize = v62;
    v38->Overlay.AsynchronousParameters.UserApcContext = v63;
    CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v12;
    if ( (*v26 & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v38->AssociatedIrp.MasterIrp = 0LL;
    v38->MdlAddress = 0LL;
    v43 = DeviceObject;
    v44 = DeviceObject->Flags;
    if ( (v44 & 4) != 0 )
    {
      if ( v16 )
      {
        PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, v16);
        v39->AssociatedIrp.MasterIrp = PoolWithQuota_1;
        memmove(PoolWithQuota_1, v17, v16);
        v39->Flags = 48;
        v40 = v50;
        v43 = DeviceObject;
        v41 = IoStatusBlock;
      }
      else
      {
        v39->Flags = 16;
      }
    }
    else
    {
      v39->Flags = 0;
      if ( (v44 & 0x10) != 0 )
      {
        if ( v16 )
        {
          Mdl = IoAllocateMdl(v17, v16, 0, 1u, v39);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v51[0] = CurrentStackLocation[-1].MajorFunction;
          MmProbeAndLockPages(Mdl, v50, IoReadAccess);
          if ( (MmTrackLockedPages & 1) != 0 )
            MmUpdateMdlTracker((unsigned __int64)Mdl, (__int64)v43->DriverObject->MajorFunction[v51[0]], (__int64)v43);
          v40 = v50;
          v41 = IoStatusBlock;
        }
      }
      else
      {
        v39->UserBuffer = v17;
      }
    }
    if ( (*v26 & 8) != 0 )
      v39->Flags |= 0xA01u;
    else
      v39->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = v16;
    CurrentStackLocation[-1].Parameters.Create.Options = v54;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v51[7];
    FileObjectExtension = v12->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v41->Information;
    return IopSynchronousServiceTail(v43, v39, (__int64)v12, 1, v40, v51[1], 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v25);
    return -1073741670;
  }
}
