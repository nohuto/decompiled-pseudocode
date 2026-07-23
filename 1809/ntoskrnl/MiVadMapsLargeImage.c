/*
 * XREFs of MiVadMapsLargeImage @ 0x140074A00
 * Callers:
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A4120 (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiRemoveVad @ 0x1402C5310 (MiRemoveVad.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140619664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x140652574 (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x14085FB14 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
