/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C00444C0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetImeOwnerWindow @ 0x1C000CA40 (NtUserSetImeOwnerWindow.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00D6D48 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0121C70 (EditionEndDeferWinEventNotify.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4 (-zzzShowCursor@@YAH_N@Z.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013B2B4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C001A854 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B4174 (--1-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B45A8 (--0-$CLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B45FC (--0-$CLockExclusiveUMCBA@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C0109E58 (xxxFlushDeferredWindowEvents.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  __int64 v1; // rcx
  tagObjLock *DomainLockRef; // rbx

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  if ( DomainLockRef == (tagObjLock *)gDomainDummyLock )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
  tagObjLock::LockExclusive(DomainLockRef);
  --gdwDeferWinEvent;
  tagObjLock::UnLock(DomainLockRef);
}
