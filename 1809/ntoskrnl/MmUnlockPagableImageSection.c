/*
 * XREFs of MmUnlockPagableImageSection @ 0x140097F00
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     PopUnlockAfterSleepWorker @ 0x14056C5F0 (PopUnlockAfterSleepWorker.c)
 *     IoUnregisterShutdownNotification @ 0x14056E370 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x14057E5CC (ExQuerySystemLockInformation.c)
 *     PnprUnlockPagesForReplace @ 0x140835D50 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408546A8 (MiApplyImageHotPatch.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094E3E0 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
