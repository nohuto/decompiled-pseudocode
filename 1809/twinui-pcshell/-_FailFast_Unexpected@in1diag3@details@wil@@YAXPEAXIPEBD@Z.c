/*
 * XREFs of ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C
 * Callers:
 *     ?GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800945A0 (-GetDefaultKeyboardSizeConsideringOverriddenMonitorSize@PositionAndSizeOptionsHelper@KeyboardHos.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800E12C0 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1800E255C (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109888 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x180109C90 (-DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x18019D010 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ?RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C5C14 (-RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1801CE034 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA?AU?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@PEAUICompositor@Composition@UI@Windows@@PEAUIShellTab@Tabs@ComposableShell@Internal@7@PEAUHWND__@@AEBUSize@Foundation@7@@Z @ 0x1801D9414 (-CreateDwmSharedThumbnailVisual@TabViewManager@@AEAA-AU-$pair@V-$com_ptr_t@UIVisual@Composition@.c)
 *     ?PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801E2EA0 (-PerformWindowPlacementOperation@TabViewManager@@AEAAJPEAUIApplicationView@@W4ViewCommand@Tabs@C.c)
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::operator() @ 0x1801F6534 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--operator().c)
 *     ?CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@6@PEAPEAUIViewGroup@@@Z @ 0x1801FA2F0 (-CreateViewGroup@ViewGroupManager@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@.c)
 *     ?UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@Internal@Windows@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180200830 (-UpdateIconForAppUserModelId@DefaultIconManager@@AEAAJPEAUIShellTabImage@Tabs@ComposableShell@In.c)
 *     ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180201BDC (--$K32GetModuleFileNameExW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1.c)
 *     _lambda_37719fec74321e5ebed3721a062c5e83_::operator() @ 0x1802045C0 (_lambda_37719fec74321e5ebed3721a062c5e83_--operator().c)
 *     ?OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x180232D50 (-OnDisconnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ @ 0x180255480 (-EnsureLockHeldExclusive@WindowingEnvironmentManager@@UEAAXXZ.c)
 *     ?DragEnterForApplicationManagedTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18026FB50 (-DragEnterForApplicationManagedTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAUIAp.c)
 *     ?DragEnterForSystemTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@@Z @ 0x18026FB80 (-DragEnterForSystemTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@@Z.c)
 *     ?DuplicateTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18026FBB0 (-DuplicateTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?EvaluateViewGroupingAndManagement@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18026FBE0 (-EvaluateViewGroupingAndManagement@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEA.c)
 *     ?GetTabDragType@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z @ 0x180270540 (-GetTabDragType@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z.c)
 *     ?OnTabbedWindowMisbehaving@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180273950 (-OnTabbedWindowMisbehaving@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?SelectViewInTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x180274610 (-SelectViewInTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?SwitchToFallbackTabForGroup@SwitcherTabViewManagerWrapper@@UEAAJAEBU_GUID@@@Z @ 0x1802761D0 (-SwitchToFallbackTabForGroup@SwitcherTabViewManagerWrapper@@UEAAJAEBU_GUID@@@Z.c)
 *     ?TryAssignViewToTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x180276380 (-TryAssignViewToTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAUIUnknown@.c)
 *     ?TryGetLastSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUIInspectable@@@Z @ 0x1802763B0 (-TryGetLastSelectedTabForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?TryGetTabGroupForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180276520 (-TryGetTabGroupForView@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAP.c)
 *     ?TryRemoveViewFromTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@@Z @ 0x180276550 (-TryRemoveViewFromTabGroup@SwitcherTabViewManagerWrapper@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x180297FB8 (--$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA-AV-$unique_ptr@$$BY0A@Uta.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1802BE998 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1802C63B4 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180049D88 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Unexpected(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
