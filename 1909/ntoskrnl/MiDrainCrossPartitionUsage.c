/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x1402EA1F8
 * Callers:
 *     MiDeletePartition @ 0x1402C9994 (MiDeletePartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     MiDecrementControlAreaCount @ 0x1400BF8A4 (MiDecrementControlAreaCount.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400FD320 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B98D0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiDecrementCloneHeaderCount @ 0x1402E381C (MiDecrementCloneHeaderCount.c)
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

  Object.Header.LockNV = 393216;
  Object.Header.SignalState = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  KeAcquireInStackQueuedSpinLock(&qword_140465E40, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2064) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
  CcExitPartition(*(_QWORD **)(a1 + 168), 0);
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
