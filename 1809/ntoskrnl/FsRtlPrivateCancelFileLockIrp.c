/*
 * XREFs of FsRtlPrivateCancelFileLockIrp @ 0x14026F660
 * Callers:
 *     FsRtlPrivateLock @ 0x14008C8E0 (FsRtlPrivateLock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall FsRtlPrivateCancelFileLockIrp(__int64 a1, IRP *a2)
{
  char v2; // r14
  KIRQL CancelIrql; // si
  KSPIN_LOCK *v4; // rdi
  __int64 *i; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  KSPIN_LOCK *v9; // rcx
  struct _KPRCB *v10; // rcx
  void (__fastcall *v11)(__int64, IRP *); // rax
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0;
  CancelIrql = a2->CancelIrql;
  v4 = (KSPIN_LOCK *)(a2->IoStatus.Information + 24);
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
  v2 = 1;
  for ( i = &FsRtlFileLockCancelCollideList; ; i = (__int64 *)(v4 + 3) )
  {
    v7 = (__int64 *)*i;
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
    v8 = *v7;
    if ( (IRP *)v7[3] == a2 )
      break;
    i = v7;
    v7 = (__int64 *)*v7;
    if ( !v8 )
      goto LABEL_7;
  }
  *i = v8;
  if ( !v2 && v7 == (__int64 *)v4[4] )
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
  v11 = (void (__fastcall *)(__int64, IRP *))v7[1];
  v12 = v7[2];
  a2->IoStatus.Status = -1073741536;
  if ( v11 )
    v11(v12, a2);
  else
    IofCompleteRequest(a2, 1);
  ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v7);
}
