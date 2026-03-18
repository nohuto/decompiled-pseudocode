/*
 * XREFs of MiAppendSubsectionChain @ 0x140089058
 * Callers:
 *     MiExtendSection @ 0x140625080 (MiExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaUsingExtents @ 0x14006EFE0 (MiControlAreaUsingExtents.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiInsertSubsectionNode @ 0x1400C07CC (MiInsertSubsectionNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402DE9B4 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  KIRQL v12; // bp
  int v13; // eax
  __int64 v14; // rax
  __int64 j; // rsi
  __int64 i; // rdx
  __int64 v18; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v20; // rcx
  __int64 inserted; // rax
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  __int64 v26; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v26 = *(_QWORD *)a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v10 = v26;
  v11 = 2;
  v12 = v8;
  if ( *(_QWORD *)(v26 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
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
      for ( i = v4; i; i = *(_QWORD *)(v18 + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( MiControlAreaUsingExtents(v10) )
          *(_DWORD *)(v18 + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    v11 = 1;
LABEL_15:
    __writecr8(v12);
    return v11;
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
      v22 = MiDecrementSubsectionViewCount((_QWORD *)v4, 24LL, v9);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v22;
    }
    while ( v4 );
LABEL_38:
    v10 = v26;
  }
LABEL_4:
  *(_WORD *)(a1 + 34) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 52) &= 0xC0000000;
  *(_DWORD *)(a1 + 40) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v14;
  for ( j = v14; j; v10 = v26 )
  {
    MiInsertSubsectionNode(v10, j, 1LL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v23 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v23);
  }
  __writecr8(v12);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v26 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
