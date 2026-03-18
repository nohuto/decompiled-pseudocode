/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x1400507D0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiCrcStillIntact @ 0x14013ED60 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB080 (MiIsVadEligibleForCommitRelease.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14065FA38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E18AC (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x70;
  if ( (v1 & 0x70) != 0 )
  {
    if ( v2 == 32 )
      return 1LL;
  }
  else if ( (v1 & 0x100000) == 0 || (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
  {
    return 1LL;
  }
  return v2 == 64;
}
