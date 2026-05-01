/*
 * XREFs of ??$as@UTabDataModel@Tabs@ComposableShell@Internal@Windows@winrt@@UIInspectable@@@impl@winrt@@YA?AUTabDataModel@Tabs@ComposableShell@Internal@Windows@1@PEAUIInspectable@@@Z @ 0x1803FCD9C
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1803FDA78 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ComposableShell::Tabs::TabDataModel,IInspectable>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(
           a2,
           &winrt::impl::guid_storage<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModel>::value,
           a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}
