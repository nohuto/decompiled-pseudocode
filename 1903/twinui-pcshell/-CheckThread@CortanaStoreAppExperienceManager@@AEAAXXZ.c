/*
 * XREFs of ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0
 * Callers:
 *     ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x1801BD1B0 (-HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z.c)
 *     ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BD32C (-HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801BD550 (-InputHostHiding@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801BD5B0 (-InputHostShowing@CortanaStoreAppExperienceManager@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_.c)
 *     CAsyncCallbackWithLambda__lambda_4f97da8bbe7201cae9d39f71cb667fd0___::Invoke @ 0x1801BD6D0 (CAsyncCallbackWithLambda__lambda_4f97da8bbe7201cae9d39f71cb667fd0___--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_8082b187ca1314656e64950edcc944b0___::Invoke @ 0x1801BD730 (CAsyncCallbackWithLambda__lambda_8082b187ca1314656e64950edcc944b0___--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e___::Invoke @ 0x1801BD770 (CAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e___--Invoke.c)
 *     ?OnClientWindowReadyForPresentationChanged@CortanaStoreAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801BDA60 (-OnClientWindowReadyForPresentationChanged@CortanaStoreAppExperienceManager@@AEAAJPEAUIClientWin.c)
 *     ?OnPackageInstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationModel@Windows@@PEAUIPackageInstallingEventArgs@34@@Z @ 0x1801BDB20 (-OnPackageInstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationModel.c)
 *     ?OnPackageUninstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationModel@Windows@@PEAUIPackageUninstallingEventArgs@34@@Z @ 0x1801BDB40 (-OnPackageUninstalling@CortanaStoreAppExperienceManager@@AEAAJPEAUIPackageCatalog@ApplicationMod.c)
 *     ?OnViewEvent@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1801BE460 (-OnViewEvent@CortanaStoreAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z @ 0x1801BFE80 (-WorkAreaChanged@CortanaStoreAppExperienceManager@@EEAAJKPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CortanaStoreAppExperienceManager::CheckThread(CortanaStoreAppExperienceManager *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 88) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      193LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      v1);
    __debugbreak();
  }
}
