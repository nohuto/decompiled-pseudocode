/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0070890
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0006620 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0007290 (NtUserSetActivationFilter.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00173C0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserPostMessage @ 0x1C0041200 (NtUserPostMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0062BC0 (_GetWindowTrackInfoAsync.c)
 *     NtUserRegisterHotKey @ 0x1C006A2E0 (NtUserRegisterHotKey.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     _AllowSetForegroundWindow @ 0x1C006E100 (_AllowSetForegroundWindow.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ValidateHwndIAM @ 0x1C007039C (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00707D0 (ValidateHwndIAMComponetUIAware.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BD950 (NtUserSetActiveProcessForMonitor.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C01128C0 (_EnableShellWindowManagementBehavior.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01A1AC0 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01A1E04 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01EC380 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C01EC7D0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01ECA40 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01ED630 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01F4880 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01F50E0 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C01F5B90 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C01F5E30 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C01F6130 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01F6F30 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C00708C0 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 448);
}
