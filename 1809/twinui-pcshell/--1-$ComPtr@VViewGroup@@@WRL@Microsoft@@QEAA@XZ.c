/*
 * XREFs of ??1?$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ @ 0x180205E90
 * Callers:
 *     _Microsoft::WRL::Details::Make_ViewGroup_IWindowGroupManager_____ptr64_&___ptr64_ITitleBarController_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_Windows::Foundation::IEventHandler_IInspectable_____ptr64______ptr64_&___ptr64_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&___ptr64_IPrivilegedForegroundOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180205811 (_Microsoft--WRL--Details--Make_ViewGroup_IWindowGroupManager_____ptr64_-___ptr64_ITitleBarContro.c)
 *     _wil::MakeOrThrow_ViewGroup_IWindowGroupManager_____ptr64_&___ptr64_ITitleBarController_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_Windows::Foundation::IEventHandler_IInspectable_____ptr64______ptr64_&___ptr64_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&___ptr64_IPrivilegedForegroundOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802058DC (_wil--MakeOrThrow_ViewGroup_IWindowGroupManager_____ptr64_-___ptr64_ITitleBarController_____ptr6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F8B70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1801F8B70.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewGroup>::~ComPtr<ViewGroup>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
