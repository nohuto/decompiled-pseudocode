/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801001F8
 * Callers:
 *     __lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator()_::_1_::dtor$7 @ 0x18009D477 (__lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator()_--_1_--dtor$7.c)
 *     _CVirtualDesktop::IsViewVisible_::_1_::dtor$0 @ 0x1800C6D3C (_CVirtualDesktop--IsViewVisible_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::GetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x1800C6D60 (_CWin32ApplicationView--GetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _CApplicationViewBase::GetEnterpriseId_::_1_::dtor$0 @ 0x18015E68A (_CApplicationViewBase--GetEnterpriseId_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x1801E0CB4 (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _XamlExplorerHost::SwitchItemDataSource::[WindowsInternal::ComposableShell::Desktop::IDesktopAppHost]::get_::_1_::dtor$1 @ 0x1802B630E (_XamlExplorerHost--SwitchItemDataSource--[WindowsInternal--ComposableShell--Desktop_ea_1802B630E.c)
 *     _TouchKeyboardExperienceManager::FindFrameWrapper_::_1_::dtor$0 @ 0x18030EA9D (_TouchKeyboardExperienceManager--FindFrameWrapper_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindViewInfo_::_1_::dtor$0 @ 0x18030EC49 (_TouchKeyboardExperienceManager--FindViewInfo_--_1_--dtor$0.c)
 *     _VirtualDesktopDataSource::get_VirtualDesktops_::_1_::dtor$0 @ 0x180338DDA (_VirtualDesktopDataSource--get_VirtualDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1803392B9 (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CreateDesktopW_::_1_::dtor$0 @ 0x1803393D0 (_VirtualDesktopController--CreateDesktopW_--_1_--dtor$0.c)
 *     _VirtualDesktopController::GetAdjacentDesktop_::_1_::dtor$0 @ 0x1803395F9 (_VirtualDesktopController--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x180339D43 (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x18033A238 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$0 @ 0x18033A38A (_VirtualDesktopController--SwitchToDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Register_::_1_::dtor$0 @ 0x1803E64FF (_CVirtualDesktopNotifications--Register_--_1_--dtor$0.c)
 *     _CVirtualDesktopNotifications::Unregister_::_1_::dtor$0 @ 0x1803E664F (_CVirtualDesktopNotifications--Unregister_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::CanViewMoveDesktops_::_1_::dtor$0 @ 0x1803EB645 (_CVirtualDesktopManager--CanViewMoveDesktops_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::FindDesktop_::_1_::dtor$0 @ 0x1803EB9B3 (_CVirtualDesktopManager--FindDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetAdjacentDesktop_::_1_::dtor$0 @ 0x1803EBA5D (_CVirtualDesktopManager--GetAdjacentDesktop_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetCount_::_1_::dtor$0 @ 0x1803EBB1C (_CVirtualDesktopManager--GetCount_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$0 @ 0x1803EBF85 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::GetDesktops_::_1_::dtor$0 @ 0x1803EC07C (_CVirtualDesktopManager--GetDesktops_--_1_--dtor$0.c)
 *     _VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor$0 @ 0x1803F7951 (_VirtualPinnedAppsHandler--IsViewPinned_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::GetWindowDesktopId_::_1_::dtor$0 @ 0x1803FC48B (_VirtualDesktopsApi--GetWindowDesktopId_--_1_--dtor$0.c)
 *     _VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop_::_1_::dtor$0 @ 0x1803FC603 (_VirtualDesktopsApi--IsWindowOnCurrentVirtualDesktop_--_1_--dtor$0.c)
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
