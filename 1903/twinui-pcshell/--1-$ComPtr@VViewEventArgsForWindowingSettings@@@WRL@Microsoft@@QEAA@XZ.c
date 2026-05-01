/*
 * XREFs of ??1?$ComPtr@VViewEventArgsForWindowingSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180279F38
 * Callers:
 *     _Microsoft::WRL::Details::Make_ViewEventArgsForWindowingSettings_std::map_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy__std::less_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____std::allocator_std::pair_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__const__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_wil::err_exception_policy________&_Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId_&__::_1_::dtor$0 @ 0x180277762 (_Microsoft--WRL--Details--Make_ViewEventArgsForWindowingSettings_std--map_wil--com_ptr_t_Windows.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$53 @ 0x18027CD36 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$53.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180201D70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180201D70.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ViewEventArgsForWindowingSettings>::~ComPtr<ViewEventArgsForWindowingSettings>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewHostItemEventArgsBase,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::Release(result);
  }
  return result;
}
