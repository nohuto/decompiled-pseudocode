/*
 * XREFs of ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18010DF40
 * Callers:
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView____::_1_::dtor$0 @ 0x18010BB79 (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerInterop--IWindo.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int_&__::_1_::dtor$0 @ 0x18010BC4E (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerIn_ea_18010BC4E.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$19 @ 0x18011EBF1 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$19.c)
 *     _Microsoft::WRL::Details::Make_WindowGroupManager_IPrivilegedWindowGroupingOperations___&__::_1_::dtor$0 @ 0x18025C323 (_Microsoft--WRL--Details--Make_WindowGroupManager_IPrivilegedWindowGroupingOperations___-__--_1_.c)
 *     _wil::MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations___&__::_1_::dtor$0 @ 0x18025C3C7 (_wil--MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations___-__--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_WindowGroup_unsigned_long_&__::_1_::dtor$0 @ 0x180261BF9 (_wil--MakeOrThrow_WindowGroup_unsigned_long_-__--_1_--dtor$0.c)
 *     _CWRLImpWndProc_WindowGroup_::s_WndProcBase_::_1_::dtor$0 @ 0x180262034 (_CWRLImpWndProc_WindowGroup_--s_WndProcBase_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView___&__::_1_::dtor$0 @ 0x180301426 (_wil--MakeOrThrow_ApplicationViewWrapper_IApplicationView___-__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(result);
  }
  return result;
}
