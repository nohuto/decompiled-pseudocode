/*
 * XREFs of NtWriteFile @ 0x140639C60
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140306FC4 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140003BB0 (ObpIncrPointerCountEx.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140003BE0 (ExSlowReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     ExFastReplenishHandleTableEntry @ 0x140134C4C (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopExceptionFilter @ 0x14027EFC0 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402A8E98 (MmUpdateMdlTracker.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1405E9990 (ExpLookupHandleTableEntry.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140698A24 (ExpBlockOnLockedHandleEntry.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ObpAuditObjectAccess @ 0x1408625F4 (ObpAuditObjectAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
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
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // al
  struct _KTHREAD *v11; // rsi
  _KPROCESS *Process; // rax
  unsigned int *v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  signed __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  __int64 v22; // rbx
  bool v23; // zf
  struct _FILE_OBJECT *v24; // rsi
  int v25; // edx
  int v26; // r13d
  __int64 v27; // r14
  char v28; // r8
  char v29; // r8
  unsigned __int8 v30; // r14
  __int64 v31; // rcx
  NTSTATUS v32; // ebx
  _DWORD *FileObjectExtension; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  __int64 v35; // rcx
  _DWORD *v36; // rbx
  char v37; // dl
  unsigned __int64 v38; // rax
  ULONG v39; // r15d
  PVOID v40; // r12
  PLARGE_INTEGER v41; // r14
  int v42; // ecx
  __int64 v43; // rax
  USHORT SectorSize; // r8
  int v45; // ebx
  unsigned int v46; // edx
  unsigned int v47; // r9d
  __int16 v49; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v51; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  ULONG *p_Flags; // rcx
  ULONG Flags; // eax
  struct _KTHREAD *v55; // rax
  volatile __int32 *v56; // rbx
  __int64 v57; // r9
  char v58; // dl
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v60; // r14
  char v61; // bl
  struct _KTHREAD *v62; // rax
  struct _KTHREAD *v63; // rcx
  unsigned __int64 v64; // rax
  volatile __int32 *v65; // rbx
  PVOID v66; // rbx
  struct _KTHREAD *v67; // rcx
  __int64 v68; // rax
  IRP *Irp; // r14
  char v70; // dl
  __int64 v71; // r13
  struct _DEVICE_OBJECT *v72; // rbx
  ULONG v73; // eax
  _DWORD *v74; // rax
  int v75; // r13d
  struct _MDL *Mdl; // rax
  unsigned __int64 v77; // rbx
  unsigned __int8 v78; // di
  PRKEVENT v79; // rsi
  int v80; // eax
  int v81; // eax
  _KPROCESS *v82; // rcx
  PVOID v84; // rbx
  PVOID v85; // rbx
  struct _IRP *PoolWithQuota_0; // rax
  int v87; // eax
  signed __int32 v88[8]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int8 v89; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-B0h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-A8h] BYREF
  char v92; // [rsp+68h] [rbp-A0h]
  _BYTE v93[7]; // [rsp+69h] [rbp-9Fh] BYREF
  __int128 v94; // [rsp+70h] [rbp-98h] BYREF
  PRKEVENT Eventa; // [rsp+80h] [rbp-88h]
  PIRP v96; // [rsp+88h] [rbp-80h]
  ULONG v97; // [rsp+90h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-70h]
  unsigned int *v99; // [rsp+A0h] [rbp-68h]
  int v100; // [rsp+A8h] [rbp-60h]
  int v101; // [rsp+ACh] [rbp-5Ch]
  __int128 v102; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v103; // [rsp+C0h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-40h]
  __int64 retaddr; // [rsp+108h] [rbp+0h]
  unsigned __int64 v106; // [rsp+110h] [rbp+8h]
  char v107; // [rsp+110h] [rbp+8h]
  NTSTATUS v108; // [rsp+110h] [rbp+8h]

  v106 = (unsigned __int64)FileHandle;
  v9 = (ULONG_PTR)FileHandle;
  Eventa = 0LL;
  v97 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v89 = v10;
  v11 = CurrentThread;
  if ( (int)FileHandle < 0 )
  {
    if ( !v10 && (unsigned __int64)FileHandle <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v106 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v13 = (unsigned int *)ObpKernelHandleTable;
      v99 = (unsigned int *)ObpKernelHandleTable;
      goto LABEL_3;
    }
    return -1073741816;
  }
  Process = CurrentThread->ApcState.Process;
  v13 = (unsigned int *)Process[1].ActiveProcessors.Bitmap[5];
  v99 = v13;
  FileHandle = (HANDLE)HIDWORD(Process[1].DirectoryTableBase);
  if ( ((unsigned int)FileHandle & 0x4000000) == 0 )
    return -1073741816;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v9 & 0x3FC) != 0 && (v14 = (_QWORD *)ExpLookupHandleTableEntry(v13, v9), (v15 = v14) != 0LL) )
  {
    _m_prefetchw(v14);
    v16 = *v14;
LABEL_6:
    *(_QWORD *)&v94 = v16;
    v17 = v15[1];
    v18 = v16;
    *((_QWORD *)&v94 + 1) = v17;
    while ( (v18 & 0x1FFFE) != 0 )
    {
      if ( (v18 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v13, v15);
        _m_prefetchw(v15);
        v16 = *v15;
        goto LABEL_6;
      }
      FileHandle = (HANDLE)v17;
      *(_QWORD *)&v20 = v18;
      *((_QWORD *)&v20 + 1) = v17;
      v21 = _InterlockedCompareExchange128(v15, v17, v18 - 2, (signed __int64 *)&v20);
      v19 = v20;
      v18 = v20;
      v94 = v20;
      v17 = *((_QWORD *)&v20 + 1);
      if ( v21 )
      {
        if ( (unsigned __int16)((unsigned __int64)v19 >> 1) != 16 )
        {
          v22 = (v19 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v96 = (PIRP)v22;
          goto LABEL_12;
        }
        *(_QWORD *)&v94 = v19 ^ ((unsigned int)v19 ^ (2 * (unsigned int)((unsigned __int64)v19 >> 1) - 2)) & 0x1FFFE;
        v22 = ((__int64)v94 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
        v96 = (PIRP)v22;
        ObpIncrPointerCountEx((volatile signed __int64 *)v22, 32752);
        v81 = ExFastReplenishHandleTableEntry(v15, (unsigned __int64 *)&v94, 32752);
        FileHandle = (HANDLE)v81;
        if ( v81 )
        {
          FileHandle = (HANDLE)(unsigned int)-v81;
          _InterlockedExchangeAdd64((volatile signed __int64 *)v22, (int)FileHandle);
          goto LABEL_138;
        }
        LODWORD(v17) = DWORD2(v94);
        v18 = v94;
        goto LABEL_12;
      }
    }
    if ( !ExLockHandleTableEntry((__int64)v13, v15) )
    {
      v9 = v106;
      goto LABEL_143;
    }
    v96 = (PIRP)((*v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    v94 = *(_OWORD *)v15;
    v80 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v15);
    ObpIncrPointerCountEx((volatile signed __int64 *)&v96->Type, v80 + 1);
    _InterlockedExchangeAdd64(v15, 1uLL);
    FileHandle = v13 + 12;
    _InterlockedOr(v88, 0);
    if ( !*((_QWORD *)v13 + 6) )
    {
LABEL_138:
      LODWORD(v17) = DWORD2(v94);
      v18 = v94;
      goto LABEL_139;
    }
    ExfUnblockPushLock((volatile __int64 *)FileHandle, 0LL);
    LODWORD(v17) = DWORD2(v94);
    v18 = v94;
  }
  else
  {
    LODWORD(v17) = DWORD2(v94);
    v18 = v94;
LABEL_143:
    if ( v9 )
    {
      ExHandleLogBadReference((ULONG_PTR)v13, v9, KeGetCurrentThread()->PreviousMode);
      LODWORD(v17) = DWORD2(v94);
      v18 = v94;
    }
    v15 = 0LL;
  }
LABEL_139:
  v22 = (__int64)v96;
LABEL_12:
  v23 = v11->KernelApcDisable++ == -1;
  if ( v23
    && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)FileHandle);
  }
  if ( !v15 )
  {
    v32 = -1073741816;
    LOBYTE(v26) = v106;
    v30 = v89;
LABEL_147:
    v24 = 0LL;
    Object = 0LL;
    goto LABEL_29;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v22, 1, 1u, 1953261124);
  v24 = (struct _FILE_OBJECT *)(v22 + 48);
  v100 = 0;
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v22 + 24) ^ (unsigned __int64)BYTE1(v22)] != IoFileObjectType )
  {
    v32 = -1073741788;
    LOBYTE(v26) = v106;
    v30 = v89;
    goto LABEL_170;
  }
  v25 = ~(unsigned __int8)(*(_DWORD *)(v22 + 128) >> 5) & 4 | 2;
  v100 = v25;
  v26 = v17 & 0x1FFFFFF;
  v27 = (v18 >> 17) & 7;
  v28 = v27 | 8;
  if ( (v17 & 0x2000000) == 0 )
    v28 = v27;
  v29 = v28 & 7;
  v30 = v89;
  if ( (v26 & v25) == 0 )
  {
    v32 = -1073741790;
    goto LABEL_170;
  }
  if ( v89 )
  {
    if ( (*(_BYTE *)(v22 + 26) & 0x40) != 0 )
    {
      v31 = v22 - ObpInfoMaskToOffset[*(_BYTE *)(v22 + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v31 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) == 1LL )
        {
          v32 = -1073700858;
LABEL_170:
          PsDereferenceSiloContext(v24);
          goto LABEL_147;
        }
        LODWORD(v22) = (_DWORD)v96;
        v25 = v100;
      }
    }
  }
  if ( (v29 & 4) != 0 && v89 && !(unsigned __int8)ObpAuditObjectAccess((_DWORD)v99, v106, (_DWORD)v15, v22, v25) )
  {
    v32 = -1073741816;
    goto LABEL_170;
  }
  v32 = 0;
  FileObjectExtension = v24->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    v82 = KeGetCurrentThread()->ApcState.Process;
    Object = v24;
    if ( (unsigned __int8)PsIsProcessAppContainer(v82) )
    {
      ObfDereferenceObject(v24);
      return -1073739504;
    }
  }
  else
  {
    Object = v24;
  }
LABEL_29:
  if ( v32 < 0 )
    return v32;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v24);
  DeviceObject = RelatedDeviceObject;
  if ( v30 )
  {
    v101 = 0;
    v35 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v35 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v35 = *(_DWORD *)v35;
    v36 = Object;
    v37 = *((_BYTE *)Object + 80) & 2;
    v38 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v38 && ((v49 = *(_WORD *)(v38 + 8), v49 == 332) || v49 == 452) )
    {
      v92 = 1;
      if ( !v37 )
      {
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        Status->Status = Status->Status;
        IoStatusBlock = Status;
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      }
    }
    else
    {
      v92 = 0;
    }
    v39 = Length;
    v40 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v24 = (struct _FILE_OBJECT *)Object;
    if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
    v41 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v24 = (struct _FILE_OBJECT *)Object;
    }
    v42 = v36[20];
    if ( (v42 & 8) == 0 )
    {
LABEL_41:
      v43 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v43 = 0x7FFFFFFF0000LL;
        v97 = *(_DWORD *)v43;
        v24 = (struct _FILE_OBJECT *)Object;
      }
      goto LABEL_73;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( SectorSize )
    {
      v45 = SectorSize;
      v46 = SectorSize;
      v47 = SectorSize;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_60:
        if ( SectorSize && Length % v47 || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_55;
LABEL_50:
        if ( ByteOffset
          && QuadPart != -1
          && (QuadPart != -2 || (v42 & 2) == 0)
          && SectorSize
          && ((v45 - 1) & (unsigned int)QuadPart) != 0 )
        {
          goto LABEL_55;
        }
        goto LABEL_41;
      }
    }
    else
    {
      v45 = 0;
      v46 = 0;
    }
    v47 = v46;
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_50;
    goto LABEL_60;
  }
  v41 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v39 = Length;
  v40 = Buffer;
  if ( Key )
    v97 = *Key;
LABEL_73:
  if ( (v26 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v75 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v89, &v103, 0LL);
    v51 = v103;
    Eventa = (PRKEVENT)v103;
    if ( v75 < 0 )
    {
      ObfDereferenceObject(v24);
      return v75;
    }
    KeResetEvent((PRKEVENT)v103);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v51 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v24->Flags;
  v99 = &v24->Flags;
  Flags = v24->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v41 && (Flags & 0x280) == 0 )
    {
      if ( v51 )
        ObfDereferenceObject(v51);
      goto LABEL_55;
    }
    v58 = 0;
    v107 = 0;
    goto LABEL_99;
  }
  v55 = KeGetCurrentThread();
  --v55->KernelApcDisable;
  v56 = (volatile __int32 *)Object;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v24 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
    goto LABEL_80;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v24 = (struct _FILE_OBJECT *)Object;
  v108 = IopAcquireFileObjectLock((char *)Object, v89, (*v99 & 4) != 0, v93);
  if ( !v93[0] )
  {
LABEL_80:
    v58 = 1;
    v107 = 1;
    if ( !v41 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
      QuadPart = v24->CurrentByteOffset.QuadPart;
    if ( v24->PrivateCacheMap )
    {
      v102 = 0uLL;
      FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
      if ( QuadPart < 0 && QuadPart != -1 )
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        _InterlockedExchange(v56 + 29, 0);
        v84 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v84);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v60 = (void *)VfFastIoSnapState();
      else
        v60 = 0LL;
      LOBYTE(v57) = 1;
      v61 = FastIoWrite(v24, &QuadPart, v39, v57, v97, v40, &v102, DeviceObject);
      if ( v60 )
        VfFastIoCheckState(v60);
      if ( v61 && !(_DWORD)v102 )
      {
        v62 = KeGetCurrentThread();
        ++v62->WriteOperationCount;
        __incgsdword(0x2EE0u);
        v63 = KeGetCurrentThread();
        v64 = DWORD2(v102);
        v63->WriteTransferCount += DWORD2(v102);
        __addgsqword(0x2EF0u, v64);
        *(_OWORD *)&IoStatusBlock->Status = v102;
        v65 = (volatile __int32 *)Object;
        if ( Event )
        {
          v79 = Eventa;
          if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v79);
        }
        _InterlockedExchange(v65 + 29, 0);
        v66 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v66);
        v67 = KeGetCurrentThread();
        v23 = v67->KernelApcDisable++ == -1;
        if ( v23
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v67->ApcState.ApcListHead[0].Flink != &v67->152
          && !v67->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v67);
        }
        ObfDereferenceObject(Object);
        return v102;
      }
      v51 = Eventa;
      p_Flags = v99;
      v58 = 1;
      RelatedDeviceObject = DeviceObject;
    }
    else
    {
      v51 = Eventa;
      p_Flags = v99;
      RelatedDeviceObject = DeviceObject;
    }
LABEL_99:
    if ( QuadPart >= 0 || QuadPart == -1 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
      {
        KeResetEvent(&v24->Event);
        v58 = v107;
        RelatedDeviceObject = DeviceObject;
      }
      v68 = IopAllocateIrpExReturn(
              (__int64)RelatedDeviceObject,
              (unsigned __int8)RelatedDeviceObject->StackSize,
              (unsigned __int8)v58 ^ 1u,
              retaddr);
      Irp = (IRP *)v68;
      v96 = (PIRP)v68;
      if ( v68 )
      {
        *(_QWORD *)(v68 + 192) = v24;
        *(_QWORD *)(v68 + 152) = CurrentThread;
        *(_QWORD *)(v68 + 160) = 0LL;
        v70 = v89;
        *(_WORD *)(v68 + 64) = v89;
        *(_BYTE *)(v68 + 68) = 0;
        *(_QWORD *)(v68 + 104) = 0LL;
        *(_QWORD *)(v68 + 80) = v51;
        *(_QWORD *)(v68 + 72) = IoStatusBlock;
        *(_QWORD *)(v68 + 88) = ApcRoutine;
        *(_QWORD *)(v68 + 96) = ApcContext;
        v71 = *(_QWORD *)(v68 + 184);
        *(_DWORD *)(v71 - 72) = 4;
        *(_QWORD *)(v71 - 24) = v24;
        if ( (*v99 & 0x10) != 0 )
          *(_BYTE *)(v71 - 70) = 4;
        *(_QWORD *)(v68 + 24) = 0LL;
        *(_QWORD *)(v68 + 8) = 0LL;
        v72 = DeviceObject;
        v73 = DeviceObject->Flags;
        if ( (v73 & 4) != 0 )
        {
          if ( v39 )
          {
            PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNxCacheAligned, v39);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota_0;
            memmove(PoolWithQuota_0, v40, v39);
            v87 = 48;
            v72 = DeviceObject;
            v70 = v89;
          }
          else
          {
            v87 = 16;
          }
          Irp->Flags = v87;
        }
        else
        {
          Irp->Flags = 0;
          if ( (v73 & 0x10) != 0 )
          {
            if ( v39 )
            {
              Mdl = IoAllocateMdl(v40, v39, 0, 1u, Irp);
              v77 = (unsigned __int64)Mdl;
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v78 = *(_BYTE *)(v71 - 72);
              MmProbeAndLockPages(Mdl, v89, IoReadAccess);
              if ( (MmTrackLockedPages & 1) != 0 )
                MmUpdateMdlTracker(v77, (__int64)DeviceObject->DriverObject->MajorFunction[v78], (__int64)DeviceObject);
              v72 = DeviceObject;
              v70 = v89;
            }
          }
          else
          {
            Irp->UserBuffer = v40;
          }
        }
        Irp->Flags |= (v24->Flags & 8 | 0x5000) >> 3;
        *(_DWORD *)(v71 - 64) = v39;
        *(_DWORD *)(v71 - 56) = v97;
        *(_QWORD *)(v71 - 48) = QuadPart;
        v74 = v24->FileObjectExtension;
        if ( v74 && (*v74 & 0x10) != 0 )
          *(_DWORD *)(v71 - 52) = IoStatusBlock->Information;
        return IopSynchronousServiceTail(v72, Irp, v70, v107, 1);
      }
      else
      {
        IopAllocateIrpCleanup(v24, v51);
        return -1073741670;
      }
    }
    if ( v51 )
    {
      ObfDereferenceObject(v51);
      v58 = v107;
    }
    if ( v58 )
    {
      _InterlockedExchange((volatile __int32 *)&v24->Busy, 0);
      v85 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v85);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v24 = (struct _FILE_OBJECT *)Object;
    }
LABEL_55:
    ObfDereferenceObject(v24);
    return -1073741811;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  ObfDereferenceObject(v24);
  return v108;
}
