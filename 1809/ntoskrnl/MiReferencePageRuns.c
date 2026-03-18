/*
 * XREFs of MiReferencePageRuns @ 0x14012B6B0
 * Callers:
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x1401518F0 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x140192534 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x1402CE2E4 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41D0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DAE1C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407591C4 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14084C8B4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2F4 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140853450 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x14085F9A8 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockExclusive(&dword_14043CA00);
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( a2 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    v5 = MmPhysicalMemoryBlock;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      v5 = *(_QWORD **)(a1 + 96);
  }
  if ( v5 )
  {
    ++*(v5 - 1);
    ++qword_14043C968;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043CA00);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  if ( !v5 )
    return MiReferencePageRuns(&MiSystemPartition, a2);
  return (__int64)v5;
}
