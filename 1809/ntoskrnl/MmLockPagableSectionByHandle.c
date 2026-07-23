/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140620240
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x14056F370 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14057F5CC (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x1409C66F4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
