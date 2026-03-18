/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x1402CC884
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402CB7C0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiPreventControlAreaDeletion @ 0x14012E9B8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14012EAA4 (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9728 (MiUnlinkPageFromBadList.c)
 */

__int64 MiPurgeBadFileOnlyPages()
{
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v1; // r14
  __int64 v2; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v4; // r12
  __int64 v5; // rsi
  struct _KPRCB *v6; // rcx
  KIRQL v7; // al
  KIRQL v8; // r15
  __int64 *v9; // rax
  volatile LONG *v10; // rcx
  __int64 *v11; // rsi
  struct _KPRCB *v12; // rcx
  unsigned __int8 v13; // bl
  __int16 v14; // si
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.LockQueue.Lock = qword_140469460;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140469460);
      v1 = qword_1404646D0;
      byte_140464732 = 0;
      if ( qword_1404646D0 == 0xFFFFFFFFFLL )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_44;
      }
      v2 = 48 * qword_1404646D0 - 0x58000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
        break;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    v4 = qword_1404646C0;
    MiUnlinkPageFromBadList(48 * v1 - 0x58000000000LL, 128LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    MiAddLockedPageCharge(48 * v1 - 0x58000000000LL, 1);
    v19 = 0LL;
    BugCheckParameter2 = 0LL;
    v5 = MiPreventControlAreaDeletion(48 * v1 - 0x58000000000LL, 1, &BugCheckParameter2, &v19);
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v6 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v6);
    }
    __writecr8(CurrentIrql);
    if ( v5 )
    {
      if ( v19 )
        MiReleaseControlAreaWaiters(v19);
      MiPurgeFileOnlyPfn(48 * v1 - 0x58000000000LL);
      if ( BugCheckParameter2 )
        MiDecrementSubsection((__int64 *)BugCheckParameter2);
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      *(_DWORD *)(v5 + 56) &= ~4u;
      v8 = v7;
      v9 = MiDecrementModifiedWriteCount(v5, 1);
      v10 = (volatile LONG *)(v5 + 72);
      v19 = v9;
      v11 = v9;
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        v12 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v12);
        v11 = v19;
      }
      __writecr8(v8);
      if ( v11 )
        MiReleaseControlAreaWaiters(v11);
    }
    v13 = MiLockPageInline(48 * v1 - 0x58000000000LL);
    if ( (unsigned int)MiRemoveLockedPageCharge(48 * v1 - 0x58000000000LL) )
    {
      MiSetPfnTbFlushStamp(48 * v1 - 0x58000000000LL, 0, 1);
      MiPfnReferenceCountIsZero(48 * v1 - 0x58000000000LL, v1);
    }
    v14 = *(_WORD *)(v2 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
    __writecr8(v13);
  }
  while ( !v14 || v4 != 1 );
  KeAcquireInStackQueuedSpinLock(qword_140469460, &LockHandle);
  if ( qword_1404646C0 )
    byte_140464732 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  CurrentIrql = LockHandle.OldIrql;
LABEL_44:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v16);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
