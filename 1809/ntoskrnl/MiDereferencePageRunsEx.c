/*
 * XREFs of MiDereferencePageRunsEx @ 0x14012B6C8
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x140141BD0 (MiDereferencePageRuns.c)
 *     MiFinishResume @ 0x140151A10 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiUpdatePartitionMemory @ 0x1402D2DC0 (MiUpdatePartitionMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePageRunsEx(__int64 a1, int a2)
{
  void *v2; // r15
  __int64 v4; // r13
  _QWORD *v6; // r14
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // si
  __int64 v10; // r8
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v13; // rcx
  _QWORD *v14; // rbx

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
      v9 = ExAcquireSpinLockExclusive(&dword_14043DAC0);
    }
    if ( !--qword_14043DA28 )
    {
      v6 = (_QWORD *)qword_14043DA58;
      qword_14043DA58 = 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043DAC0);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    __writecr8(v9);
    if ( v6 )
    {
      do
      {
        v14 = (_QWORD *)*v6;
        KeSignalGate((__int64)(v6 + 1), 1LL, v10);
        v6 = v14;
      }
      while ( v14 );
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 192));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11);
    }
    __writecr8(v9);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
