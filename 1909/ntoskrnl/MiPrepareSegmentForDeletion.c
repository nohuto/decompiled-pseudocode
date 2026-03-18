/*
 * XREFs of MiPrepareSegmentForDeletion @ 0x1400BF684
 * Callers:
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementSubsectionViewCount @ 0x140072660 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x14007463C (MiBuildWakeList.c)
 *     MiDrainControlAreaWrites @ 0x1400BF730 (MiDrainControlAreaWrites.c)
 *     MiRemoveUnusedSubsection @ 0x1400C08CC (MiRemoveUnusedSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
