/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x180094680
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8____::_1_::dtor$0 @ 0x180093DD5 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview-.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$8 @ 0x1800C2D42 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$9 @ 0x1800C2D54 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$9.c)
 *     _CApplicationManager::UpdateMonitorForAppAsync_::_1_::dtor$1 @ 0x1800C33E0 (_CApplicationManager--UpdateMonitorForAppAsync_--_1_--dtor$1.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x180115EF7 (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x18011A8EC (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$8 @ 0x18013789C (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$9 @ 0x1801378A8 (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$9.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$3 @ 0x18021DA49 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$10 @ 0x180271E13 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$10.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$11 @ 0x180274C0C (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$11.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$2 @ 0x1802B2006 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$2.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$3 @ 0x1802B2012 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$3.c)
 *     _XamlAllUpViewHost::CreateFrames_::_1_::dtor$3 @ 0x1802C81F6 (_XamlAllUpViewHost--CreateFrames_--_1_--dtor$3.c)
 *     _XamlAllUpViewHost::CreateFrames_::_1_::dtor$4 @ 0x1802C8202 (_XamlAllUpViewHost--CreateFrames_--_1_--dtor$4.c)
 *     _AppViewDataSourceAdapterBase::InitializeDataSource_::_1_::dtor$3 @ 0x18030504E (_AppViewDataSourceAdapterBase--InitializeDataSource_--_1_--dtor$3.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803117A0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _TouchKeyboardExperienceManager::OnChromeOffsetsChanged_::_1_::dtor$2 @ 0x18031189B (_TouchKeyboardExperienceManager--OnChromeOffsetsChanged_--_1_--dtor$2.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180311E48 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedHide_::_1_::dtor$1 @ 0x180311F25 (_TouchKeyboardExperienceManager--OnInputAppRequestedHide_--_1_--dtor$1.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803121E0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$2 @ 0x1803122DB (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$2.c)
 *     _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$3 @ 0x18039CDFF (_UwpPrimaryAppProxy--GetSortedConnectedMonitors_--_1_--dtor$3.c)
 *     _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$4 @ 0x18039CE0B (_UwpPrimaryAppProxy--GetSortedConnectedMonitors_--_1_--dtor$4.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$3 @ 0x1803F562B (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$3.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$4 @ 0x1803F5637 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
