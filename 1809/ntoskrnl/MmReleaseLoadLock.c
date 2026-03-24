/*
 * XREFs of MmReleaseLoadLock @ 0x140651A20
 * Callers:
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x140651760 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1406818F0 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E09C4 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14070D2EC (MmBackSystemImageWithPagefile.c)
 *     MmUnloadSystemImage @ 0x14070EEB0 (MmUnloadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x140726B6C (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074B61C (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x14084DA40 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14084DB40 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408559D8 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408581F8 (MiUnloadHotPatch.c)
 *     MmEnableVerifierForDriver @ 0x140924BB8 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x1409AAFD0 (MmMarkHypercallPageRetpolineBit.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x1409DEFC8 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x1409F71D0 (MmRegisterHotPatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseMutant @ 0x1400BFA10 (KeReleaseMutant.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
