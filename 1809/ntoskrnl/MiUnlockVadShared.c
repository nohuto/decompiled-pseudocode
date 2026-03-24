/*
 * XREFs of MiUnlockVadShared @ 0x14001AF48
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747E0 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x1402CFB3C (MiScrubProcessLargePages.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x14067AAE4 (MiReferenceCfgVad.c)
 *     NtAreMappedFilesTheSame @ 0x140704CA0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x140855330 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x140855604 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x140858CC0 (MmIsFileMapped.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
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
