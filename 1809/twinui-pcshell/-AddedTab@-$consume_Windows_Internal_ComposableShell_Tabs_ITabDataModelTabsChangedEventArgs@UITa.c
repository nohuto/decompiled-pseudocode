/*
 * XREFs of ?AddedTab@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs@UITabDataModelTabsChangedEventArgs@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUShellTab@Tabs@ComposableShell@Internal@Windows@3@XZ @ 0x1803972BC
 * Callers:
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x1803970AC (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x180398034 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180384E9C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelTabsChangedEventArgs<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs>::AddedTab(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 72LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a2;
}
