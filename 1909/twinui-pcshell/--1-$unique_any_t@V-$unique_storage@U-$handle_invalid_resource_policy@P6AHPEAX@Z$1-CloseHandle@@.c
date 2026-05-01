/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180027DEC
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180027390 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1800A5B44 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::Run @ 0x1800BB850 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___--Run.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800BE2C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x1800BE482 (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1800BE910 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x1800BEA96 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x1800E6870 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x1800E7D46 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$1 @ 0x1800E7DB0 (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$1.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x18013A35A (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1801B7897 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x1801FA7D9 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802002AC (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x1802005AD (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x18024CC54 (_TabViewManager--CreateDwmSharedThumbnailVisual_--_1_--dtor$2.c)
 *     _TitleBarController::ConnectTitleBarToSharedVisual_::_1_::dtor$0 @ 0x1802679E2 (_TitleBarController--ConnectTitleBarToSharedVisual_--_1_--dtor$0.c)
 *     _TitleBarController::DisconnectTitleBarFromSharedVisual_::_1_::dtor$0 @ 0x180267B32 (_TitleBarController--DisconnectTitleBarFromSharedVisual_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x1802A6AA4 (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$2 @ 0x1802B277F (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$2.c)
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$2 @ 0x1802C31DE (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x18032F0F0 (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180426350 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1804279CC (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180427AAC (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x180427B40 (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
