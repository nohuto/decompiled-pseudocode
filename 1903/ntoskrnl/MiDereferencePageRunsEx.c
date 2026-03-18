/*
 * XREFs of MiDereferencePageRunsEx @ 0x14012B7B0
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x14015CD6C (MiDereferencePageRuns.c)
 *     MiFinishResume @ 0x1401610F0 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x1401852F4 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x1402E8CF8 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1402EB9D8 (MiUpdatePartitionMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  void *v2; // r15
  __int64 v4; // r13
  _QWORD *v6; // r14
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // si
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rcx
  _QWORD *v13; // rbx

  v2 = (void *)(a1 - 16);
  v4 = *(_QWORD *)(a1 - 16);
  v6 = 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 192));
  v8 = (*(_QWORD *)(a1 - 8))-- == 1LL;
  v9 = v7;
  if ( !v8 )
    v2 = 0LL;
  if ( a2 )
  {
    if ( (ULONG_PTR *)v4 != &MiSystemPartition )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 192));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v9);
      v9 = ExAcquireSpinLockExclusive(&dword_140468540);
    }
    if ( !--qword_1404684A8 )
    {
      v6 = (_QWORD *)qword_1404684D8;
      qword_1404684D8 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468540);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v12);
    }
    __writecr8(v9);
    if ( v6 )
    {
      do
      {
        v13 = (_QWORD *)*v6;
        KeSignalGate(v6 + 1, 1LL);
        v6 = v13;
      }
      while ( v13 );
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 192));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(v9);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
