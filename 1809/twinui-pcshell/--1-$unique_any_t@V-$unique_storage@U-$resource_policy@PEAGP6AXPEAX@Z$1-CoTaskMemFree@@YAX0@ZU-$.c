/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004D3C0
 * Callers:
 *     ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18004D2DC (-GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18004DE8C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$2 @ 0x18008EED0 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_18008EED0.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$41 @ 0x18008EEF4 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_18008EEF4.c)
 *     _wil::ExpandEnvironmentStringsW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______256__::_1_::dtor$0 @ 0x180095B7C (_wil--ExpandEnvironmentStringsW_wil--unique_any_t_wil--details--unique_storage_wil--details--res.c)
 *     _wil::GetFullPathNameW_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t______256__::_1_::dtor$0 @ 0x180095C30 (_wil--GetFullPathNameW_wil--unique_any_t_wil--details--unique_storage_wil--details--resource_pol.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$3 @ 0x180096BD3 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$3.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$4 @ 0x180096BDF (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$4.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$0 @ 0x180098367 (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$0.c)
 *     _Win32PrimaryAppInformation::IsSameAppId_::_1_::dtor$1 @ 0x180098B85 (_Win32PrimaryAppInformation--IsSameAppId_--_1_--dtor$1.c)
 *     _Win32PrimaryAppInformation::IsSameAppId_::_1_::dtor$2 @ 0x180098B91 (_Win32PrimaryAppInformation--IsSameAppId_--_1_--dtor$2.c)
 *     _ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity_::_1_::dtor$1 @ 0x1800AD650 (_ApplicationViewManagement--ApplicationViewTraceLogging--RaiseApplicationViewChange--StartActivi.c)
 *     _LoggingUtil::GetAppNameFromView_::_1_::dtor$0 @ 0x18010A948 (_LoggingUtil--GetAppNameFromView_--_1_--dtor$0.c)
 *     _LoggingUtil::GetAppNameFromView_::_1_::dtor$1 @ 0x18010A954 (_LoggingUtil--GetAppNameFromView_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x180188909 (_CortanaDesktopExperienceView--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t________::_1_::dtor$0 @ 0x1801AD157 (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--details--resource_p.c)
 *     _GetViewId_::_1_::dtor$2 @ 0x1801B371A (_GetViewId_--_1_--dtor$2.c)
 *     _HolographicPositionerTelemetry::ControlGained::StartActivity_::_1_::dtor$0 @ 0x1801B5138 (_HolographicPositionerTelemetry--ControlGained--StartActivity_--_1_--dtor$0.c)
 *     _HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity_::_1_::dtor$0 @ 0x1801B529F (_HolographicPositionerTelemetry--ControlGainedForActivation--StartActivity_--_1_--dtor$0.c)
 *     _HolographicPositionerTelemetry::ControlLost::StartActivity_::_1_::dtor$0 @ 0x1801B5400 (_HolographicPositionerTelemetry--ControlLost--StartActivity_--_1_--dtor$0.c)
 *     __LogEventWithApplicationViewData_::_1_::dtor$0 @ 0x1801B790A (__LogEventWithApplicationViewData_--_1_--dtor$0.c)
 *     _TabViewManager::GetActivationValueSet_::_1_::dtor$3 @ 0x1801DBCF3 (_TabViewManager--GetActivationValueSet_--_1_--dtor$3.c)
 *     _TabViewManager::GetActivationValueSet_::_1_::dtor$4 @ 0x1801DBCFF (_TabViewManager--GetActivationValueSet_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetAppViewFileName_::_1_::dtor$0 @ 0x1801DBE0D (__anonymous_namespace_--GetAppViewFileName_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetAppViewFileName_::_1_::dtor$1 @ 0x1801DBE33 (__anonymous_namespace_--GetAppViewFileName_--_1_--dtor$1.c)
 *     __anonymous_namespace_::GetApplicationViewImageName_::_1_::dtor$0 @ 0x1801DBF4A (__anonymous_namespace_--GetApplicationViewImageName_--_1_--dtor$0.c)
 *     _GetAumid_::_1_::dtor$1 @ 0x1801DC071 (_GetAumid_--_1_--dtor$1.c)
 *     _TabViewManager::GetDisplayNameForShellTab_::_1_::dtor$2 @ 0x1801DC7B3 (_TabViewManager--GetDisplayNameForShellTab_--_1_--dtor$2.c)
 *     _TabViewManager::GetShellItemForView_::_1_::dtor$3 @ 0x1801DD0A9 (_TabViewManager--GetShellItemForView_--_1_--dtor$3.c)
 *     _TabViewManagerTraceLogging::TabViewManager_CloseView::StartActivity_::_1_::dtor$0 @ 0x1801E5753 (_TabViewManagerTraceLogging--TabViewManager_CloseView--StartActivity_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_EnterFullScreen::StartActivity_::_1_::dtor$0 @ 0x1801E587B (_TabViewManagerTraceLogging--TabViewManager_EnterFullScreen--StartActivity_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_ExitFullScreen::StartActivity_::_1_::dtor$0 @ 0x1801E59A3 (_TabViewManagerTraceLogging--TabViewManager_ExitFullScreen--StartActivity_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::StartActivity_::_1_::dtor$0 @ 0x1801E63BF (_TabViewManagerTraceLogging--TabViewManager_ReplacementTabSelection--StartActivity_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_ReplacementTabSelection::StartActivity_::_1_::dtor$1 @ 0x1801E63CB (_TabViewManagerTraceLogging--TabViewManager_ReplacementTabSelection--StartActivity_--_1_--dtor$1.c)
 *     _TabViewManagerMeasures::TabViewManagerCloseViewForTab__::_1_::dtor$0 @ 0x1801EBF51 (_TabViewManagerMeasures--TabViewManagerCloseViewForTab__--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_AddTabAndViewToMaps__::_1_::dtor$0 @ 0x1801EC4A1 (_TabViewManagerTraceLogging--TabViewManager_AddTabAndViewToMaps__--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_OnTabViewOperationRequested__::_1_::dtor$0 @ 0x1801EC8FE (_TabViewManagerTraceLogging--TabViewManager_OnTabViewOperationRequested__--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_RemoveTabAndViewFromMaps__::_1_::dtor$0 @ 0x1801ECBA9 (_TabViewManagerTraceLogging--TabViewManager_RemoveTabAndViewFromMaps__--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_RemovingViewFromTabGroup__::_1_::dtor$0 @ 0x1801ECD12 (_TabViewManagerTraceLogging--TabViewManager_RemovingViewFromTabGroup__--_1_--dtor$0.c)
 *     __lambda_d7abd66dc512e2fb4770cc647848e269_::operator()_::_1_::dtor$0 @ 0x1801F3B50 (__lambda_d7abd66dc512e2fb4770cc647848e269_--operator()_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup__::_1_::dtor$0 @ 0x1801F4592 (_TabViewManagerTraceLogging--TabAppPolicySettings_IsActivatingIntoExistingGroup__--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup__::_1_::dtor$0 @ 0x1801F46D7 (_TabViewManagerTraceLogging--TabAppPolicySettings_IsViewInActivationGroup__--_1_--dtor$0.c)
 *     __lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator()_::_1_::dtor$2 @ 0x1801FE0E8 (__lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator()_--_1_--dtor$2.c)
 *     _DefaultIconManager::GetTileForWinRtView_::_1_::dtor$0 @ 0x1801FF831 (_DefaultIconManager--GetTileForWinRtView_--_1_--dtor$0.c)
 *     _TabViewManagerTraceLogging::TabViewManager_CloakView::StartActivity_::_1_::dtor$0 @ 0x180208529 (_TabViewManagerTraceLogging--TabViewManager_CloakView--StartActivity_--_1_--dtor$0.c)
 *     __lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator()_::_1_::dtor$1 @ 0x18023D113 (__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator()_--_1_--dtor$1.c)
 *     __lambda_41ea728de8cee2282d4ec3314b3d541b_::operator()_::_1_::dtor$1 @ 0x18024D686 (__lambda_41ea728de8cee2282d4ec3314b3d541b_--operator()_--_1_--dtor$1.c)
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180298500 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     _XamlLauncher::LogErrorIfStartOrCortanaArentInstalled_::_1_::dtor$0 @ 0x18029B971 (_XamlLauncher--LogErrorIfStartOrCortanaArentInstalled_--_1_--dtor$0.c)
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x1802E1CF0 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x180307750 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 *     _ActivationHints::GetKeyAt_::_1_::dtor$3 @ 0x18032BE23 (_ActivationHints--GetKeyAt_--_1_--dtor$3.c)
 *     _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_1_::dtor$3 @ 0x180330300 (_ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_1_--dtor$3.c)
 *     _CDesktopPositioner::_GetLaunchPositionForPeoplePane_::_1_::dtor$2 @ 0x18034100D (_CDesktopPositioner--_GetLaunchPositionForPeoplePane_--_1_--dtor$2.c)
 *     _lambda_79f009b23088b8a5ebca1297f4390c86_::operator() @ 0x1803A8C44 (_lambda_79f009b23088b8a5ebca1297f4390c86_--operator().c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803ABAA4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1803AC2D8 (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
