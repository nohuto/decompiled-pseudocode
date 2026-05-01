/*
 * XREFs of ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E00
 * Callers:
 *     _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_(&___ptr64)[53]_enum_WindowCreatedType_&___ptr64__::_1_::dtor$0 @ 0x180221F7E (_Microsoft--WRL--Details--Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows--Inte.c)
 *     _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor$0 @ 0x1802220FD (_Microsoft--WRL--Details--Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64__ea_1802220FD.c)
 *     _wil::MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_(&___ptr64)[53]_enum_WindowCreatedType_&___ptr64__::_1_::dtor$0 @ 0x180222807 (_wil--MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows--Internal--Applica.c)
 *     _wil::MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor$0 @ 0x1802228CC (_wil--MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows--Inte_ea_1802228CC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022AEE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWind_ea_18022AEE0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyWindowWrapper>::~ComPtr<LegacyWindowWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
