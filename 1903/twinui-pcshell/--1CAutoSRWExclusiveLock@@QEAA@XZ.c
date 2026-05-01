/*
 * XREFs of ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18010E768
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1800654C0 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CAppViewManager::_QueueOperation_::_1_::dtor$0 @ 0x1800C2BE6 (_CAppViewManager--_QueueOperation_--_1_--dtor$0.c)
 *     __lambda_6c7f1af74cf45db94091666f28e782cd_::operator()_::_1_::dtor$4 @ 0x1800C2C70 (__lambda_6c7f1af74cf45db94091666f28e782cd_--operator()_--_1_--dtor$4.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$12 @ 0x1800C2E32 (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$12.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$4 @ 0x1800C2EE2 (_CApplicationFrameService--OnCommand_--_1_--dtor$4.c)
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$5 @ 0x1800C4E90 (_CApplicationManager--ApplyOperation_--_1_--dtor$5.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x1800C53CF (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$0.c)
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$1 @ 0x1800C606D (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$1.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x1800C6469 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$2 @ 0x1800C65C6 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$3 @ 0x18011DAB9 (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$3 @ 0x18011DD65 (_CApplicationManager--_HandleUniversalTitleBarVisibilityChangeRequest_--_1_--dtor$3.c)
 *     __lambda_3a58774b2403835eabbd2227e376bc7e_::operator()_::_1_::dtor$0 @ 0x18012E153 (__lambda_3a58774b2403835eabbd2227e376bc7e_--operator()_--_1_--dtor$0.c)
 *     __lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()_::_1_::dtor$0 @ 0x18012E6B5 (__lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator()_--_1_--dtor$0.c)
 *     _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x18012EAB7 (_CAppViewManager--AcquireForegroundRightForApp_--_1_--dtor$1.c)
 *     _CAppViewManager::AddUnghostWindowCallbackTrigger_::_1_::dtor$0 @ 0x18012EBCF (_CAppViewManager--AddUnghostWindowCallbackTrigger_--_1_--dtor$0.c)
 *     _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x18012F0EA (_CAppViewManager--CollapseAllViewsForApp_--_1_--dtor$2.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$6 @ 0x18012F48E (_CAppViewManager--ConsolidateView_--_1_--dtor$6.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x180132CB6 (_CAppViewManager--SplitView_--_1_--dtor$4.c)
 *     _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x180133CFC (_CAppViewManager--StealForegroundActivateGlom_--_1_--dtor$1.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$3 @ 0x180136EE6 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$3.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x180137ACA (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_ObliterateOperation_::_1_::dtor$0 @ 0x180137EAE (_CAppViewManager--_ObliterateOperation_--_1_--dtor$0.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x18013807F (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$1 @ 0x180139948 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x180139A56 (_CAppViewManager--_TransferAllWindowsToNextGlom_--_1_--dtor$0.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$1 @ 0x18013A1A9 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x1801428ED (_Windows--Internal--Shell--Chaining--ChainLink_ObjectWithIamLock_--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x180142A06 (_CImmersiveApp--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::EnableSystemVisualAnimation_::_1_::dtor$0 @ 0x18014363C (_CImmersiveApp--EnableSystemVisualAnimation_--_1_--dtor$0.c)
 *     _CImmersiveApp::SetWindowingEnvironmentConfig_::_1_::dtor$0 @ 0x180149D27 (_CImmersiveApp--SetWindowingEnvironmentConfig_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x180155AE3 (_CApplicationViewManager--AddApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x180156C1E (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$0 @ 0x1801587D1 (_ApplicationViewManagerVisibilityDebouncer--ClearCachedAppView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
