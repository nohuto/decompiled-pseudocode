/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x14010A020
 * Callers:
 *     MiDeleteTransitionPte @ 0x14002EEF0 (MiDeleteTransitionPte.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x14010D134 (MiReleaseInPageRefs.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x1402CCD08 (MiSplitDirectMapPage.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x1400C08CC (MiRemoveUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A178 (MiCheckForControlAreaDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v9; // rdi
  volatile LONG *v10; // r14
  BOOL v11; // r12d
  volatile signed __int32 *v12; // rcx
  unsigned __int8 v13; // bp
  __int64 inserted; // rax
  __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v19; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v5 )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = v5 != 0;
  v12 = (volatile signed __int32 *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v13 = 17;
    LOBYTE(a2) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, a2);
    else
      LOBYTE(inserted) = ExpAcquireSpinLockExclusive(v12, 0xFFu);
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive(v12);
    v13 = inserted;
  }
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 104))-- == 1
      && !*(_QWORD *)(v9 + 96)
      && (*(_BYTE *)(v7 + 34) & 1) == 0
      && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
      v4 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v4 )
  {
    LOBYTE(inserted) = qword_140465E88;
    v16 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  else
  {
    v16 = 0LL;
  }
  if ( v13 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOBYTE(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        LODWORD(inserted) = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = inserted;
        if ( !(_DWORD)inserted )
          LOBYTE(inserted) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    LOBYTE(inserted) = v13;
    __writecr8(v13);
  }
  if ( v4 )
    LOBYTE(inserted) = MiReturnCrossPartitionSectionCharges(v16, v11, v4);
  return inserted;
}
