/*
 * XREFs of ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@01@@Z @ 0x180396994
 * Callers:
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x180398034 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180384E9C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown>::type>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(a2, &winrt::impl::guid_storage<IInspectable>::value, a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}
