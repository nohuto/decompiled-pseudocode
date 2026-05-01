/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800DE424
 * Callers:
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1800AF3E7 (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::GetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x1800AF40B (_CWin32ApplicationView--GetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _CApplicationViewBase::GetEnterpriseId_::_1_::dtor$0 @ 0x180134CAA (_CApplicationViewBase--GetEnterpriseId_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x180199EA6 (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _XamlExplorerHost::SwitchItemDataSource::[WindowsInternal::ComposableShell::Desktop::IDesktopAppHost]::get_::_1_::dtor$1 @ 0x18025D7DE (_XamlExplorerHost--SwitchItemDataSource--[WindowsInternal--ComposableShell--Desktop_ea_18025D7DE.c)
 *     _TouchKeyboardExperienceManager::FindFrameWrapper_::_1_::dtor$0 @ 0x1802B5C98 (_TouchKeyboardExperienceManager--FindFrameWrapper_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindViewInfo_::_1_::dtor$0 @ 0x1802B5E3B (_TouchKeyboardExperienceManager--FindViewInfo_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindViewInfo_::_1_::dtor$0_0 @ 0x1802B5EF4 (_TouchKeyboardExperienceManager--FindViewInfo_--_1_--dtor$0_0.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x1802B8D57 (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 *     _VirtualDesktopDataSource::get_VirtualDesktops_::_1_::dtor$0 @ 0x1802D7DF2 (_VirtualDesktopDataSource--get_VirtualDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1802D82E9 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CreateDesktopW_::_1_::dtor$0 @ 0x1802D8400 (_VirtualDesktopController--CreateDesktopW_--_1_--dtor$0.c)
 *     _VirtualDesktopController::GetAdjacentDesktop_::_1_::dtor$0 @ 0x1802D8628 (_VirtualDesktopController--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x1802D8D73 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x1802D9278 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$0 @ 0x1802D93CA (_VirtualDesktopController--SwitchToDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Register_::_1_::dtor$0 @ 0x1803804BF (_CVirtualDesktopNotifications--Register_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Unregister_::_1_::dtor$0 @ 0x18038061F (_CVirtualDesktopNotifications--Unregister_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::CanViewMoveDesktops_::_1_::dtor$0 @ 0x180385BD5 (_CVirtualDesktopManager--CanViewMoveDesktops_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::FindDesktop_::_1_::dtor$0 @ 0x180385F33 (_CVirtualDesktopManager--FindDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetAdjacentDesktop_::_1_::dtor$0 @ 0x180385FDD (_CVirtualDesktopManager--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetCount_::_1_::dtor$0 @ 0x18038609C (_CVirtualDesktopManager--GetCount_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1803864EF (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktops_::_1_::dtor$0 @ 0x1803865EC (_CVirtualDesktopManager--GetDesktops_--_1_--dtor$0.c)
 *     _VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor$0 @ 0x180391A81 (_VirtualPinnedAppsHandler--IsViewPinned_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x1803961EE (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x180396353 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
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
