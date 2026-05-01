/*
 * XREFs of _Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_(&___ptr64)[53]_enum_WindowCreatedType_&___ptr64__::_1_::dtor$0 @ 0x180221F7E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E00 (--1-$ComPtr@VLegacyWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_LegacyWindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_____ptr64_unsigned_short_const______ptr64__53__enum_WindowCreatedType_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<LegacyWindowWrapper>::~ComPtr<LegacyWindowWrapper>(*(_QWORD *)(a2 + 144));
  }
  return result;
}
