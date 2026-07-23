/*
 * XREFs of NtReadFileScatter @ 0x1406CE630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C784 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopExceptionFilter @ 0x14027EFC0 (IopExceptionFilter.c)
 *     IopAcquireFastLock_3 @ 0x140285D1C (IopAcquireFastLock_3.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  PULONG v9; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 i; // rdx
  PFILE_OBJECT v15; // r8
  PDEVICE_OBJECT v16; // r14
  ULONG Flags; // ecx
  unsigned __int64 DeviceType; // rcx
  ULONG v19; // edi
  ULONG v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r15
  PLARGE_INTEGER v23; // rsi
  USHORT SectorSize; // cx
  unsigned __int64 v25; // rax
  bool v26; // cl
  __int64 v27; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_0; // rdi
  __int16 v29; // ax
  NTSTATUS v30; // r15d
  struct _KEVENT *v31; // r14
  ULONG v32; // eax
  char v33; // r12
  IRP *Irp; // rax
  IRP *v35; // rsi
  PIO_STATUS_BLOCK v36; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v38; // r14d
  struct _MDL *Mdl; // rax
  FILE_SEGMENT_ELEMENT *__attribute__((__org_arrdim(0,0))) v40; // r14
  _DWORD *FileObjectExtension; // rax
  PFILE_OBJECT v42; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v44[6]; // [rsp+42h] [rbp-86h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  ULONG v48; // [rsp+60h] [rbp-68h]
  int v49; // [rsp+64h] [rbp-64h]
  int v50; // [rsp+68h] [rbp-60h]
  PVOID v51; // [rsp+70h] [rbp-58h]
  PVOID Object; // [rsp+78h] [rbp-50h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  LARGE_INTEGER v57; // [rsp+E0h] [rbp+18h] BYREF
  PVOID v58; // [rsp+E8h] [rbp+20h]

  v58 = UserApcContext;
  v57.QuadPart = (LONGLONG)UserApcRoutine;
  v9 = Key;
  P = 0LL;
  v51 = 0LL;
  v48 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v16 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  Flags = v12->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (i = 0x40000100100348LL, !_bittest64(&i, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v19 = BufferLength;
  v20 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v49 = 0;
    v21 = (__int64)UserIoStatusBlock;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)UserIoStatusBlock >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&UserIoStatusBlock, (__int64 *)&v57, v12->Flags & 2);
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v57.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v23 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v15 = FileObject;
    }
    if ( (v12->Flags & 8) != 0 )
    {
      if ( (SectorSize = v16->SectorSize) != 0 && ((SectorSize - 1) & v19) != 0 && (i = v19 % SectorSize, (_DWORD)i)
        || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject(v15);
        return -1073741811;
      }
    }
    v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    v26 = 0;
    if ( v25 )
    {
      v29 = *(_WORD *)(v25 + 8);
      if ( v29 == 332 || v29 == 452 )
        v26 = 1;
    }
    v27 = v20;
    if ( v26 )
    {
      if ( v27 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_29;
      }
    }
    else if ( v27 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_29:
      if ( (unsigned __int64)&BufferDescription[v27] > 0x7FFFFFFF0000LL || &BufferDescription[v27] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( v19 )
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_0(PagedPool, 8LL * v20);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, BufferDescription, 8LL * v20);
      BufferDescription = PoolWithQuota_0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v50 = i;
        if ( (unsigned int)i >= v20 )
          break;
        if ( ((__int64)BufferDescription[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v22 = (__int64)v9;
      v48 = *(_DWORD *)v22;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    PreviousMode = AccessMode;
    goto LABEL_56;
  }
  v23 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
  if ( v9 )
    v48 = *v9;
LABEL_56:
  if ( Event )
  {
    v30 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v31 = (struct _KEVENT *)Object;
    v51 = Object;
    if ( v30 < 0 )
    {
LABEL_82:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v30;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v31 = (struct _KEVENT *)v51;
  }
  v32 = v12->Flags;
  if ( (v32 & 2) == 0 )
  {
    if ( !v23 && (v32 & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
LABEL_103:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741811;
    }
    v33 = 0;
    goto LABEL_62;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v12->Type) )
  {
    v30 = IopAcquireFileObjectLock((char *)v12, AccessMode, (v12->Flags & 4) != 0, v44);
    if ( v44[0] )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
      goto LABEL_82;
    }
  }
  if ( !v23 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v33 = 1;
LABEL_62:
  if ( QuadPart < 0 )
  {
    if ( v31 )
      ObfDereferenceObject(v31);
    if ( v33 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v42 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v42);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_103;
  }
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  LOBYTE(v15) = v33 ^ 1;
  LOBYTE(i) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, i, (__int64)v15, retaddr);
  v35 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v12;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v31;
    v36 = UserIoStatusBlock;
    Irp->UserIosb = UserIoStatusBlock;
    Irp->Overlay.AllocationSize = v57;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v58;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = v12;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v38 = BufferLength;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v40 = BufferDescription;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoWriteAccess);
      v35->UserBuffer = v40->Buffer;
      v38 = BufferLength;
    }
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    v35->Flags |= (v12->Flags & 8 | 0x4800) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v38;
    CurrentStackLocation[-1].Parameters.Create.Options = v48;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    FileObjectExtension = v12->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v36->Information;
    return IopSynchronousServiceTail(DeviceObject, v35, (__int64)v12, 1, AccessMode, v33, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v31);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return -1073741670;
  }
}
