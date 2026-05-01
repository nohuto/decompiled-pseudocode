/*
 * XREFs of ?RaiseEvent@AsyncEventWorkItem@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@UEAAXXZ @ 0x180220E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventWorkItem::RaiseEvent(
        __int64 a1)
{
  return Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_947b3ec738187c517cfd986e9b41a2e5__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem___Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_____(
           a1,
           *(_QWORD *)(a1 + 24),
           *(RTL_SRWLOCK **)(a1 + 16));
}
