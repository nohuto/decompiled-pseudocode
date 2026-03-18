/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x140282BB0
 * Callers:
 *     FsRtlPrivateLock @ 0x140006870 (FsRtlPrivateLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x140282770 (FsRtlCompleteLockIrpReal.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  char v2; // bp
  KIRQL CancelIrql; // si
  KSPIN_LOCK *v4; // rdi
  void **i; // rax
  IRP *v7; // rbx
  IRP *v8; // rcx
  KSPIN_LOCK *v9; // rcx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  CancelIrql = a2->CancelIrql;
  v4 = (KSPIN_LOCK *)(a2->IoStatus.Information + 24);
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v2 = 1;
  for ( i = (void **)&FsRtlFileLockCancelCollideList; ; i = (void **)(v4 + 3) )
  {
    v7 = (IRP *)*i;
    if ( *i )
      break;
LABEL_7:
    if ( !v2 )
    {
      KxReleaseSpinLock(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CancelIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CancelIrql);
      return;
    }
    v2 = 0;
    KxAcquireSpinLock(v4);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
LABEL_3:
    ;
  }
  while ( 1 )
  {
    v8 = *(IRP **)&v7->Type;
    if ( v7->AssociatedIrp.MasterIrp == a2 )
      break;
    i = (void **)v7;
    v7 = *(IRP **)&v7->Type;
    if ( !v8 )
      goto LABEL_7;
  }
  *i = v8;
  if ( !v2 && v7 == (IRP *)v4[4] )
    v4[4] = (KSPIN_LOCK)i;
  a2->IoStatus.Information = 0LL;
  v9 = &FsRtlFileLockCancelCollideLock;
  if ( !v2 )
    v9 = v4;
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CancelIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  __writecr8(CancelIrql);
  FsRtlCompleteLockIrpReal(
    (__int64 (__fastcall *)(__int64, IRP *))v7->MdlAddress,
    *(_QWORD *)&v7->Flags,
    a2,
    -1073741536,
    &v12,
    0LL);
  ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v7);
}
