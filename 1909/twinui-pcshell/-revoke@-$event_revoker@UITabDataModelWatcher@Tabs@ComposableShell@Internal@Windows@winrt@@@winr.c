/*
 * XREFs of ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18041D948
 * Callers:
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x18041C848 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18041D108 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA?AUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@2@XZ @ 0x18041D860 (-get@-$weak_ref@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEBA-.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::revoke(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  v5 = v2;
  result = (__int64)winrt::weak_ref<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::get(
                      &v5,
                      &v4);
  if ( v2 )
    result = winrt::com_ptr<IInspectable>::unconditional_release_ref(&v5);
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(v4, *(_QWORD *)(a1 + 16));
    if ( v4 )
      return winrt::com_ptr<IInspectable>::unconditional_release_ref(&v4);
  }
  return result;
}
