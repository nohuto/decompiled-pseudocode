/*
 * XREFs of MmUnlockPagableImageSection @ 0x140129A60
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BC0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4D4 (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x1408706E8 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A4610 (PopDirectedDripsNotifyAppsAndServices.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14098E3E0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
