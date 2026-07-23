/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x140119E9C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14002D340 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x140118018 (MiReleaseInPageRefs.c)
 *     MiPurgeImageSection @ 0x140176720 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCheckForControlAreaDeletion @ 0x140119FAC (MiCheckForControlAreaDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // rbp
  __int64 v7; // rax
  __int64 v9; // rbx
  volatile LONG *v10; // r14
  volatile LONG *v11; // rcx
  BOOL v12; // r13d
  KIRQL v13; // si
  __int64 v14; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  inserted = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v7 )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = (volatile LONG *)(a1 + 72);
  v12 = v7 != 0;
  if ( (a4 & 2) != 0 )
  {
    v13 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  }
  else
  {
    v13 = ExAcquireSpinLockExclusive(v11);
  }
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 104))-- == 1
      && !*(_QWORD *)(v9 + 96)
      && (*(_BYTE *)(a2 + 34) & 1) == 0
      && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( inserted )
    v14 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v14 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  if ( v13 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13);
  }
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v14, v12, inserted);
}
