/*
 * XREFs of MmAcquireLoadLock @ 0x1406A62E0
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
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_1404648D8 )
  {
    ++dword_1404648E0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404648D0, 0LL);
    qword_1404648D8 = (__int64)CurrentThread;
    dword_1404648E0 = 1;
  }
  return CurrentThread;
}
