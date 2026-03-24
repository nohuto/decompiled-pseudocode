/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747E0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x1400861D0 (MiObtainReferencedSecureVad.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MmOutSwapWorkingSet @ 0x1400E5128 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7B20 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBA90 (MmOutSwapVirtualAddresses.c)
 *     MiScrubProcessLargePages @ 0x1402CFB3C (MiScrubProcessLargePages.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x140604A50 (MiUnlockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140677D50 (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1406BA3A4 (MmGetImageBase.c)
 *     NtAllocateUserPhysicalPages @ 0x140850690 (NtAllocateUserPhysicalPages.c)
 *     MiHotPatchProcess @ 0x140855604 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140858BE4 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140858CC0 (MmIsFileMapped.c)
 *     MiCreateLargePageVad @ 0x14085D028 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14085D374 (MiFreeLargePageView.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  *(_BYTE *)(a1 + 1752) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 872);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
