/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180023D50
 * Callers:
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180027C6C (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180028240 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180095F5C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180096E60 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 *     ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180097418 (-SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A8EB0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180023CF0 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 1, (int)a4);
}
