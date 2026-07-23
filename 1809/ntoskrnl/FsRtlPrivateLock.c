/*
 * XREFs of FsRtlPrivateLock @ 0x14008C8E0
 * Callers:
 *     FsRtlProcessFileLock @ 0x14013FAD0 (FsRtlProcessFileLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140063070 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x14008D08C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x14008D384 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140122504 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140136DA8 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlCompleteLockIrpReal @ 0x14013FB90 (FsRtlCompleteLockIrpReal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F660 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x14026F804 (FsRtlPrivateRemoveLock.c)
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
  PFILE_OBJECT v14; // r12
  KSPIN_LOCK *v16; // r14
  KSPIN_LOCK *LockInformation; // r15
  LONGLONG QuadPart; // r8
  char *v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rdi
  BOOLEAN v22; // bl
  _QWORD *v23; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v26; // r8
  NTSTATUS v27; // esi
  KIRQL NewIrql; // [rsp+40h] [rbp-88h]
  char v29; // [rsp+42h] [rbp-86h]
  int v30; // [rsp+48h] [rbp-80h] BYREF
  KSPIN_LOCK *v31; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *v32; // [rsp+58h] [rbp-70h]
  _QWORD v33[2]; // [rsp+60h] [rbp-68h] BYREF
  BOOLEAN v34; // [rsp+70h] [rbp-58h]
  ULONG v35; // [rsp+74h] [rbp-54h]
  PFILE_OBJECT v36; // [rsp+78h] [rbp-50h]
  PEPROCESS v37; // [rsp+80h] [rbp-48h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+90h] [rbp-38h]

  v14 = FileObject;
  v29 = 0;
  v31 = 0LL;
  v16 = 0LL;
  v32 = 0LL;
  NewIrql = -1;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v31 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v31 = LockInformation;
  }
  v33[0] = FileOffset->QuadPart;
  QuadPart = Length->QuadPart;
  v33[1] = QuadPart;
  v38 = v33[0] + QuadPart - 1;
  v35 = Key;
  v36 = v14;
  v37 = ProcessId;
  v34 = ExclusiveLock;
  v16 = LockInformation + 3;
  v32 = LockInformation + 3;
  if ( v38 < v33[0] && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v29 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, v33);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, v33);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, v33) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v22 = 1;
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
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v23 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v23 )
      {
        KeReleaseSpinLock(LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v23[3] = Irp;
      v23[2] = Context;
      v23[1] = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v23 = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v23;
      else
        LockInformation[6] = (KSPIN_LOCK)v23;
      LockInformation[7] = (KSPIN_LOCK)v23;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v29 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v31;
      v16 = v32;
      goto LABEL_10;
    }
  }
LABEL_14:
  v22 = 0;
  v21 = Iosb;
LABEL_29:
  if ( v29 )
  {
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && NewIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      LockInformation = v31;
    }
    __writecr8(NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(LockInformation[1], Context, Irp, (unsigned int)v21->Status, &v30, v14);
    v27 = v30;
    if ( v30 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v26) = 1;
      FsRtlPrivateRemoveLock(LockInformation, v33, v26);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v27;
  }
  return v22;
}
