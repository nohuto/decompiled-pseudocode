/*
 * XREFs of MiReferenceControlAreaForCacheManager @ 0x14001E9BC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiValidateControlAreaPartition @ 0x14001CD04 (MiValidateControlAreaPartition.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14001E4A8 (MiBuildWakeList.c)
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferenceControlAreaForCacheManager(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v9; // rdx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiLockSectionControlArea(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL), (*(_BYTE *)(a1 + 19) & 1) == 0, &v14);
  v3 = v2;
  if ( !v2 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v2 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
    }
    __writecr8(v14);
    return 3221225473LL;
  }
  v4 = MiValidateControlAreaPartition(a1, v2);
  if ( v4 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10, v9);
    }
    __writecr8(v14);
    return (unsigned int)v4;
  }
  else
  {
    v5 = MiBuildWakeList(v3, 4);
    ++*(_QWORD *)(v3 + 24);
    v6 = v5;
    MiRemoveUnusedSegment(v3);
    if ( (*(_DWORD *)a1 & 1) != 0 )
      *(_DWORD *)(v3 + 56) |= 0x8000u;
    else
      ++*(_QWORD *)(v3 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11, v7);
    }
    __writecr8(v14);
    MiReleaseControlAreaWaiters(v6);
    return 0LL;
  }
}
