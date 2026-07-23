/*
 * XREFs of MmAcquireLoadLock @ 0x140652C20
 * Callers:
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E1C64 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14070E58C (MmBackSystemImageWithPagefile.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074C80C (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x14084ECA0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14084EDA0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x140859458 (MiUnloadHotPatch.c)
 *     MmEnableVerifierForDriver @ 0x140925BB8 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x1409ABFD0 (MmMarkHypercallPageRetpolineBit.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BDCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x1409DFFC8 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&Mutant, WrVirtualMemory, 0, 0, 0LL);
  return CurrentThread;
}
