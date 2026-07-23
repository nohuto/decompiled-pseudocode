/*
 * XREFs of NtWriteFileGather @ 0x1406CDB00
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
 *     MmUpdateMdlTracker @ 0x1402A8E98 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  PULONG v9; // r12
  PLARGE_INTEGER v10; // r15
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // r14
  PFILE_OBJECT v14; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // r8
  ULONG *p_Flags; // r13
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rcx
  bool v24; // cl
  __int64 v25; // rbx
  ULONG v26; // r10d
  FILE_SEGMENT_ELEMENT *PoolWithQuota_0; // rsi
  ULONG v28; // r9d
  USHORT SectorSize; // cx
  __int16 v30; // ax
  NTSTATUS v31; // edi
  struct _KEVENT *v32; // r14
  char v33; // r12
  IRP *Irp; // rax
  IRP *v35; // rdi
  PIO_STATUS_BLOCK v36; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v39; // r15
  UCHAR MajorFunction; // r13
  _DWORD *FileObjectExtension; // rax
  PFILE_OBJECT v42; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  __int64 QuadPart; // [rsp+48h] [rbp-A0h]
  char v45[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-88h] BYREF
  ULONG v48; // [rsp+68h] [rbp-80h]
  int v49; // [rsp+6Ch] [rbp-7Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-78h]
  int v51; // [rsp+78h] [rbp-70h]
  ACCESS_MASK v52; // [rsp+7Ch] [rbp-6Ch]
  PVOID v53; // [rsp+80h] [rbp-68h]
  PVOID Object; // [rsp+88h] [rbp-60h] BYREF
  ULONG *v55; // [rsp+90h] [rbp-58h]
  struct _OBJECT_HANDLE_INFORMATION v56; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  LARGE_INTEGER v60; // [rsp+100h] [rbp+18h] BYREF
  PVOID v61; // [rsp+108h] [rbp+20h]

  v61 = ApcContext;
  v60.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  P = 0LL;
  v53 = 0LL;
  v48 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v56);
  if ( result < 0 )
    return result;
  GrantedAccess = v56.GrantedAccess;
  v52 = v56.GrantedAccess;
  v14 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v14->Flags;
  v55 = &v14->Flags;
  Flags = v14->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v16 = 0x40000100100348LL, !_bittest64(&v16, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v14);
    return -1073741811;
  }
  v20 = (BufferLength >> 12) + ((BufferLength & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v14);
      return -1073741790;
    }
    v49 = 0;
    v21 = (__int64)IoStatusBlock;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v60, *(_BYTE *)p_Flags & 2);
    Flags = (__int64)KeGetCurrentThread();
    v23 = *(_QWORD *)(*(_QWORD *)(Flags + 184) + 1064LL);
    v24 = 0;
    if ( v23 )
    {
      v30 = *(_WORD *)(v23 + 8);
      if ( v30 == 332 || v30 == 452 )
        v24 = 1;
    }
    v25 = v20;
    if ( v24 )
    {
      if ( v25 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_19;
      }
    }
    else if ( v25 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_19:
      if ( (unsigned __int64)&BufferDescription[v25] > 0x7FFFFFFF0000LL || &BufferDescription[v25] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v26 = BufferLength;
    if ( BufferLength )
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_0(PagedPool, 8LL * v20);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, BufferDescription, 8LL * v20);
      BufferDescription = PoolWithQuota_0;
      Flags = 0LL;
      v51 = 0;
      while ( (unsigned int)Flags < v20 )
      {
        if ( ((__int64)BufferDescription[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v51 = Flags;
      }
      v26 = BufferLength;
    }
    else
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v14 = FileObject;
    if ( FileObject->CompletionContext && (v60.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = v10->QuadPart;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v14 = FileObject;
    }
    p_Flags = &v14->Flags;
    v55 = &v14->Flags;
    v28 = v14->Flags;
    if ( (v28 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( SectorSize )
      {
        v16 = SectorSize;
        if ( ((SectorSize - 1) & v26) != 0 )
        {
          Flags = v26 % SectorSize;
          if ( v26 % SectorSize )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( v10
        && QuadPart != -1
        && (QuadPart != -2 || (v28 & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v22 = (__int64)v9;
      v48 = *(_DWORD *)v22;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v14 = FileObject;
    }
    GrantedAccess = v52;
    goto LABEL_63;
  }
  if ( v10 )
    QuadPart = v10->QuadPart;
  PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
  if ( v9 )
    v48 = *v9;
LABEL_63:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v31 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v32 = (struct _KEVENT *)Object;
    v53 = Object;
    if ( v31 < 0 )
    {
LABEL_96:
      ObfDereferenceObject(v14);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v32 = (struct _KEVENT *)v53;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( v32 )
        ObfDereferenceObject(v32);
LABEL_118:
      ObfDereferenceObject(v14);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741811;
    }
    v33 = 0;
    goto LABEL_71;
  }
  if ( !IopAcquireFastLock_3((volatile __int32 *)&v14->Type) )
  {
    v31 = IopAcquireFileObjectLock((char *)v14, AccessMode, (*p_Flags & 4) != 0, v45);
    if ( v45[0] )
    {
      if ( v32 )
        ObfDereferenceObject(v32);
      goto LABEL_96;
    }
  }
  v33 = 1;
  if ( !v10 && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v14->CurrentByteOffset.QuadPart;
LABEL_71:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v32 )
      ObfDereferenceObject(v32);
    if ( v33 )
    {
      _InterlockedExchange((volatile __int32 *)&v14->Busy, 0);
      v42 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v42);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v14 = FileObject;
    }
    goto LABEL_118;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v14->Event);
  LOBYTE(v16) = v33 ^ 1;
  LOBYTE(Flags) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, Flags, v16, retaddr);
  v35 = Irp;
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
    Irp->UserEvent = v32;
    v36 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v60;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v61;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v14;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
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
      v35->UserBuffer = BufferDescription->Buffer;
      v36 = IoStatusBlock;
      p_Flags = v55;
    }
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    v35->Flags |= (*p_Flags & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v48;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    FileObjectExtension = v14->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v36->Information;
    return IopSynchronousServiceTail(DeviceObject, v35, (__int64)v14, 1, AccessMode, v33, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v14, v32);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return -1073741670;
  }
}
