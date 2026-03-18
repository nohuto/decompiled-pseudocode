/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x1400DF804
 * Callers:
 *     MiSegmentDelete @ 0x1406885A8 (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x1400723F0 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x14007436C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400743CC (MiBuildWakeList.c)
 *     MiDrainControlAreaWrites @ 0x1400DF8B0 (MiDrainControlAreaWrites.c)
 *     MiRemoveUnusedSubsection @ 0x1400E0A4C (MiRemoveUnusedSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall MiPrepareSegmentForDeletion(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rbp
  __int64 v5; // rdx
  unsigned __int8 v6; // si
  __int64 *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 72);
  LOBYTE(v5) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = v5;
  MiDrainControlAreaWrites(a1, v5);
  MiRemoveUnusedSegment(a1);
  v7 = MiBuildWakeList(a1, 1);
  while ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a2);
    MiIncrementSubsectionViewCount((_QWORD *)a2, 0LL);
    a2 = *(_QWORD *)(a2 + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  return v7;
}
