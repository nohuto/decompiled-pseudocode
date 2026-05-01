/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180040580
 * Callers:
 *     __dynamic_initializer_for__c_retailDemoHotspot___::_1_::dtor$0 @ 0x180001285 (__dynamic_initializer_for__c_retailDemoHotspot___--_1_--dtor$0.c)
 *     _std::_Floating_to_wstring_double__::_1_::dtor$0 @ 0x180093E6C (_std--_Floating_to_wstring_double__--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP_::_1_::dtor$0 @ 0x18009439A (_KeyboardHosting--TabTipAdapter--SetOverrideMonitorSizeForSIP_--_1_--dtor$0.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$2 @ 0x180096BC7 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$2.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$1 @ 0x1800AD8D0 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange_::_1_::dtor$0 @ 0x1800AD9D0 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--TryUpd_ea_1800AD9D0.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle_::_1_::dtor$0 @ 0x1800AE2E2 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--GetAppViewTitle_--_.c)
 *     _KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged_::_1_::dtor$1 @ 0x1800AE4C1 (_KeyboardHosting--TabTipAdapter--OnEditControlFocusChanged_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::EnsureActivationArgs_::_1_::dtor$0 @ 0x18016D49A (_CJumpViewExperienceManager--EnsureActivationArgs_--_1_--dtor$0.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$1 @ 0x180184F85 (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$1.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$2 @ 0x180184F91 (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$2.c)
 *     _RetailDemoExperienceManager::LaunchApplication_::_1_::dtor$3 @ 0x180184F9D (_RetailDemoExperienceManager--LaunchApplication_--_1_--dtor$3.c)
 *     _RetailDemoExperienceManager::_ParseExperienceArguments_::_1_::dtor$1 @ 0x18018659D (_RetailDemoExperienceManager--_ParseExperienceArguments_--_1_--dtor$1.c)
 *     _RetailDemoExperienceManager::_SplitString_::_1_::dtor$1 @ 0x180186C70 (_RetailDemoExperienceManager--_SplitString_--_1_--dtor$1.c)
 *     __lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator()_::_1_::dtor$3 @ 0x1801FE0F4 (__lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator()_--_1_--dtor$3.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B561C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::CreateModalExperienceAsync_::_1_::dtor$0 @ 0x1802B56C2 (_TouchKeyboardExperienceManager--CreateModalExperienceAsync_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x1802B8663 (_TouchKeyboardExperienceManager--OnInputAppChangeApproved_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::PerformDelayedInitialization_::_1_::dtor$38 @ 0x1802B98F1 (_TouchKeyboardExperienceManager--PerformDelayedInitialization_--_1_--dtor$38.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$1 @ 0x1802C22F1 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$1 @ 0x1802C3E42 (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved_::_1_::dtor$2 @ 0x1802C3E4E (_KeyboardHosting--TabTipAdapter--OnInputAppChangeApproved_--_1_--dtor$2.c)
 *     _ActivationHints::AddHint_::_1_::dtor$1 @ 0x18032B769 (_ActivationHints--AddHint_--_1_--dtor$1.c)
 *     _VirtualPinnedAppsHandler::LoadPinnedAppsFromRegistry_::_1_::dtor$1 @ 0x180391BF3 (_VirtualPinnedAppsHandler--LoadPinnedAppsFromRegistry_--_1_--dtor$1.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$2 @ 0x180392008 (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::wstring::~wstring(void *a1)
{
  std::wstring::_Tidy_deallocate(a1);
}
