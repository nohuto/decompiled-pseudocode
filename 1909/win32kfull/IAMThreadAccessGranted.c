/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0027D6C
 * Callers:
 *     NtUserSendEventMessage @ 0x1C00084F0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0009C10 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C000B7E0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _PostTransformableMessageIL @ 0x1C0012080 (_PostTransformableMessageIL.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0023074 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0027C9C (ValidateHwndIAMComponetUIAware.c)
 *     NtUserPostMessage @ 0x1C0046340 (NtUserPostMessage.c)
 *     NtUserRegisterHotKey @ 0x1C0088070 (NtUserRegisterHotKey.c)
 *     ValidateHwndIAM @ 0x1C00FE740 (ValidateHwndIAM.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0108A40 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C011AFD0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C01335E4 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0135164 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0137190 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0137440 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D6500 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6814 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C0229CC0 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C022A1E0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C022A4A0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C022B220 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0233B30 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0234420 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0235150 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0235460 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C02357E0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C02367B0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0027D9C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 448);
}
