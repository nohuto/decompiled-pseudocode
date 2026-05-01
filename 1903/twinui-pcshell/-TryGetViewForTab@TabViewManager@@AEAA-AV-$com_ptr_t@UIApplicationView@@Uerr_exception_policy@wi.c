/*
 * XREFs of ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180240614
 * Callers:
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x18022D4B8 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x18022FB80 (-GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wind.c)
 *     ?OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerRectEventArgs@3456@@Z @ 0x180232D20 (-OnBoundingRectRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180232FF0 (-OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windo.c)
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1802335C0 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x180233F40 (-OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x180234110 (-OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180234460 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1802349B0 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180237B40 (-SetTabGroupForeground@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18023F728 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180241AA8 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802310F0 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 */

__int64 **__fastcall TabViewManager::TryGetViewForTab(RTL_SRWLOCK *a1, __int64 **a2, unsigned __int64 a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = a1 + 181;
  AcquireSRWLockShared(a1 + 181);
  TabViewManager::GetViewForTabLockHeld((__int64)a1, a2, a3);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return a2;
}
