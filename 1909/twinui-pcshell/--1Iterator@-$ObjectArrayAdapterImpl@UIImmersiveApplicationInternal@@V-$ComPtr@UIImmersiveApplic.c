/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x180096640
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8____::_1_::dtor$0 @ 0x1800A10B5 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview-.c)
 *     _CApplicationManager::UpdateMonitorForAppAsync_::_1_::dtor$1 @ 0x1800E74EF (_CApplicationManager--UpdateMonitorForAppAsync_--_1_--dtor$1.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$8 @ 0x1800E7EA6 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$9 @ 0x1800E7EB8 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$9.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x180135367 (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x180139D8C (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$8 @ 0x180156E1C (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$9 @ 0x180156E28 (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$9.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$3 @ 0x18023D0C9 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$10 @ 0x1802912E3 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$10.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$11 @ 0x1802940DC (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$11.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$2 @ 0x1802D1505 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$2.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$3 @ 0x1802D1511 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$3.c)
 *     _XamlAllUpViewHost::CreateFrames_::_1_::dtor$3 @ 0x1802E76D2 (_XamlAllUpViewHost--CreateFrames_--_1_--dtor$3.c)
 *     _XamlAllUpViewHost::CreateFrames_::_1_::dtor$4 @ 0x1802E76DE (_XamlAllUpViewHost--CreateFrames_--_1_--dtor$4.c)
 *     _AppViewDataSourceAdapterBase::InitializeDataSource_::_1_::dtor$3 @ 0x18032452E (_AppViewDataSourceAdapterBase--InitializeDataSource_--_1_--dtor$3.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180330C70 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _TouchKeyboardExperienceManager::OnChromeOffsetsChanged_::_1_::dtor$2 @ 0x180330D6B (_TouchKeyboardExperienceManager--OnChromeOffsetsChanged_--_1_--dtor$2.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180331318 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedHide_::_1_::dtor$1 @ 0x1803313F5 (_TouchKeyboardExperienceManager--OnInputAppRequestedHide_--_1_--dtor$1.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803316F0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$2 @ 0x1803317EB (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$2.c)
 *     _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$3 @ 0x1803BC59F (_UwpPrimaryAppProxy--GetSortedConnectedMonitors_--_1_--dtor$3.c)
 *     _UwpPrimaryAppProxy::GetSortedConnectedMonitors_::_1_::dtor$4 @ 0x1803BC5AB (_UwpPrimaryAppProxy--GetSortedConnectedMonitors_--_1_--dtor$4.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$3 @ 0x180414D9B (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$3.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$4 @ 0x180414DA7 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
