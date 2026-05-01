/*
 * XREFs of ??1?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E48
 * Callers:
 *     _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor$0 @ 0x1800ABB3F (_Microsoft--WRL--Details--Make_WindowWrapper_WindowEventDispatcher_____ptr64_Windows--Internal--.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$74 @ 0x1800AC590 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$74.c)
 *     _wil::MakeOrThrow_WindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_(&___ptr64)[53]_enum_WindowCreatedType_&___ptr64__::_1_::dtor$0 @ 0x1800AF36A (_wil--MakeOrThrow_WindowWrapper_WindowEventDispatcher_____ptr64_Windows--Internal--ApplicationMo.c)
 *     _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_(&___ptr64)[53]_enum_WindowCreatedType_&___ptr64__::_1_::dtor$0 @ 0x1800AF396 (_Microsoft--WRL--Details--Make_WindowWrapper_WindowEventDispatcher_____ptr64_Window_ea_1800AF396.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowWrapper>::~ComPtr<WindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
