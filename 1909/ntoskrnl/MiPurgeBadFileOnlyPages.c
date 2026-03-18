/*
 * XREFs of MiPurgeBadFileOnlyPages @ 0x1402CC5E4
 * Callers:
 *     MiDeleteExtentPfns @ 0x1402CB520 (MiDeleteExtentPfns.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRemoveLockedPageCharge @ 0x1400546B0 (MiRemoveLockedPageCharge.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementModifiedWriteCount @ 0x1400BF958 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiPreventControlAreaDeletion @ 0x14012F308 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x14012F3F4 (MiDecrementSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CC978 (MiPurgeFileOnlyPfn.c)
 *     MiUnlinkPageFromBadList @ 0x1402D9488 (MiUnlinkPageFromBadList.c)
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
      LockHandle.LockQueue.Lock = qword_1404691A0;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_1404691A0);
      v1 = qword_1404643D0;
      byte_140464432 = 0;
      if ( qword_1404643D0 == 0xFFFFFFFFFLL )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        goto LABEL_44;
      }
      v2 = 48 * qword_1404643D0 - 0x58000000000LL;
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
    v4 = qword_1404643C0;
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
  KeAcquireInStackQueuedSpinLock(qword_1404691A0, &LockHandle);
  if ( qword_1404643C0 )
    byte_140464432 = 1;
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
