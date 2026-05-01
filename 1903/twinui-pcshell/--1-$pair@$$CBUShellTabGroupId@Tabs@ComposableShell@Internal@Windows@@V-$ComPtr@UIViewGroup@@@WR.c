/*
 * XREFs of ??1?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x18010DD84
 * Callers:
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x180112C0C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x18011EB05 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x18011EB11 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x180125B50 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$2 @ 0x1802303F2 (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$2.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$3 @ 0x1802303FE (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$3.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$2 @ 0x180241C0E (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$2.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$3 @ 0x180241C1A (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$3.c)
 *     __lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()_::_1_::dtor$1 @ 0x180250E48 (__lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator()_--_1_--dtor$1.c)
 *     __lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()_::_1_::dtor$2 @ 0x180250E54 (__lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator()_--_1_--dtor$2.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x18027B074 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x18027B080 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x18027CD98 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x18027CDA4 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8____::_1_::dtor$0 @ 0x1802BC37C (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$9 @ 0x18030559D (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$10 @ 0x1803055A9 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$12 @ 0x1803055C1 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$12.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$13 @ 0x1803055CD (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$13.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$4 @ 0x1803A22AF (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$4.c)
 *     _CDesktopPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1803A4D60 (_CDesktopPositioner--UnsubscribeFromServices_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>::~pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 16));
}
