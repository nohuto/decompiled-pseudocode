/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIImmersiveApplicationInternal@@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18008CCAC
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$4 @ 0x1800AC9D2 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$4.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$8 @ 0x1800ADEA6 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForAppInstance_::_1_::dtor$9 @ 0x1800ADEB8 (_CAppViewManager--_GetMostRecentlyUsedViewForAppInstance_--_1_--dtor$9.c)
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x1800F155D (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x1800F5668 (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$8 @ 0x180110ABC (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$8.c)
 *     _CAppViewManager::_GetMostRecentlyUsedViewForApp_::_1_::dtor$9 @ 0x180110AC8 (_CAppViewManager--_GetMostRecentlyUsedViewForApp_--_1_--dtor$9.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x18014BED8 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$3 @ 0x1801C5666 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$10 @ 0x18021C388 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$10.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$11 @ 0x18021F51D (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$11.c)
 *     _AppViewDataSourceAdapterBase::InitializeDataSource_::_1_::dtor$3 @ 0x1802ACB7E (_AppViewDataSourceAdapterBase--InitializeDataSource_--_1_--dtor$3.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7FB0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x1802B86AC (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802B8990 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1802B8B98 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveApplicationInternal,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::Iterator::~Iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
