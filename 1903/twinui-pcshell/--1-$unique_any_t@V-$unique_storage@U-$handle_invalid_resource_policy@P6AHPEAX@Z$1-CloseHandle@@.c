/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001D85C
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001D1A0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180020720 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x180098A54 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::Run @ 0x1800ACF50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___--Run.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800AF9C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x1800AFB82 (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1800B0010 (-TryGetProcessCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@I@Z.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x1800B0196 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x1800C29D4 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$1 @ 0x1800C2A3E (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x1800C3910 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x18011AEBA (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x180198967 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x1801DB189 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E105C (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x1801E1372 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x18022D6A4 (_TabViewManager--CreateDwmSharedThumbnailVisual_--_1_--dtor$2.c)
 *     _TitleBarController::ConnectTitleBarToSharedVisual_::_1_::dtor$0 @ 0x1802483E2 (_TitleBarController--ConnectTitleBarToSharedVisual_--_1_--dtor$0.c)
 *     _TitleBarController::DisconnectTitleBarFromSharedVisual_::_1_::dtor$0 @ 0x180248532 (_TitleBarController--DisconnectTitleBarFromSharedVisual_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x180287644 (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$2 @ 0x18029329F (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$2.c)
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$2 @ 0x1802A3CBE (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x18030FC30 (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180406D20 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18040839C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18040847C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x180408510 (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
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
