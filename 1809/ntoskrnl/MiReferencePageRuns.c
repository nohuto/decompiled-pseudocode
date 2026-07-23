/*
 * XREFs of MiReferencePageRuns @ 0x14012B7A0
 * Callers:
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x140151A10 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x1402CE5D4 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14075A394 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14084F534 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x140854690 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockExclusive(&dword_14043DAC0);
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
    ++qword_14043DA28;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043DAC0);
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
