/*
 * XREFs of MiVadMapsLargeImage @ 0x1400538A0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140142F6C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB320 (MiIsVadEligibleForCommitRelease.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14064BDA8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DDA24 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
