/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180075FD0
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForSelectTargetView@@AEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAI@Z @ 0x18001C8AC (--$MakeAndInitialize@VViewEventArgsForSelectTargetView@@V1@AEAPEAUIPropertySet@Collections@Found.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801AEFA0 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 *     _lambda_3f9aacea76e9fa4b85478e3300a81c4f_::__lambda_3f9aacea76e9fa4b85478e3300a81c4f_ @ 0x1801B10D8 (_lambda_3f9aacea76e9fa4b85478e3300a81c4f_--__lambda_3f9aacea76e9fa4b85478e3300a81c4f_.c)
 *     ??1?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B12AC (--1-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_3f9aacea76e9fa4b85478e3300a81c4f__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::__Func_impl_wistd::_Callable_obj__lambda_3f9aacea76e9fa4b85478e3300a81c4f__0__wistd::details::function_allocator_wistd::_Func_class_long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IViewHostItemEventArgs_____ptr64______ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_ @ 0x1801B1410 (wistd--_Func_impl_wistd--_Callable_obj__lambda_3f9aacea76e9fa4b85478e3300a81c4f__0__wistd--detai.c)
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1801B7BA0 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18021C878 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(v1);
  }
  return result;
}
