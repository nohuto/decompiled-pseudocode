/*
 * XREFs of ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802B48CC
 * Callers:
 *     ??1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A44 (--1InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A70 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A9C (--1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0BC4 (--1InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0BF0 (--1InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C1C (--1OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C48 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0C74 (--1OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0CCC (--1OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C0CF8 (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C3B3C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C4814 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802B4944 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1802BEBC4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_P.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
