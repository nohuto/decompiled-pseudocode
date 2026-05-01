/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E24
 * Callers:
 *     _Microsoft::WRL::Details::Make_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy________&___ptr64_Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId_&___ptr64__::_1_::dtor$0 @ 0x180222206 (_Microsoft--WRL--Details--Make_ViewEventArgsForWindowingSettings_std--map_wil--com_ptr_t_Windows.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$46 @ 0x180226D7B (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$46.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800615D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800615D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgsForWindowingSettings>::~ComPtr<ViewEventArgsForWindowingSettings>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::Release(result);
  }
  return result;
}
