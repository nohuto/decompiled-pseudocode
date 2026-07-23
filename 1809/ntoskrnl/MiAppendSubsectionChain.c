/*
 * XREFs of MiAppendSubsectionChain @ 0x1400929E4
 * Callers:
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiInsertSubsectionNode @ 0x14009284C (MiInsertSubsectionNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402C4F10 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r9
  unsigned int v10; // ebx
  KIRQL v11; // bp
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 j; // rsi
  __int64 i; // rdx
  __int64 v17; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  __int64 inserted; // rax
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  __int64 v25; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v25 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v9 = v25;
  v10 = 2;
  v11 = v8;
  if ( *(_QWORD *)(v25 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        goto LABEL_15;
      }
    }
    else
    {
      v6 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v4; i; i = *(_QWORD *)(v17 + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( MiControlAreaUsingExtents(v9) )
          *(_DWORD *)(v17 + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v19 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v19);
    }
    v10 = 1;
LABEL_15:
    __writecr8(v11);
    return v10;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v4, 0x3FFFFFFFLL);
      *(_QWORD *)(v4 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += inserted;
    }
    while ( v4 );
    goto LABEL_38;
  }
  if ( (a3 & 2) != 0 )
  {
    v6 = 1;
LABEL_20:
    if ( !v6 )
      goto LABEL_4;
    do
    {
      v21 = MiDecrementSubsectionViewCount((__int64 *)v4, 24);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v21;
    }
    while ( v4 );
LABEL_38:
    v9 = v25;
  }
LABEL_4:
  *(_WORD *)(a1 + 34) &= 0xFu;
  v12 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) &= 0xC0000000;
  *(_DWORD *)(a1 + 40) = v12;
  v13 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v13;
  for ( j = v13; j; v9 = v25 )
  {
    MiInsertSubsectionNode(v9, j, 1);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v25 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(v11);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v25 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
