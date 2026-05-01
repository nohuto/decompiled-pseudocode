/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180090524
 * Callers:
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$0 @ 0x1800B11EA (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName_::_1_::dtor$0 @ 0x1800B1309 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetAppDisplayName_--_1_--dto.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::dtor$0 @ 0x1800B2729 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--IsAppActive_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StartUsageTracking_::_1_::dtor$0 @ 0x1800B392D (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StartUsageTracking_--_1_--dt.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking_::_1_::dtor$0 @ 0x1800B3A2D (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StopUsageTracking_--_1_--dto.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication_::_1_::dtor$0 @ 0x1800B3C04 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--TerminateApplication_--_1_--.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$2 @ 0x1800E7A30 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$2.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$6 @ 0x1800E7A54 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$6.c)
 *     _wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__&__::_1_::dtor$0 @ 0x180181FB8 (_wil--details--RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__-__--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x18041E7F1 (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$14 @ 0x18041F3BE (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$14.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
