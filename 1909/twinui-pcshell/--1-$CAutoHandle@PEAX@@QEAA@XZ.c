/*
 * XREFs of ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC
 * Callers:
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x180054844 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     _CImmersiveApp::_SetApplicationForegroundPriority_::_1_::dtor$0 @ 0x1800E72C6 (_CImmersiveApp--_SetApplicationForegroundPriority_--_1_--dtor$0.c)
 *     _CAppViewManager::_ProcessNextOperation_::_1_::dtor$2 @ 0x1800E7DF8 (_CAppViewManager--_ProcessNextOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::_CreateFrameManager_::_1_::dtor$2 @ 0x18015E36E (_CApplicationFrameService--_CreateFrameManager_--_1_--dtor$2.c)
 *     ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x1801F3940 (-TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x18035F11C (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 *     ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z @ 0x18041BCF0 (-MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180426580 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180426700 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180426790 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1804277B4 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180427824 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x180440F80 (-v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CAutoHandle<void *>::~CAutoHandle<void *>(void **a1)
{
  char *v1; // rdx
  int result; // eax

  v1 = (char *)*a1;
  *a1 = 0LL;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
