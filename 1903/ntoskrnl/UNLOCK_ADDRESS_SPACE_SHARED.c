/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x140073B10 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140142F6C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 *     MiScrubProcessLargePages @ 0x1402ECF14 (MiScrubProcessLargePages.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14067980C (MiCfgInitializeProcess.c)
 *     MiUnlockVadRange @ 0x140694D90 (MiUnlockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmGetImageBase @ 0x1406DAEB4 (MmGetImageBase.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x14089287C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140892958 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140899B54 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899F08 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  *(_BYTE *)(a1 + 1768) &= ~2u;
  v2 = a2 + 880;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 880), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 880);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
