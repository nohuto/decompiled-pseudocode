/*
 * XREFs of NtReadFileScatter @ 0x1406A4400
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
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE UserApcRoutine,
        PVOID UserApcContext,
        PIO_STATUS_BLOCK UserIoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v9; // r15
  PULONG v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  int v15; // ecx
  unsigned __int64 DeviceType; // rcx
  __int64 v17; // rdx
  ULONG v18; // esi
  ULONG v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdi
  void *v22; // r8
  PLARGE_INTEGER v23; // r12
  USHORT SectorSize; // cx
  unsigned __int64 v25; // rcx
  SIZE_T v26; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rsi
  __int64 i; // rdx
  __int16 v29; // ax
  NTSTATUS v30; // edi
  struct _KEVENT *v31; // r14
  _DWORD *v32; // r15
  int v33; // edi
  char v34; // r12
  IRP *Irp; // rax
  IRP *v36; // rdi
  PIO_STATUS_BLOCK v37; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  FILE_SEGMENT_ELEMENT *__attribute__((__org_arrdim(0,0))) v40; // r15
  _DWORD *v41; // rax
  PVOID v42; // rcx
  char v43; // di
  struct _KTHREAD *v44; // rax
  __int64 v45; // rbx
  _KLOCK_ENTRY *v46; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v48[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v51; // [rsp+60h] [rbp-78h]
  int v52; // [rsp+64h] [rbp-74h]
  PVOID v53; // [rsp+68h] [rbp-70h]
  int v54; // [rsp+70h] [rbp-68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  PVOID Object; // [rsp+80h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v58; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v59; // [rsp+98h] [rbp-40h]
  LARGE_INTEGER v61; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v62; // [rsp+F8h] [rbp+20h]

  v62 = UserApcContext;
  v61.QuadPart = (LONGLONG)UserApcRoutine;
  v9 = Event;
  v10 = Key;
  P = 0LL;
  v53 = 0LL;
  v51 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v48[7], 0LL);
  if ( result < 0 )
    return result;
  v13 = *(_QWORD *)&v48[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v48[7]);
  DeviceObject = RelatedDeviceObject;
  v15 = *(_DWORD *)(v13 + 80);
  if ( (v15 & 8) == 0
    || (v15 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject((PVOID)v13);
    return -1073741811;
  }
  v18 = BufferLength;
  v19 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v52 = 0;
    v20 = (__int64)UserIoStatusBlock;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)UserIoStatusBlock >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&UserIoStatusBlock, (__int64 *)&v61, *(_BYTE *)(v13 + 80) & 2);
    v22 = *(void **)&v48[7];
    if ( *(_QWORD *)(*(_QWORD *)&v48[7] + 176LL) && (v61.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)&v48[7]);
      return -1073741811;
    }
    v23 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v22 = *(void **)&v48[7];
    }
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0
      && ((SectorSize = DeviceObject->SectorSize) != 0 && ((SectorSize - 1) & v18) != 0 && v18 % SectorSize
       || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0) )
    {
      ObfDereferenceObject(v22);
      return -1073741811;
    }
    v59 = KeGetCurrentThread();
    v25 = v59->ApcState.Process[1].ActiveProcessors.Bitmap[6];
    if ( v25 && ((v29 = *(_WORD *)(v25 + 8), v29 == 332) || v29 == 452) )
    {
      v26 = 8LL * v19;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_27:
        if ( (unsigned __int64)&BufferDescription[v26 / 8] > 0x7FFFFFFF0000LL
          || &BufferDescription[v26 / 8] < BufferDescription )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
        v9 = Event;
      }
    }
    else
    {
      v26 = 8LL * v19;
      if ( v26 )
      {
        if ( ((unsigned __int8)BufferDescription & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_27;
      }
    }
    if ( v18 )
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, v26);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, BufferDescription, v26);
      BufferDescription = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v54 = i;
        if ( (unsigned int)i >= v19 )
          break;
        if ( ((__int64)BufferDescription[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
      v9 = Event;
    }
    else
    {
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v21 = (__int64)v10;
      v51 = *(_DWORD *)v21;
      PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v48[7];
    PreviousMode = AccessMode;
    goto LABEL_56;
  }
  v23 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  if ( v10 )
    v51 = *v10;
LABEL_56:
  if ( v9 )
  {
    v30 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v31 = (struct _KEVENT *)Object;
    v53 = Object;
    if ( v30 < 0 )
    {
      ObfDereferenceObject((PVOID)v13);
      if ( !PoolWithQuota_1 )
        return v30;
      v42 = PoolWithQuota_1;
LABEL_85:
      ExFreePoolWithTag(v42, 0);
      return v30;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v31 = (struct _KEVENT *)v53;
  }
  v32 = (_DWORD *)(v13 + 80);
  v58 = (_DWORD *)(v13 + 80);
  v33 = *(_DWORD *)(v13 + 80);
  if ( (v33 & 2) == 0 )
  {
    if ( !v23 && (v33 & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
LABEL_105:
      ObfDereferenceObject((PVOID)v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -1073741811;
    }
    v34 = 0;
    goto LABEL_62;
  }
  v43 = (*(_DWORD *)(v13 + 80) & 4) != 0;
  v44 = KeGetCurrentThread();
  --v44->KernelApcDisable;
  v45 = *(_QWORD *)&v48[7];
  v46 = (_KLOCK_ENTRY *)KeAbPreAcquire(*(_QWORD *)&v48[7] + 128LL, 0LL, 0);
  v48[0] = 0;
  if ( _InterlockedExchange((volatile __int32 *)(v45 + 116), 1) )
  {
    v13 = *(_QWORD *)&v48[7];
    v30 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v48[7], AccessMode, v43, v46, v48);
  }
  else
  {
    if ( v46 )
      v46->AcquiredByte |= 1u;
    v13 = *(_QWORD *)&v48[7];
    ObfReferenceObject(*(PVOID *)&v48[7]);
    v30 = 0;
  }
  if ( v48[0] )
  {
    if ( v53 )
      ObfDereferenceObject(v53);
    ObfDereferenceObject((PVOID)v13);
    v42 = P;
    if ( !P )
      return v30;
    goto LABEL_85;
  }
  if ( !v23 || QuadPart == -2 )
    QuadPart = *(_QWORD *)(v13 + 104);
  v34 = 1;
  PoolWithQuota_1 = (FILE_SEGMENT_ELEMENT *)P;
  v31 = (struct _KEVENT *)v53;
LABEL_62:
  if ( QuadPart < 0 )
  {
    if ( v31 )
      ObfDereferenceObject(v31);
    if ( v34 )
      IopReleaseFileObjectLock((volatile __int32 *)v13);
    goto LABEL_105;
  }
  IopResetEvent(v13);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v36 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v31;
    v37 = UserIoStatusBlock;
    Irp->UserIosb = UserIoStatusBlock;
    Irp->Overlay.AllocationSize = v61;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v62;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v40 = BufferDescription;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoWriteAccess);
      v36->UserBuffer = v40->Buffer;
      v32 = v58;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    if ( (*v32 & 8) != 0 )
      v36->Flags |= 0x901u;
    else
      v36->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v51;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    v41 = *(_DWORD **)(v13 + 208);
    if ( v41 && (*v41 & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v37->Information;
    return IopSynchronousServiceTail(DeviceObject, v36, v13, 1, AccessMode, v34, 0);
  }
  else
  {
    IopAllocateIrpCleanup((PVOID)v13, v31);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}
