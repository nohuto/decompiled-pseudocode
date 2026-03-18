/*
 * XREFs of MiReferencePageRuns @ 0x14012C230
 * Callers:
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiFinishResume @ 0x1401610F0 (MiFinishResume.c)
 *     MiZeroBootLargePages @ 0x1401852F4 (MiZeroBootLargePages.c)
 *     MiRebuildLargePage @ 0x1402E8CF8 (MiRebuildLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14074440C (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x14077F180 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140887F2C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14088A168 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14088D120 (MiScanPagefileSpace.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePageRuns(__int64 a1, unsigned int a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = ExAcquireSpinLockExclusive(&dword_140468540);
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
    ++qword_1404684A8;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140468540);
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
