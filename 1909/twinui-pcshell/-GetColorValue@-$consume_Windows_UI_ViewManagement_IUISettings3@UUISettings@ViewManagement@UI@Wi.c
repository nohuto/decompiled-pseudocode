/*
 * XREFs of ?GetColorValue@?$consume_Windows_UI_ViewManagement_IUISettings3@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA?AUColor@UI@Windows@3@AEBW4UIColorType@ViewManagement@563@@Z @ 0x18009CCB4
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18009DC90 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_DWORD *__fastcall winrt::impl::consume_Windows_UI_ViewManagement_IUISettings3<winrt::Windows::UI::ViewManagement::UISettings>::GetColorValue(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _DWORD *a2,
        unsigned int *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v5 = *a1;
  v6 = 0LL;
  v9 = 0LL;
  if ( v5 )
  {
    (**v5)(v5, &winrt::impl::guid_storage<winrt::Windows::UI::ViewManagement::IUISettings3>::value, &v9);
    v6 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v6 + 48LL))(v6, *a3, a2);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  return a2;
}
