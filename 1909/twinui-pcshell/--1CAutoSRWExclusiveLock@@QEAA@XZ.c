/*
 * XREFs of ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18012D990
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180067730 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$5 @ 0x1800E63E0 (_CApplicationManager--ApplyOperation_--_1_--dtor$5.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$4 @ 0x1800E7964 (_CApplicationFrameService--OnCommand_--_1_--dtor$4.c)
 *     _CAppViewManager::_QueueOperation_::_1_::dtor$0 @ 0x1800E7E1C (_CAppViewManager--_QueueOperation_--_1_--dtor$0.c)
 *     __lambda_6c7f1af74cf45db94091666f28e782cd_::operator()_::_1_::dtor$4 @ 0x1800E7E70 (__lambda_6c7f1af74cf45db94091666f28e782cd_--operator()_--_1_--dtor$4.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$12 @ 0x1800E7E82 (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$12.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x1800E7F00 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x1800E7F68 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$0.c)
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$1 @ 0x1800E87D8 (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$2 @ 0x1800E8D12 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$3 @ 0x18013CF59 (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$3 @ 0x18013D205 (_CApplicationManager--_HandleUniversalTitleBarVisibilityChangeRequest_--_1_--dtor$3.c)
 *     __lambda_3a58774b2403835eabbd2227e376bc7e_::operator()_::_1_::dtor$0 @ 0x18014D693 (__lambda_3a58774b2403835eabbd2227e376bc7e_--operator()_--_1_--dtor$0.c)
 *     __lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()_::_1_::dtor$0 @ 0x18014DBF5 (__lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator()_--_1_--dtor$0.c)
 *     _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x18014DFF7 (_CAppViewManager--AcquireForegroundRightForApp_--_1_--dtor$1.c)
 *     _CAppViewManager::AddUnghostWindowCallbackTrigger_::_1_::dtor$0 @ 0x18014E11F (_CAppViewManager--AddUnghostWindowCallbackTrigger_--_1_--dtor$0.c)
 *     _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x18014E63A (_CAppViewManager--CollapseAllViewsForApp_--_1_--dtor$2.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$6 @ 0x18014E9DE (_CAppViewManager--ConsolidateView_--_1_--dtor$6.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x180152236 (_CAppViewManager--SplitView_--_1_--dtor$4.c)
 *     _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x18015327C (_CAppViewManager--StealForegroundActivateGlom_--_1_--dtor$1.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$3 @ 0x180156466 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$3.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x18015704A (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_ObliterateOperation_::_1_::dtor$0 @ 0x18015742E (_CAppViewManager--_ObliterateOperation_--_1_--dtor$0.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x1801575FF (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$1 @ 0x180158EC8 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x180158FD6 (_CAppViewManager--_TransferAllWindowsToNextGlom_--_1_--dtor$0.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$1 @ 0x180159729 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x180161C8D (_Windows--Internal--Shell--Chaining--ChainLink_ObjectWithIamLock_--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x180161DA6 (_CImmersiveApp--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::EnableSystemVisualAnimation_::_1_::dtor$0 @ 0x1801629DC (_CImmersiveApp--EnableSystemVisualAnimation_--_1_--dtor$0.c)
 *     _CImmersiveApp::SetWindowingEnvironmentConfig_::_1_::dtor$0 @ 0x180168F97 (_CImmersiveApp--SetWindowingEnvironmentConfig_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x180174D23 (_CApplicationViewManager--AddApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x180175E7E (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$0 @ 0x180177A31 (_ApplicationViewManagerVisibilityDebouncer--ClearCachedAppView_--_1_--dtor$0.c)
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
