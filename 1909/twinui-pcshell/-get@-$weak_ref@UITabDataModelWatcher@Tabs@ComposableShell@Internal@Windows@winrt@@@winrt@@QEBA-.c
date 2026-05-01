/*
 * XREFs of ?get@?$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@2@XZ @ 0x18041D860
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18041D108 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18041D948 (-revoke@-$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(__int64, void *, _QWORD *))(*(_QWORD *)v3 + 24LL))(
      v3,
      &winrt::impl::guid_storage<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::value,
      a2);
  return a2;
}
