/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&___ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_&___ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor$0 @ 0x1800ABB3F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180224E48 (--1-$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppView_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IAppModel_____ptr64_enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::IWindow_____ptr64_Windows::Internal::ApplicationModel::WindowManagement::WindowId_____ptr64_unsigned_short_const_____ptr64_enum_WindowCreatedType__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowWrapper>::~ComPtr<WindowWrapper>(*(_QWORD *)(a2 + 144));
  }
  return result;
}
