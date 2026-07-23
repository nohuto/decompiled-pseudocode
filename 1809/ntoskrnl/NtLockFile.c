/*
 * XREFs of NtLockFile @ 0x1405FB000
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopSetLockOperationProcess @ 0x14008C644 (IopSetLockOperationProcess.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C784 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopAcquireFastLock_0 @ 0x1400DDA54 (IopAcquireFastLock_0.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14013FD3C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401B3E2C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401B3EA4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  _BYTE *v15; // rax
  struct _FILE_OBJECT *v16; // rdi
  NTSTATUS v17; // eax
  struct _KEVENT *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r15
  void *v24; // r14
  char v25; // al
  PIO_STATUS_BLOCK v26; // rcx
  __int64 v27; // rsi
  int v28; // eax
  int v29; // edx
  ULONG Flags; // eax
  NTSTATUS v31; // r14d
  char v32; // r15
  __int64 Irp; // rax
  IRP *v34; // r14
  __int64 v35; // rsi
  char v36; // al
  CHAR *PoolWithQuota_2; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v39; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v40[7]; // [rsp+51h] [rbp-87h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v42; // [rsp+60h] [rbp-78h] BYREF
  PVOID v43; // [rsp+70h] [rbp-68h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v45; // [rsp+80h] [rbp-58h] BYREF
  PVOID v46; // [rsp+88h] [rbp-50h] BYREF
  __int64 v47; // [rsp+90h] [rbp-48h] BYREF
  __int64 v48; // [rsp+98h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION v50; // [rsp+A8h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  PIO_APC_ROUTINE v52; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v53; // [rsp+F8h] [rbp+20h]

  v53 = ApcContext;
  v52 = ApcRoutine;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v50);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v50.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v52, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v45 = Length->QuadPart;
      v15 = Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v45 = Length->QuadPart;
      v15 = Object;
    }
    v15[72] = 1;
    v16 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v13);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v17 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v46, 0LL);
        v18 = (struct _KEVENT *)v46;
        v43 = v46;
        if ( v17 >= 0 )
          KeResetEvent((PRKEVENT)v46);
      }
      else
      {
        v18 = (struct _KEVENT *)v43;
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v16);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v42 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v24 = (void *)VfFastIoSnapState();
          else
            v24 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v25 = FastIoLock(
                  v16,
                  &QuadPart,
                  &v45,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v42,
                  RelatedDeviceObject);
          v39 = v25;
          if ( v24 )
          {
            VfFastIoCheckState(v24);
            v25 = v39;
          }
          if ( v25 )
          {
            if ( ((unsigned __int8)v52 & 1) != 0 )
            {
              v26 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v42);
              v26->Status = v42;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v42;
            }
            if ( v18 )
            {
              if ( (v16->Flags & 0x8000000) == 0 )
                KeSetEvent(v18, 0, 0);
              ObfDereferenceObject(v18);
            }
            if ( v16->CompletionContext )
            {
              v27 = (__int64)v53;
              if ( v53 )
              {
                if ( (v16->Flags & 0x2000000) == 0 )
                {
                  v47 = 0LL;
                  v48 = 0LL;
                  v39 = 0;
                  IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v16, &v39, &v47, &v48);
                  if ( v47 )
                  {
                    v28 = IoSetIoCompletionEx2(v47, v48, v27, (unsigned int)v42, *((__int64 *)&v42 + 1), 1u, 0LL, 0);
                    v29 = v42;
                    if ( v28 < 0 )
                      v29 = -1073741670;
                    LODWORD(v42) = v29;
                  }
                  if ( v39 )
                    IopDecrementCompletionContextUsageCount((ULONG_PTR)v16);
                }
              }
            }
            ObfDereferenceObject(v16);
            return v42;
          }
        }
      }
      Flags = v16->Flags;
      if ( (Flags & 2) != 0 )
      {
        if ( !IopAcquireFastLock_0((volatile __int32 *)&v16->Type) )
        {
          v31 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (v16->Flags & 4) != 0, v40);
          if ( v40[0] )
          {
            if ( v18 )
              ObfDereferenceObject(v18);
            ObfDereferenceObject(v16);
            return v31;
          }
        }
        v32 = 1;
        Flags = v16->Flags;
      }
      else
      {
        v32 = 0;
      }
      if ( (Flags & 0x4000000) == 0 )
        KeResetEvent(&v16->Event);
      LOBYTE(v20) = v32 ^ 1;
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v19, v20, retaddr);
      v34 = (IRP *)Irp;
      v46 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v16;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v18;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v52;
        *(_QWORD *)(Irp + 96) = v53;
        v35 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v35 - 72) = 273;
        *(_QWORD *)(v35 - 24) = v16;
        *(_BYTE *)(v35 - 70) = 0;
        v36 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v35 - 70) = 1;
          v36 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v35 - 70) = v36 | 2;
        *(_DWORD *)(v35 - 56) = Key;
        *(_QWORD *)(v35 - 48) = QuadPart;
        PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
        *(_QWORD *)PoolWithQuota_2 = v45;
        v34->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
        *(_QWORD *)(v35 - 64) = PoolWithQuota_2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v34, PreviousMode, v32, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v16, v18);
        return -1073741670;
      }
    }
  }
  return result;
}
