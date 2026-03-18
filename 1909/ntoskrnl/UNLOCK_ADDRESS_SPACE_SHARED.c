/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 *     MiScrubProcessLargePages @ 0x1402ECC74 (MiScrubProcessLargePages.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14067F8C0 (MiCfgInitializeProcess.c)
 *     MiUnlockVadRange @ 0x140688300 (MiUnlockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BDBF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmGetImageBase @ 0x1406DB7E0 (MmGetImageBase.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x14089209C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140892178 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899728 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
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
