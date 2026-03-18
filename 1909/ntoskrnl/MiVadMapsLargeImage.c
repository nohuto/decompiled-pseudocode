/*
 * XREFs of MiVadMapsLargeImage @ 0x140053940
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB080 (MiIsVadEligibleForCommitRelease.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DEE14 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
