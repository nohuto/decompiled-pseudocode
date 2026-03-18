/*
 * XREFs of ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C0022880
 * Callers:
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C0022818 (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 * Callees:
 *     <none>
 */

W32KIMPORTS *__fastcall W32KIMPORTS::W32KIMPORTS(W32KIMPORTS *this, void *a2)
{
  *(_QWORD *)this = RtlFindExportedRoutineByName(a2, "UserIsCurrentProcessImmersive");
  *((_QWORD *)this + 1) = RtlFindExportedRoutineByName(a2, "CheckAndProcessSurfaceComplete");
  *((_QWORD *)this + 2) = RtlFindExportedRoutineByName(a2, "CreateRegion");
  *((_QWORD *)this + 3) = RtlFindExportedRoutineByName(a2, "CreateRegionFromRect");
  *((_QWORD *)this + 4) = RtlFindExportedRoutineByName(a2, "DCompositionNotifyCompositionTokenPresent");
  *((_QWORD *)this + 5) = RtlFindExportedRoutineByName(a2, "DCompositionNotifyPresent");
  *((_QWORD *)this + 6) = RtlFindExportedRoutineByName(a2, "DCompositionShouldDeferToken");
  *((_QWORD *)this + 7) = RtlFindExportedRoutineByName(a2, "EngDeleteRgn");
  *((_QWORD *)this + 8) = RtlFindExportedRoutineByName(a2, "EtwTraceCompositionSurfaceObjectUpdateEvent");
  *((_QWORD *)this + 9) = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStartCompleteToken");
  *((_QWORD *)this + 10) = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStopCompleteToken");
  *((_QWORD *)this + 11) = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStartTokenReleaseToFrame");
  *((_QWORD *)this + 12) = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStopTokenReleaseToFrame");
  *((_QWORD *)this + 13) = RtlFindExportedRoutineByName(a2, "EtwTraceTokenCompositionSurfaceObjectEvent");
  *((_QWORD *)this + 14) = RtlFindExportedRoutineByName(a2, "EtwTraceTokenIndependentFlipSkipCompleteEvent");
  *((_QWORD *)this + 15) = RtlFindExportedRoutineByName(a2, "EtwTraceTokenStateChangedEvent");
  *((_QWORD *)this + 16) = RtlFindExportedRoutineByName(a2, "GreDwmDesktopOverlaysEnabled");
  *((_QWORD *)this + 17) = RtlFindExportedRoutineByName(a2, "GreIsDwmStateLocked");
  *((_QWORD *)this + 18) = RtlFindExportedRoutineByName(a2, "GreLockDwmState");
  *((_QWORD *)this + 19) = RtlFindExportedRoutineByName(a2, "GreSfmCleanupPresentHistory");
  *((_QWORD *)this + 20) = RtlFindExportedRoutineByName(a2, "GreSfmGetNotificationTokens");
  *((_QWORD *)this + 21) = RtlFindExportedRoutineByName(a2, "GreSfmGetPresentQueueEvent");
  *((_QWORD *)this + 22) = RtlFindExportedRoutineByName(a2, "GreSfmOpenTokenEvent");
  *((_QWORD *)this + 23) = RtlFindExportedRoutineByName(a2, "GreUnlockDwmState");
  *((_QWORD *)this + 24) = RtlFindExportedRoutineByName(a2, "UserAllocDefaultCompositionSecurityDescriptor");
  *((_QWORD *)this + 25) = RtlFindExportedRoutineByName(a2, "UserDereferenceDwmProcess");
  *((_QWORD *)this + 26) = RtlFindExportedRoutineByName(a2, "UserEnterUserCritSecShared");
  *((_QWORD *)this + 27) = RtlFindExportedRoutineByName(a2, "UserIsCurrentProcessImmersive");
  *((_QWORD *)this + 28) = RtlFindExportedRoutineByName(a2, "UserIsCurrentThreadDesktopComposed");
  *((_QWORD *)this + 29) = RtlFindExportedRoutineByName(a2, "UserIsUserCritSecIn");
  *((_QWORD *)this + 30) = RtlFindExportedRoutineByName(a2, "UserIsDisconnectConnection");
  *((_QWORD *)this + 31) = RtlFindExportedRoutineByName(a2, "UserIsWindowDesktopComposed");
  *((_QWORD *)this + 32) = RtlFindExportedRoutineByName(a2, "UserLeaveUserCritSec");
  *((_QWORD *)this + 33) = RtlFindExportedRoutineByName(a2, "UserReferenceDwmApiPort");
  *((_QWORD *)this + 34) = RtlFindExportedRoutineByName(a2, "UserReferenceDwmProcess");
  *((_QWORD *)this + 35) = RtlFindExportedRoutineByName(a2, "UserRemoveWindowedSwapChain");
  *((_QWORD *)this + 36) = RtlFindExportedRoutineByName(a2, "UserSetWindowedSwapChainApiExt");
  *((_QWORD *)this + 37) = RtlFindExportedRoutineByName(a2, "UserUnsafeIsCurrentProcessDwm");
  *((_QWORD *)this + 38) = RtlFindExportedRoutineByName(a2, "UserUnsafeIsProcessDwm");
  *((_QWORD *)this + 39) = RtlFindExportedRoutineByName(a2, "Win32FreePool");
  return this;
}
