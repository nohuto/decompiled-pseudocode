/*
 * XREFs of MmAcquireLoadLock @ 0x140651A80
 * Callers:
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x140651780 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140681910 (MiObtainSectionForDriver.c)
 *     MiSessionUnloadAllImages @ 0x1406E09E4 (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14070D30C (MmBackSystemImageWithPagefile.c)
 *     MmUnloadSystemImage @ 0x14070EED0 (MmUnloadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x140726B8C (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074B63C (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x14084DA60 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14084DB60 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408559F8 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x140858218 (MiUnloadHotPatch.c)
 *     MmEnableVerifierForDriver @ 0x140924BB8 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x1409AAFD0 (MmMarkHypercallPageRetpolineBit.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x1409DEFC8 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x1409F71C0 (MmRegisterHotPatch.c)
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
