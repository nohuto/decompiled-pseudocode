/*
 * XREFs of MmLockPagableSectionByHandle @ 0x14061F240
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400DAB80 (PoRunDownDeviceObject.c)
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x14056E370 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14057E5CC (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x1409C56F4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
