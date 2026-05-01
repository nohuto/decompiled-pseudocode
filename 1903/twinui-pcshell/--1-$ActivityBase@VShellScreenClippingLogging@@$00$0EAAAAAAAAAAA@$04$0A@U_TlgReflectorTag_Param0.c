/*
 * XREFs of ??1?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E1178
 * Callers:
 *     ??1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1803E12AC (--1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ.c)
 *     ??1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1803E12D8 (--1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803E11B4 (--1-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803E2FE8 (-reset@-$shared_object@V-$ActivityData@VShellScreenClippingLogging@@U_TlgReflectorTag_Param0IsPr.c)
 */

void __fastcall wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ShellScreenClippingLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
