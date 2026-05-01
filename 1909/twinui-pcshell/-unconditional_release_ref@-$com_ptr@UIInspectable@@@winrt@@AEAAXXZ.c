/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780
 * Callers:
 *     _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x1800A1844 (_winrt--impl--make_marshaler_--_2_--marshaler--marshaler.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::Release @ 0x1800A3D60 (_winrt--impl--make_marshaler_--_2_--marshaler--Release.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A408C (-await_suspend@-$await_adapter@U-$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@A.c)
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800A41C4 (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x1800A430C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 *     ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@6@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x1800AE3B4 (--$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U-$even.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6878 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x1801ED274 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801ED380 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801FD9BF (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801FDA5F (_winrt--to_hresult_--_1_--catch$18.c)
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x18041C848 (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x18041C8F0 (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18041D108 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x18041D5A4 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 *     ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18041D948 (-revoke@-$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IInspectable>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
