/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x1800EB028
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1800AEF9D (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1800AEFE8 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x1800EEB5C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x1800F8638 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$1 @ 0x1800F907C (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$2 @ 0x1800F9088 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$2.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1800FFCBA (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$2 @ 0x1801DCE3E (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$2.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$3 @ 0x1801DCE4A (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$3.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$2 @ 0x1801EF57D (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$2.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$3 @ 0x1801EF589 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$3.c)
 *     __lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()_::_1_::dtor$1 @ 0x1801FDBE6 (__lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator()_--_1_--dtor$1.c)
 *     __lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()_::_1_::dtor$2 @ 0x1801FDBF2 (__lambda_2d66124cdfcf65a08201bdfe6f61e828_--operator()_--_1_--dtor$2.c)
 *     _WindowingEnvironmentSettings::WindowingEnvironmentSettings_::_1_::dtor$3 @ 0x180224D8D (_WindowingEnvironmentSettings--WindowingEnvironmentSettings_--_1_--dtor$3.c)
 *     _WindowingEnvironmentSettings::WindowingEnvironmentSettings_::_1_::dtor$4 @ 0x180224D99 (_WindowingEnvironmentSettings--WindowingEnvironmentSettings_--_1_--dtor$4.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8____::_1_::dtor$0 @ 0x1802638FC (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$9 @ 0x1802AD0CD (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$10 @ 0x1802AD0D9 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$12 @ 0x1802AD0F1 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$12.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$13 @ 0x1802AD0FD (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$13.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$4 @ 0x18033D288 (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$4.c)
 *     _CDesktopPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x18033FB56 (_CDesktopPositioner--UnsubscribeFromServices_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
