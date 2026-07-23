/*
 * XREFs of MiReferenceActiveSubsection @ 0x140077940
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1402C4BAC (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  KIRQL v5; // r13
  BOOL v8; // r12d
  __int64 v9; // r14
  BOOL v10; // ebp
  int v11; // edi
  struct _KPRCB *v13; // rcx
  int SubsectionCharges; // r14d
  __int64 CommittedPages; // rax
  __int64 v16; // r14
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v22 = 0LL;
  v5 = a3;
  v23 = *BugCheckParameter2;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  if ( a3 == 17 )
  {
    v4 = 1;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  while ( 1 )
  {
    v9 = *BugCheckParameter2;
    if ( !BugCheckParameter2[1] )
      goto LABEL_17;
    v10 = *(_QWORD *)(v9 + 64) != 0LL;
    v11 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    if ( v11 > 1 && v10 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
    {
      if ( (*((_BYTE *)BugCheckParameter2 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(BugCheckParameter2);
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    }
    if ( v11 >= 2 )
    {
      if ( v11 == 2 && (a2 & 0x20) != 0 && v22 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v5);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v23 + 60) & 0x3FF)),
          v8,
          v22);
        if ( !v4 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v23 + 72));
      }
      else if ( v4 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v20);
        }
        __writecr8(v5);
      }
      return 0LL;
    }
    if ( !v11 )
      break;
    v3 = v23;
LABEL_17:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(v5);
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v8, v22);
      if ( !v4 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v22 = MiComputeCrossPartitionSectionCharges(BugCheckParameter2);
    if ( v22 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v13 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v13);
      }
      __writecr8(v5);
      SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, v22);
      if ( SubsectionCharges < 0 )
      {
        if ( !v4 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        return (unsigned int)SubsectionCharges;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v8 )
        {
          v16 = v22;
          if ( !BugCheckParameter2[1] )
          {
LABEL_30:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
            {
              v17 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v17);
            }
            __writecr8(v5);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v8,
              v16);
            if ( !v4 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
        }
        else
        {
          CommittedPages = MiGetCommittedPages(v3);
          v16 = v22;
        }
        if ( v16 != CommittedPages )
          goto LABEL_30;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v4 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v23 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(v5);
  }
  return 3221227019LL;
}
