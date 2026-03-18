/*
 * XREFs of FsRtlPrivateLock @ 0x1400067E0
 * Callers:
 *     FsRtlProcessFileLock @ 0x140283040 (FsRtlProcessFileLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140102C64 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1401034F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertLock @ 0x140103650 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140139D74 (FsRtlPrivateInitializeFileLock.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FsRtlCompleteLockIrpReal @ 0x140282A10 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282E50 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x140282FE4 (FsRtlPrivateRemoveLock.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  KSPIN_LOCK *v16; // rsi
  __int64 v17; // rdx
  KSPIN_LOCK *LockInformation; // r15
  LONGLONG QuadPart; // r8
  char *v20; // rcx
  char v21; // al
  PIO_STATUS_BLOCK v22; // rbx
  BOOLEAN v23; // r14
  _QWORD *v24; // rax
  __int64 v26; // r8
  NTSTATUS v27; // edi
  char v28; // [rsp+40h] [rbp-78h]
  KIRQL NewIrql; // [rsp+41h] [rbp-77h]
  int v30; // [rsp+44h] [rbp-74h] BYREF
  KSPIN_LOCK *v31; // [rsp+48h] [rbp-70h]
  KSPIN_LOCK *v32; // [rsp+50h] [rbp-68h]
  _QWORD v33[6]; // [rsp+58h] [rbp-60h] BYREF
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+88h] [rbp-30h]

  v28 = 0;
  v31 = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  NewIrql = -1;
  memset(v33, 0, sizeof(v33));
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v31 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(v17) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, v17) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v31 = LockInformation;
  }
  v33[0] = FileOffset->QuadPart;
  QuadPart = Length->QuadPart;
  v33[1] = QuadPart;
  v33[5] = QuadPart + v33[0] - 1LL;
  HIDWORD(v33[2]) = Key;
  v33[3] = FileObject;
  v33[4] = ProcessId;
  LOBYTE(v33[2]) = ExclusiveLock;
  v16 = LockInformation + 3;
  v32 = LockInformation + 3;
  if ( v33[5] < v33[0] && QuadPart )
  {
    v22 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v28 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v20 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v21 = FsRtlPrivateCheckForExclusiveLockAccess(v20, v33);
  else
    v21 = FsRtlPrivateCheckForSharedLockAccess(v20, v33);
  if ( v21 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, FileObject, v33) )
    {
      v22 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v23 = 1;
      goto LABEL_29;
    }
    if ( Irp )
    {
      KeReleaseSpinLock(LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v22 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v24 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v24 )
      {
        KeReleaseSpinLock(LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v24[3] = Irp;
      v24[2] = Context;
      v24[1] = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v24 = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v24;
      else
        LockInformation[6] = (KSPIN_LOCK)v24;
      LockInformation[7] = (KSPIN_LOCK)v24;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v28 = 0;
      }
      v22 = Iosb;
      Iosb->Status = 259;
      LockInformation = v31;
      v16 = v32;
      goto LABEL_10;
    }
  }
LABEL_14:
  v23 = 0;
  v22 = Iosb;
LABEL_29:
  if ( v28 )
    KeReleaseSpinLock(v16, NewIrql);
  if ( Irp && v22->Status != 259 )
  {
    ObfReferenceObject(FileObject);
    FsRtlCompleteLockIrpReal(LockInformation[1], Context, Irp, (unsigned int)v22->Status, &v30, FileObject);
    v27 = v30;
    if ( v30 < 0 && v22->Status >= 0 )
    {
      LOBYTE(v26) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v33, v26);
    }
    ObfDereferenceObject(FileObject);
    v22->Status = v27;
  }
  return v23;
}
