/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18011F218
 * Callers:
 *     __lambda_6f5f86943447a9eee0358fb4a1366934_::operator()_::_1_::dtor$7 @ 0x1800AAE6F (__lambda_6f5f86943447a9eee0358fb4a1366934_--operator()_--_1_--dtor$7.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1800E94C7 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::GetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x1800E94EB (_CWin32ApplicationView--GetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _CApplicationViewBase::GetEnterpriseId_::_1_::dtor$0 @ 0x18017D94A (_CApplicationViewBase--GetEnterpriseId_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x1801FFF04 (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _XamlExplorerHost::SwitchItemDataSource::[WindowsInternal::ComposableShell::Desktop::IDesktopAppHost]::get_::_1_::dtor$1 @ 0x1802D583E (_XamlExplorerHost--SwitchItemDataSource--[WindowsInternal--ComposableShell--Desktop_ea_1802D583E.c)
 *     _TouchKeyboardExperienceManager::FindFrameWrapper_::_1_::dtor$0 @ 0x18032DF5D (_TouchKeyboardExperienceManager--FindFrameWrapper_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindViewInfo_::_1_::dtor$0 @ 0x18032E109 (_TouchKeyboardExperienceManager--FindViewInfo_--_1_--dtor$0.c)
 *     _VirtualDesktopDataSource::get_VirtualDesktops_::_1_::dtor$0 @ 0x18035860A (_VirtualDesktopDataSource--get_VirtualDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x180358AF9 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CreateDesktopW_::_1_::dtor$0 @ 0x180358C10 (_VirtualDesktopController--CreateDesktopW_--_1_--dtor$0.c)
 *     _VirtualDesktopController::GetAdjacentDesktop_::_1_::dtor$0 @ 0x180358E39 (_VirtualDesktopController--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x180359583 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x180359A88 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$0 @ 0x180359BDA (_VirtualDesktopController--SwitchToDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Register_::_1_::dtor$0 @ 0x180405B2F (_CVirtualDesktopNotifications--Register_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Unregister_::_1_::dtor$0 @ 0x180405C8F (_CVirtualDesktopNotifications--Unregister_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::CanViewMoveDesktops_::_1_::dtor$0 @ 0x18040AD85 (_CVirtualDesktopManager--CanViewMoveDesktops_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::FindDesktop_::_1_::dtor$0 @ 0x18040B0F3 (_CVirtualDesktopManager--FindDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetAdjacentDesktop_::_1_::dtor$0 @ 0x18040B19D (_CVirtualDesktopManager--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetCount_::_1_::dtor$0 @ 0x18040B25C (_CVirtualDesktopManager--GetCount_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x18040B6C5 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktops_::_1_::dtor$0 @ 0x18040B7BC (_CVirtualDesktopManager--GetDesktops_--_1_--dtor$0.c)
 *     _VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor$0 @ 0x180417061 (_VirtualPinnedAppsHandler--IsViewPinned_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x18041BB4B (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x18041BCC3 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
