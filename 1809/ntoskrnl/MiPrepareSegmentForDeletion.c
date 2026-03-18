/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x1400958BC
 * Callers:
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 * Callees:
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiIncrementSubsectionViewCount @ 0x140077A50 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x14007BB68 (MiRemoveUnusedSegment.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBC8 (MiRemoveUnusedSubsection.c)
 *     MiDrainControlAreaWrites @ 0x140095968 (MiDrainControlAreaWrites.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
