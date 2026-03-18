/*
 * XREFs of IAMThreadAccessGranted @ 0x1C008AAEC
 * Callers:
 *     NtUserSendEventMessage @ 0x1C00084F0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0009C20 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0017840 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002D954 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     _PostTransformableMessageIL @ 0x1C0087700 (_PostTransformableMessageIL.c)
 *     NtUserRegisterHotKey @ 0x1C00881E0 (NtUserRegisterHotKey.c)
 *     ValidateHwndIAM @ 0x1C0089640 (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C008AA1C (ValidateHwndIAMComponetUIAware.c)
 *     NtUserPostMessage @ 0x1C00A5560 (NtUserPostMessage.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C012AEF0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C012D160 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C012DBD0 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0140990 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D6690 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6994 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C022A2E0 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C022A800 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C022AAC0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C022B840 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0234150 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0234A40 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0235770 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0235A80 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C0235E00 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0236DD0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C008AB1C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 448);
}
