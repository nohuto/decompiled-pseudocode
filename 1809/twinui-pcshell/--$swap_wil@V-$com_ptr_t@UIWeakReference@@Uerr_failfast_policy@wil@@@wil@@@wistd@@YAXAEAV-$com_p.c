/*
 * XREFs of ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x1801F5CE4
 * Callers:
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F63F4 (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P83456@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP83456@EAAJUEventRegistrationToken@@@ZPEAU789@@details@wil@@YAJPEAUITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@P82345@EAAJPEAU?$ITypedEventHandler@PEAVTileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@PEAVContentsChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@ZP82345@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITileCollectionContainer@UnifiedTile@Shell@WindowsInternal@@@1@@Z @ 0x1801FD0F4 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITileCollectionContainer@UnifiedTi.c)
 *     ??4?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802AA49C (--4-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@.c)
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180397B98 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  v4 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *a2;
  v8 = 0LL;
  *a2 = v2;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v8);
}
