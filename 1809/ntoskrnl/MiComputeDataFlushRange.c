/*
 * XREFs of MiComputeDataFlushRange @ 0x140076E20
 * Callers:
 *     MiComputeFlushRange @ 0x14002015C (MiComputeFlushRange.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiReferenceSubsection @ 0x1400770D4 (MiReferenceSubsection.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     MiFindLastSubsection @ 0x140092D30 (MiFindLastSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputeDataFlushRange(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 SubsectionNode; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 LastSubsection; // rsi
  unsigned __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // r12
  __int64 *v22; // rbp
  __int64 v23; // rax
  __int64 result; // rax
  volatile LONG *v25; // rcx
  __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v25 = (volatile LONG *)(a1 + 72);
LABEL_19:
    ExReleaseSpinLockExclusiveFromDpcLevel(v25);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || a2 >= 2u )
      goto LABEL_20;
LABEL_52:
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_20:
    __writecr8(a2);
    return 0LL;
  }
  v10 = 0LL;
  v11 = a1 + 128;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_17:
    LastSubsection = MiFindLastSubsection(a1, 1LL);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v12 = *a3 >> 12;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_38:
    v25 = (volatile LONG *)(v9 + 72);
    goto LABEL_19;
  }
  v14 = v12
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = *a3 + a4 - 1, v16 = v15 >> 12, v17 = MiLocateSubsectionNode(v9, v15, 1LL), (LastSubsection = v17) == 0) )
  {
    a1 = v9;
    goto LABEL_17;
  }
  v19 = v16 - (*(unsigned int *)(v17 + 36) | ((unsigned __int64)(*(_WORD *)(v17 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_DWORD *)(v11 + 104) || (int)MiReferenceSubsection(v11, 0LL) <= 1 )
  {
    v20 = *(_DWORD *)(v11 + 44) - v14;
    if ( v11 == LastSubsection )
    {
LABEL_26:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || a2 >= 2u )
        goto LABEL_20;
      goto LABEL_52;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_38;
      if ( *(_DWORD *)(v11 + 104) && (int)MiReferenceSubsection(v11, 0LL) > 1 )
      {
        v21 = *(_QWORD *)(v11 + 8);
        goto LABEL_10;
      }
      v20 += *(_DWORD *)(v11 + 44);
      if ( v11 == LastSubsection )
        goto LABEL_26;
    }
  }
  v20 = 0;
  v21 = *(_QWORD *)(v11 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    v26 = *(_QWORD *)(v11 + 16);
    if ( v26 == LastSubsection )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v26 + 104) && *(_QWORD *)(v26 + 8) )
        v10 = v26;
      v26 = *(_QWORD *)(v26 + 16);
    }
    while ( v26 != LastSubsection );
    LastSubsection = v10;
    if ( !v10 )
LABEL_22:
      LastSubsection = v11;
    MiReferenceSubsection(LastSubsection, 0LL);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
  }
  ++*(_QWORD *)(v9 + 40);
  v22 = MiBuildWakeList(v9, 4);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
  }
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v22);
  v23 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v21;
  *(_QWORD *)(a6 + 16) = v23 + 8 * v19;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v11;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = v20;
  return result;
}
