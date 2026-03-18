/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406A14E0
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400F0FD8 (PoRunDownDeviceObject.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BA0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1405ABB00 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4B4 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1405AE810 (ExpSystemErrorHandler2.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A3E50 (PopDirectedDripsNotifyAppsAndServices.c)
 *     KiInitializeMTRR @ 0x1409FE4A4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
