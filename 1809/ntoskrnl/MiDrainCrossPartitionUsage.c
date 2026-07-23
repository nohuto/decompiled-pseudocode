/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x1402D1914
 * Callers:
 *     MiDeletePartition @ 0x1402B4730 (MiDeletePartition.c)
 * Callees:
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14000E780 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementControlAreaCount @ 0x140094D54 (MiDecrementControlAreaCount.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A29B0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiDecrementCloneHeaderCount @ 0x1402C9958 (MiDecrementCloneHeaderCount.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v4; // si
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  struct _KPRCB *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  LOWORD(Object.Header.Lock) = 0;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  KeAcquireInStackQueuedSpinLock(&qword_14043B7C0, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2064) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1296));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1288));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(struct _KEVENT ***)(a1 + 168), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v5 = (_QWORD *)(a1 + 1832);
  v6 = 0LL;
  while ( !*v5 )
  {
    ++v6;
    v5 += 4;
    if ( v6 >= 7 )
      goto LABEL_11;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2056) = &Object;
LABEL_11:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v7);
  }
  __writecr8(v4);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2072) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2080);
  if ( v8 )
    ExWaitForRundownProtectionReleaseCacheAware(v8);
}
