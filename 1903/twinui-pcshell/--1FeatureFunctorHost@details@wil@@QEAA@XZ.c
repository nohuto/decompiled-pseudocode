/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x18008DB48
 * Callers:
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$0 @ 0x1800A28BA (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName_::_1_::dtor$0 @ 0x1800A29D9 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetAppDisplayName_--_1_--dto.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::dtor$0 @ 0x1800A3DE9 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--IsAppActive_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StartUsageTracking_::_1_::dtor$0 @ 0x1800A4FFD (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StartUsageTracking_--_1_--dt.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking_::_1_::dtor$0 @ 0x1800A50FD (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StopUsageTracking_--_1_--dto.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication_::_1_::dtor$0 @ 0x1800A52D4 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--TerminateApplication_--_1_--.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$2 @ 0x1800C5868 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$2.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$6 @ 0x1800C588C (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$6.c)
 *     _wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__&__::_1_::dtor$0 @ 0x180162C58 (_wil--details--RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__-__--_1_--dtor$0.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x1803FF1B5 (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$14 @ 0x1803FFD8E (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$14.c)
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
