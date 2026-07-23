/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x1402B6810
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402B5CB0 (MiDeleteExtentPfns.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiDecrementSubsection @ 0x1400E7798 (MiDecrementSubsection.c)
 *     MiPreventControlAreaDeletion @ 0x1400E9578 (MiPreventControlAreaDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiPurgeBadFileOnlyPages(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v4; // r14
  __int64 v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // r12
  __int64 v8; // rsi
  struct _KPRCB *v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // r15
  __int64 *v12; // rax
  volatile LONG *v13; // rcx
  __int64 *v14; // rsi
  struct _KPRCB *v15; // rcx
  unsigned __int8 v16; // bl
  __int16 v17; // si
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.LockQueue.Lock = qword_14043E9E0;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_14043E9E0, a3);
      v4 = qword_140439DD0;
      byte_140439E29 = 0;
      if ( qword_140439DD0 == 0xFFFFFFFFFLL )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        goto LABEL_43;
      }
      v5 = 48 * qword_140439DD0 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        break;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    v7 = qword_140439DC0;
    MiUnlinkPageFromBadList(48 * v4 - 0x58000000000LL, 128LL);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    MiAddLockedPageCharge(48 * v4 - 0x58000000000LL, 1);
    v22 = 0LL;
    BugCheckParameter2 = 0LL;
    v8 = MiPreventControlAreaDeletion(48 * v4 - 0x58000000000LL, 1, &BugCheckParameter2, &v22);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    __writecr8(CurrentIrql);
    if ( v8 )
    {
      if ( v22 )
        MiReleaseControlAreaWaiters(v22);
      MiPurgeFileOnlyPfn(48 * v4 - 0x58000000000LL);
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
      *(_DWORD *)(v8 + 56) &= ~4u;
      v11 = v10;
      v12 = MiDecrementModifiedWriteCount(v8, 1);
      v13 = (volatile LONG *)(v8 + 72);
      v22 = v12;
      v14 = v12;
      ExReleaseSpinLockExclusiveFromDpcLevel(v13);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v15);
        v14 = v22;
      }
      __writecr8(v11);
      if ( v14 )
        MiReleaseControlAreaWaiters(v14);
    }
    v16 = MiLockPageInline(48 * v4 - 0x58000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v4 - 0x58000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v4 - 0x58000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v4 - 0x58000000000LL, v4);
    }
    v17 = *(_WORD *)(v5 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v16);
  }
  while ( !v17 || v7 != 1 );
  KeAcquireInStackQueuedSpinLock(qword_14043E9E0, &LockHandle);
  if ( qword_140439DC0 )
    byte_140439E29 = 1;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  CurrentIrql = LockHandle.OldIrql;
LABEL_43:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v19);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
