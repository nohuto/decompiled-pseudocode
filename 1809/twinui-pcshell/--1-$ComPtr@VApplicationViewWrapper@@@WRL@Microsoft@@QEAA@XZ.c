/*
 * XREFs of ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB1C8
 * Callers:
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings_____ptr64_IApplicationView_____ptr64_unsigned_int_&___ptr64__::_1_::dtor$0 @ 0x1800E94EE (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerInterop--IWindo.c)
 *     _Microsoft::WRL::Details::Make_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180203A73 (_Microsoft--WRL--Details--Make_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_.c)
 *     _wil::MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180203B17 (_wil--MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations_____ptr64_-___ptr64__--.c)
 *     _wil::MakeOrThrow_WindowGroup_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x180208FF9 (_wil--MakeOrThrow_WindowGroup_unsigned_long_-___ptr64__--_1_--dtor$0.c)
 *     _CWRLImpWndProc_WindowGroup_::s_WndProcBase_::_1_::dtor$0 @ 0x180209444 (_CWRLImpWndProc_WindowGroup_--s_WndProcBase_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802A8DEE (_wil--MakeOrThrow_ApplicationViewWrapper_IApplicationView_____ptr64_-___ptr64__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(result);
  }
  return result;
}
