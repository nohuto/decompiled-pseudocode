/*
 * XREFs of MmUnlockPagableImageSection @ 0x14012A480
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BA0 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1405ABB00 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1405AE4B4 (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x14086FDE8 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x14088D364 (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408A3E50 (PopDirectedDripsNotifyAppsAndServices.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14098E3E0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
