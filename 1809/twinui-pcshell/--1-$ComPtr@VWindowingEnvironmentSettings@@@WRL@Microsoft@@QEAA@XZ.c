/*
 * XREFs of ??1?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E6C
 * Callers:
 *     _Microsoft::WRL::Details::Make_WindowingEnvironmentSettings_Windows::Foundation::Collections::IVectorView_Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting_____ptr64______ptr64_std::function_wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy____cdecl(unsigned_int)__&___ptr64__::_1_::dtor$0 @ 0x1802222FE (_Microsoft--WRL--Details--Make_WindowingEnvironmentSettings_Windows--Foundation--Collections--IV.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$37 @ 0x180226D3A (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$37.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022AE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWin_ea_18022AE50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowingEnvironmentSettings>::~ComPtr<WindowingEnvironmentSettings>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
