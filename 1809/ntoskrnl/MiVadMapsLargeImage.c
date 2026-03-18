/*
 * XREFs of MiVadMapsLargeImage @ 0x140074A10
 * Callers:
 *     MiGetWsAndInsertVad @ 0x140063E20 (MiGetWsAndInsertVad.c)
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 *     MiInsertVad @ 0x14011014C (MiInsertVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A3E30 (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7A20 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiRemoveVad @ 0x1402C5020 (MiRemoveVad.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1402CFA3C (MiScrubProcessLargePages.c)
 *     MmProtectVirtualMemory @ 0x1405EDFD0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140618664 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406513D4 (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14085E4E8 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x14085E8D4 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 7) == 2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
