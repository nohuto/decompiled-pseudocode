/*
 * XREFs of NtReadFile @ 0x1405EFC20
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1403242A8 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1406715CC (PfSnGetPrefetchInstructions.c)
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
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400DE82C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x1402934E8 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtReadFile(
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
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v14; // rcx
  ULONG *p_Flags; // rsi
  int v16; // r13d
  PLARGE_INTEGER v17; // rdi
  __int64 v18; // rax
  USHORT SectorSize; // r8
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  PRKEVENT v22; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  ULONG *v24; // r14
  ULONG Flags; // eax
  struct _KTHREAD *v26; // rax
  PFILE_OBJECT v27; // rbx
  PRTL_BALANCED_NODE v28; // rax
  __int64 v29; // r9
  NTSTATUS v30; // esi
  PFAST_IO_READ FastIoRead; // rdi
  void *v32; // rsi
  PDEVICE_OBJECT v33; // r13
  char v34; // di
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rcx
  unsigned __int64 v37; // rax
  volatile __int32 *p_Type; // rbx
  char v39; // r15
  __int64 Irp; // rax
  IRP *v41; // rdi
  PIO_STATUS_BLOCK v42; // rcx
  __int64 v43; // rsi
  ULONG v44; // eax
  ULONG v45; // edx
  _DWORD *FileObjectExtension; // rax
  int v47; // r13d
  struct _MDL *Mdl; // rax
  PRKEVENT v49; // rdi
  __int64 v50; // [rsp+50h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-90h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-88h] BYREF
  ULONG v53; // [rsp+68h] [rbp-80h]
  PRKEVENT Eventa; // [rsp+70h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-70h]
  int v56; // [rsp+80h] [rbp-68h]
  __int128 v57; // [rsp+88h] [rbp-60h] BYREF
  PVOID Object[2]; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]
  PIO_APC_ROUTINE v60; // [rsp+100h] [rbp+18h] BYREF
  PVOID v61; // [rsp+108h] [rbp+20h]

  v61 = ApcContext;
  v60 = ApcRoutine;
  Eventa = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v56 = 0;
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v12 = FileObject;
    p_Flags = &FileObject->Flags;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v60, FileObject->Flags & 2);
    v16 = (int)Buffer;
    ProbeForWrite(Buffer, Length, 1u);
    if ( v12->CompletionContext && ((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_99;
    v17 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = FileObject;
    }
    if ( (*p_Flags & 8) == 0 )
    {
LABEL_8:
      v18 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        v53 = *(_DWORD *)v18;
        v12 = FileObject;
      }
      goto LABEL_29;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( SectorSize )
    {
      v20 = SectorSize;
      v21 = SectorSize;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_25:
        if ( SectorSize && Length % v21 )
          goto LABEL_99;
        v20 = v21;
        if ( (RelatedDeviceObject->AlignmentRequirement & v16) != 0 )
          goto LABEL_99;
LABEL_20:
        if ( ByteOffset && SectorSize && ((v20 - 1) & (unsigned int)QuadPart) != 0 )
          goto LABEL_99;
        goto LABEL_8;
      }
    }
    else
    {
      v20 = 0;
    }
    v21 = v20;
    if ( (RelatedDeviceObject->AlignmentRequirement & v16) == 0 )
      goto LABEL_20;
    goto LABEL_25;
  }
  v17 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  if ( Key )
    v53 = *Key;
LABEL_29:
  if ( Event )
  {
    v47 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, Object, 0LL);
    v22 = (PRKEVENT)Object[0];
    Eventa = (PRKEVENT)Object[0];
    if ( v47 < 0 )
    {
      ObfDereferenceObject(v12);
      return v47;
    }
    KeResetEvent((PRKEVENT)Object[0]);
  }
  else
  {
    v22 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v24 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( v17 || (Flags & 0x280) != 0 )
    {
      v39 = 0;
      v33 = DeviceObject;
      goto LABEL_52;
    }
    if ( v22 )
      ObfDereferenceObject(v22);
LABEL_99:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v26 = KeGetCurrentThread();
  --v26->KernelApcDisable;
  v27 = FileObject;
  v28 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
  LOBYTE(v50) = 0;
  if ( _InterlockedExchange((volatile __int32 *)&v27->Busy, 1) )
  {
    v12 = FileObject;
    v30 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)&v50);
  }
  else
  {
    if ( v28 )
      BYTE2(v28[1].Left) |= 1u;
    v12 = FileObject;
    ObfReferenceObject(FileObject);
    v30 = 0;
  }
  if ( !(_BYTE)v50 )
  {
    if ( !v17 || QuadPart == -2 )
      QuadPart = v12->CurrentByteOffset.QuadPart;
    if ( v12->PrivateCacheMap )
    {
      v57 = 0uLL;
      FastIoRead = FastIoDispatch->FastIoRead;
      Object[1] = FastIoRead;
      if ( QuadPart < 0 )
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        goto LABEL_93;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v32 = (void *)VfFastIoSnapState();
      else
        v32 = 0LL;
      v33 = DeviceObject;
      LOBYTE(v29) = 1;
      v34 = ((__int64 (__fastcall *)(PFILE_OBJECT, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT))FastIoRead)(
              v12,
              &QuadPart,
              Length,
              v29,
              v53,
              Buffer,
              &v57,
              DeviceObject);
      if ( v32 )
        VfFastIoCheckState(v32);
      if ( v34 && (!(_DWORD)v57 || (_DWORD)v57 == -1073741807 || (_DWORD)v57 == -2147483643) )
      {
        v35 = KeGetCurrentThread();
        ++v35->ReadOperationCount;
        __incgsdword(0x2EDCu);
        v36 = KeGetCurrentThread();
        v37 = DWORD2(v57);
        v36->ReadTransferCount += DWORD2(v57);
        __addgsqword(0x2EE8u, v37);
        *(_OWORD *)&IoStatusBlock->Status = v57;
        p_Type = (volatile __int32 *)&FileObject->Type;
        if ( Event )
        {
          v49 = Eventa;
          if ( (FileObject->Flags & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v49);
        }
        IopReleaseFileObjectLock(p_Type);
        ObfDereferenceObject((PVOID)p_Type);
        return v57;
      }
    }
    else
    {
      v33 = DeviceObject;
    }
    v39 = 1;
    v22 = Eventa;
LABEL_52:
    if ( QuadPart >= 0 )
    {
      IopResetEvent((__int64)v12);
      Irp = IopAllocateIrpExReturn();
      v41 = (IRP *)Irp;
      DeviceObject = (PDEVICE_OBJECT)Irp;
      if ( !Irp )
      {
        IopAllocateIrpCleanup(v12, v22);
        return -1073741670;
      }
      *(_QWORD *)(Irp + 192) = v12;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_QWORD *)(Irp + 80) = v22;
      v42 = IoStatusBlock;
      *(_QWORD *)(Irp + 72) = IoStatusBlock;
      *(_QWORD *)(Irp + 88) = v60;
      *(_QWORD *)(Irp + 96) = v61;
      v43 = *(_QWORD *)(Irp + 184);
      *(_DWORD *)(v43 - 72) = 3;
      *(_QWORD *)(v43 - 24) = v12;
      *(_QWORD *)(Irp + 24) = 0LL;
      *(_QWORD *)(Irp + 8) = 0LL;
      v44 = v33->Flags;
      if ( (v44 & 4) != 0 )
      {
        v45 = Length;
        if ( !Length )
        {
          v41->Flags = 80;
          goto LABEL_57;
        }
        v41->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                                        NonPagedPoolNxCacheAligned,
                                                        Length);
        v41->Flags = 112;
        v42 = IoStatusBlock;
      }
      else
      {
        v41->Flags = 0;
        if ( (v44 & 0x10) != 0 )
        {
          v45 = Length;
          if ( Length )
          {
            Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v41);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            MmProbeAndLockPages(Mdl, PreviousMode, IoWriteAccess);
            v42 = IoStatusBlock;
            v45 = Length;
          }
          goto LABEL_57;
        }
      }
      v45 = Length;
      v41->UserBuffer = Buffer;
LABEL_57:
      if ( (*v24 & 8) != 0 )
        v41->Flags |= 0x901u;
      else
        v41->Flags |= 0x900u;
      *(_DWORD *)(v43 - 64) = v45;
      *(_DWORD *)(v43 - 56) = v53;
      *(_QWORD *)(v43 - 48) = QuadPart;
      FileObjectExtension = v12->FileObjectExtension;
      if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
        *(_DWORD *)(v43 - 52) = v42->Information;
      return IopSynchronousServiceTail(v33, v41, PreviousMode, v39, 0);
    }
    if ( v22 )
      ObfDereferenceObject(v22);
    if ( !v39 )
    {
LABEL_94:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
LABEL_93:
    IopReleaseFileObjectLock((volatile __int32 *)&v12->Type);
    goto LABEL_94;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  ObfDereferenceObject(v12);
  return v30;
}
