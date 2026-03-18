/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0071900
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0005AD0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0006AE0 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0009580 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserPostMessage @ 0x1C00298E0 (NtUserPostMessage.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006E0F0 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0071834 (ValidateHwndIAMComponetUIAware.c)
 *     NtUserRegisterHotKey @ 0x1C00A4FD0 (NtUserRegisterHotKey.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C00B3A80 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00D01F4 (_PostTransformableMessageIL.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ValidateHwndIAM @ 0x1C011CA10 (ValidateHwndIAM.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0123390 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0124D10 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0135CD0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01C3330 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01C36B4 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C0212590 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C0212A80 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C0212D20 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C02139B0 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C021BFE0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C021C920 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C021D560 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C021D850 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C021DBC0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C021EA80 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0071930 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 456);
}
