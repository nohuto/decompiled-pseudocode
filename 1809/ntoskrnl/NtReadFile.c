/*
 * XREFs of NtReadFile @ 0x14063B160
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140306FC4 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x14027EFC0 (IopExceptionFilter.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r13
  int v11; // esi
  char *v12; // rbx
  _DWORD *v13; // r14
  _DWORD *v14; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  __int64 v16; // rcx
  _DWORD *v17; // r8
  unsigned __int64 v18; // rax
  PVOID v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  PLARGE_INTEGER v23; // rsi
  __int64 v24; // rax
  USHORT SectorSize; // cx
  unsigned int v27; // edx
  unsigned int v28; // r8d
  __int16 v29; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  struct _KEVENT *v31; // r15
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PIRP v33; // rcx
  int v34; // eax
  struct _KTHREAD *v35; // rax
  volatile __int32 *v36; // r14
  __int64 v37; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v39; // r14
  char v40; // si
  struct _KTHREAD *v41; // rax
  struct _KTHREAD *v42; // rcx
  unsigned __int64 v43; // rax
  volatile __int32 *v44; // rbx
  PVOID v45; // rbx
  struct _KTHREAD *v46; // rcx
  bool v47; // zf
  char v48; // r12
  IRP *v49; // rax
  IRP *v50; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DEVICE_OBJECT *v52; // r13
  ULONG Flags; // eax
  char v54; // bl
  _DWORD *v55; // rax
  int v56; // r13d
  PRKEVENT v57; // rsi
  struct _MDL *Mdl; // rax
  int v59; // eax
  NTSTATUS v61; // r15d
  PVOID v62; // rbx
  PVOID v63; // rbx
  char v64; // [rsp+50h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v66[8]; // [rsp+60h] [rbp-98h] BYREF
  LONGLONG QuadPart; // [rsp+68h] [rbp-90h] BYREF
  ULONG v68; // [rsp+70h] [rbp-88h]
  PRKEVENT Eventa; // [rsp+78h] [rbp-80h]
  int v70; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PIRP Irp; // [rsp+90h] [rbp-68h]
  PVOID v73; // [rsp+98h] [rbp-60h]
  __int128 v74; // [rsp+A0h] [rbp-58h] BYREF
  PVOID v75; // [rsp+B0h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-40h]
  __int64 retaddr; // [rsp+F8h] [rbp+0h]

  Eventa = 0LL;
  v68 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v64 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (char *)Object;
  v13 = Object;
  v73 = Object;
  if ( v11 >= 0 )
  {
    v14 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v14 )
    {
      if ( (*v14 & 4) != 0 )
      {
        if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
        {
          ObfDereferenceObject(Object);
          return -1073739504;
        }
        v13 = v73;
        v12 = (char *)Object;
      }
    }
  }
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v12);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v70 = 0;
    v16 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = Object;
    v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v18 )
    {
      v29 = *(_WORD *)(v18 + 8);
      if ( (v29 == 332 || v29 == 452) && (*((_BYTE *)Object + 80) & 2) == 0 )
      {
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
        Status->Status = Status->Status;
        IoStatusBlock = Status;
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      }
    }
    v19 = Buffer;
    if ( Length )
    {
      v20 = (unsigned __int64)Buffer;
      v21 = (unsigned __int64)Buffer + Length - 1;
      if ( (unsigned __int64)Buffer > v21 || v21 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v22 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v20 = *(_BYTE *)v20;
        v20 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v20 != v22 );
    }
    v12 = (char *)Object;
    if ( *((_QWORD *)Object + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741811;
    }
    v23 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = (char *)Object;
    }
    if ( (v17[20] & 8) == 0 )
    {
LABEL_16:
      v24 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v24 = 0x7FFFFFFF0000LL;
        v68 = *(_DWORD *)v24;
        v12 = (char *)Object;
      }
      v13 = v73;
      goto LABEL_44;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( SectorSize )
    {
      v27 = SectorSize;
      v28 = SectorSize;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_36:
        if ( SectorSize && Length % v28 )
          goto LABEL_131;
        v27 = v28;
        if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_131;
LABEL_28:
        if ( ByteOffset && SectorSize && ((v27 - 1) & (unsigned int)QuadPart) != 0 )
          goto LABEL_131;
        goto LABEL_16;
      }
    }
    else
    {
      v27 = 0;
    }
    v28 = v27;
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_28;
    goto LABEL_36;
  }
  v23 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v19 = Buffer;
  if ( Key )
    v68 = *Key;
LABEL_44:
  if ( Event )
  {
    v56 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v75, 0LL);
    v31 = (struct _KEVENT *)v75;
    Eventa = (PRKEVENT)v75;
    if ( v56 < 0 )
    {
      ObfDereferenceObject(v12);
      return v56;
    }
    KeResetEvent((PRKEVENT)v75);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v31 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v33 = (PIRP)(v12 + 80);
  Irp = (PIRP)(v12 + 80);
  v34 = *((_DWORD *)v12 + 20);
  if ( (v34 & 2) == 0 )
  {
    if ( !v23 && (v34 & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
      goto LABEL_131;
    }
    v48 = 0;
    goto LABEL_67;
  }
  v35 = KeGetCurrentThread();
  --v35->KernelApcDisable;
  v36 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = (char *)Object;
    v61 = IopAcquireFileObjectLock((char *)Object, v64, (*(_DWORD *)&Irp->Type & 4) != 0, v66);
    if ( v66[0] )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return v61;
    }
  }
  else
  {
    v12 = (char *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v23 || QuadPart == -2 )
    QuadPart = *((_QWORD *)v12 + 13);
  if ( !*((_QWORD *)v12 + 6) )
    goto LABEL_82;
  v74 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v36 + 29, 0);
    v62 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v62);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return -1073741811;
  }
  else
  {
    if ( (MmVerifierData & 0x10) != 0 )
      v39 = (void *)VfFastIoSnapState();
    else
      v39 = 0LL;
    LOBYTE(v37) = 1;
    v40 = FastIoRead(v12, &QuadPart, Length, v37, v68, v19, &v74, DeviceObject);
    if ( v39 )
      VfFastIoCheckState(v39);
    if ( !v40 || (_DWORD)v74 && (_DWORD)v74 != -1073741807 && (_DWORD)v74 != -2147483643 )
    {
LABEL_82:
      v48 = 1;
      v31 = Eventa;
      v13 = v73;
      v33 = Irp;
      RelatedDeviceObject = DeviceObject;
LABEL_67:
      if ( QuadPart >= 0 )
      {
        if ( (*(_DWORD *)&v33->Type & 0x4000000) == 0 )
        {
          KeResetEvent((PRKEVENT)(v12 + 152));
          RelatedDeviceObject = DeviceObject;
        }
        v49 = (IRP *)IopAllocateIrpExReturn(
                       (__int64)RelatedDeviceObject,
                       (unsigned __int8)RelatedDeviceObject->StackSize,
                       (unsigned __int8)v48 ^ 1u,
                       retaddr);
        v50 = v49;
        Irp = v49;
        if ( !v49 )
        {
          IopAllocateIrpCleanup(v12, v31);
          return -1073741670;
        }
        v49->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v12;
        v49->Tail.Overlay.Thread = CurrentThread;
        v49->Tail.Overlay.AuxiliaryBuffer = 0LL;
        v49->RequestorMode = v64;
        v49->PendingReturned = 0;
        v49->Cancel = 0;
        v49->CancelRoutine = 0LL;
        v49->UserEvent = v31;
        v49->UserIosb = IoStatusBlock;
        v49->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
        v49->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
        CurrentStackLocation = v49->Tail.Overlay.CurrentStackLocation;
        *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
        CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v12;
        v49->AssociatedIrp.MasterIrp = 0LL;
        v49->MdlAddress = 0LL;
        v52 = DeviceObject;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( Length )
          {
            v50->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                                            NonPagedPoolNxCacheAligned,
                                                            Length);
            v50->UserBuffer = Buffer;
            v59 = 112;
          }
          else
          {
            v59 = 80;
          }
          v50->Flags = v59;
        }
        else
        {
          v50->Flags = 0;
          if ( (Flags & 0x10) != 0 )
          {
            if ( Length )
            {
              Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v50);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v54 = v64;
              MmProbeAndLockPages(Mdl, v64, IoWriteAccess);
              goto LABEL_75;
            }
          }
          else
          {
            v50->UserBuffer = Buffer;
          }
        }
        v54 = v64;
LABEL_75:
        v50->Flags |= (v13[20] & 8 | 0x4800u) >> 3;
        CurrentStackLocation[-1].Parameters.Read.Length = Length;
        CurrentStackLocation[-1].Parameters.Create.Options = v68;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        v55 = (_DWORD *)*((_QWORD *)v13 + 26);
        if ( v55 && (*v55 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = IoStatusBlock->Information;
        return IopSynchronousServiceTail(v52, v50, v54, v48, 0);
      }
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( v48 )
      {
        _InterlockedExchange((volatile __int32 *)v12 + 29, 0);
        v63 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v63);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v12 = (char *)Object;
      }
LABEL_131:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
    v41 = KeGetCurrentThread();
    ++v41->ReadOperationCount;
    __incgsdword(0x2EDCu);
    v42 = KeGetCurrentThread();
    v43 = DWORD2(v74);
    v42->ReadTransferCount += DWORD2(v74);
    __addgsqword(0x2EE8u, v43);
    *(_OWORD *)&IoStatusBlock->Status = v74;
    v44 = (volatile __int32 *)Object;
    if ( Event )
    {
      v57 = Eventa;
      if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      ObfDereferenceObject(v57);
    }
    _InterlockedExchange(v44 + 29, 0);
    v45 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v45);
    v46 = KeGetCurrentThread();
    v47 = v46->KernelApcDisable++ == -1;
    if ( v47
      && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
      && !v46->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v46);
    }
    ObfDereferenceObject(Object);
    return v74;
  }
}
