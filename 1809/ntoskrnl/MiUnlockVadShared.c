/*
 * XREFs of MiUnlockVadShared @ 0x14001AF48
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x14067BCA4 (MiReferenceCfgVad.c)
 *     NtAreMappedFilesTheSame @ 0x140705F40 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x140859F20 (MmIsFileMapped.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  *(_BYTE *)(a1 + 1753) &= ~0x20u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 40);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
