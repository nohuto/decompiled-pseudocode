/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C006E63C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0018E90 (NtUserSetImeOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00CBC74 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateCaret @ 0x1C00F5EF4 (xxxCreateCaret.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0107350 (EditionEndDeferWinEventNotify.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54 (-zzzShowCursor@@YAH_N@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C0136198 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C004F4E0 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0056214 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0056644 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056698 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00EDCC8 (xxxFlushDeferredWindowEvents.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  __int64 v1; // rcx
  tagDomLock *DomainLockRef; // rbx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagDomLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  tagDomLock::LockExclusive(DomainLockRef);
  --gdwDeferWinEvent;
  tagDomLock::UnLockExclusive(DomainLockRef);
}
