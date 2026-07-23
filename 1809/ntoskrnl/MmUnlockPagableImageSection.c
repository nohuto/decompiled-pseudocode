/*
 * XREFs of MmUnlockPagableImageSection @ 0x140097E40
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 *     IoUnregisterShutdownNotification @ 0x14056F370 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14057F5CC (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x140836F90 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094F3E0 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
