/*
 * XREFs of ??$Make@VWindowingEnvironmentSettings@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEAV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentSettings@@@12@$$QEAPEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEAV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x18022225C
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180226360 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0WindowingEnvironmentSettings@@QEAA@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x180224668 (--0WindowingEnvironmentSettings@@QEAA@PEAU-$IVectorView@PEAUISetting@WindowingEnvironment@Applic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022AE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWin_ea_18022AE50.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<WindowingEnvironmentSettings,Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *> *,std::function<wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy> (unsigned int)> &>(
        __int64 *a1)
{
  WindowingEnvironmentSettings *v2; // rax
  __int64 v3; // rdi

  *a1 = 0LL;
  v2 = (WindowingEnvironmentSettings *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = WindowingEnvironmentSettings::WindowingEnvironmentSettings(v2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v3;
  }
  return a1;
}
