/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC
 * Callers:
 *     ??$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UIUserWatcher@System@Windows@winrt@@@impl@6@$BJA@AA@impl@6@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@86@@impl@winrt@@YA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$1??_9type@?$abi@UIUserWatcher@System@Windows@winrt@@@impl@6@$BJA@AA@01@PEBU?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@01@Uevent_token@1@@Z @ 0x18009AC6C (--$make_event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@U-$even.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x180384D44 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180384E18 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180384E34 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x180396ED4 (_winrt--impl--make_marshaler_--_2_--marshaler--marshaler.c)
 *     ??1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ @ 0x180396FBC (--1VirtualDesktopGroupedViewsEventListener@@UEAA@XZ.c)
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x1803970AC (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::Release @ 0x180397B00 (_winrt--impl--make_marshaler_--_2_--marshaler--Release.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180397B98 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x180398034 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x18039837C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 *     ?revoke@?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x180398530 (-revoke@-$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@winr.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180398659 (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180398727 (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1803987CC (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180398871 (_winrt--to_hresult_--_1_--catch$29.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IInspectable>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
