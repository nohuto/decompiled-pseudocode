/*
 * XREFs of MmReleaseLoadLock @ 0x1406A6280
 * Callers:
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14070E208 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x140727E30 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14073978C (MmBackSystemImageWithPagefile.c)
 *     MmUnloadSystemImage @ 0x1407471E0 (MmUnloadSystemImage.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x14074EA6C (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x14075743C (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x140889410 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140889510 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x14088EEB0 (MiLoadHotPatch.c)
 *     MiQueryProcessActivePatches @ 0x1408915BC (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140891E90 (MiUnloadHotPatch.c)
 *     MmEnableVerifierForDriver @ 0x140963D48 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x1409EF614 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409F1470 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A3C7E0 (MmMarkHypercallPageRetpolineBit.c)
 *     MmRegisterHotPatch @ 0x140A3C83C (MmRegisterHotPatch.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_1404648E0-- == 1 )
  {
    qword_1404648D8 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404648D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404648D0);
    KeAbPostRelease((ULONG_PTR)&qword_1404648D0);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
