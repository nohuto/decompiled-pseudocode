/*
 * XREFs of ??1?$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ @ 0x18025E7A8
 * Callers:
 *     _Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager___&_ITitleBarController___&_ITabViewManager___&_Windows::Foundation::IEventHandler_IInspectable______&_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&_IPrivilegedForegroundOperations___&__::_1_::dtor$0 @ 0x18025E13D (_Microsoft--WRL--Details--Make_ViewGroup_IWindowGroupManager___-_ITitleBarController___-_ITabVie.c)
 *     _wil::MakeOrThrow_ViewGroup_IWindowGroupManager___&_ITitleBarController___&_ITabViewManager___&_Windows::Foundation::IEventHandler_IInspectable______&_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&_IPrivilegedForegroundOperations___&__::_1_::dtor$0 @ 0x18025E208 (_wil--MakeOrThrow_ViewGroup_IWindowGroupManager___-_ITitleBarController___-_ITabViewManager___-_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180249A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180249A80.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ViewGroup>::~ComPtr<ViewGroup>(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
