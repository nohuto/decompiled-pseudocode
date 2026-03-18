/*
 * XREFs of MmReleaseLoadLock @ 0x1406A5B10
 * Callers:
 *     MiShutdownSystem @ 0x1405ABB00 (MiShutdownSystem.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070FFE8 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x1407291A0 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14073BA1C (MmBackSystemImageWithPagefile.c)
 *     MmUnloadSystemImage @ 0x1407490E0 (MmUnloadSystemImage.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14074F4FC (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407689EC (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x140888C30 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140888D30 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x140890DDC (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408916B0 (MiUnloadHotPatch.c)
 *     MmEnableVerifierForDriver @ 0x140963D48 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF52C (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1380 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A19AE8 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A3C5B0 (MmMarkHypercallPageRetpolineBit.c)
 *     MmRegisterHotPatch @ 0x140A3C60C (MmRegisterHotPatch.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_1404645E0-- == 1 )
  {
    qword_1404645D8 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404645D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404645D0);
    KeAbPostRelease((ULONG_PTR)&qword_1404645D0);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
