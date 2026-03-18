/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406D4160
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400B3FB8 (PoRunDownDeviceObject.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BC0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4D4 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A4610 (PopDirectedDripsNotifyAppsAndServices.c)
 *     KiInitializeMTRR @ 0x1409FDF88 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
