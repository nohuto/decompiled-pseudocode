/*
 * XREFs of _wil::MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor$0 @ 0x1802228CC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E00 (--1-$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_____ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<LegacyWindowWrapper>::~ComPtr<LegacyWindowWrapper>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
