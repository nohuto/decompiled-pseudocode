/*
 * XREFs of ?OnApplyWindowingEnvironmentSettingsRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@3456@@Z @ 0x1802BFC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800246EC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dfc29fdd65bf1fd8b56deaf34af33c04___ @ 0x1802BD934 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dfc29fdd65bf1fd8b56deaf34af33c04.c)
 */

__int64 __fastcall WindowManagerBridge::OnApplyWindowingEnvironmentSettingsRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  *(_QWORD *)&v7 = this;
  *((_QWORD *)&v7 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dfc29fdd65bf1fd8b56deaf34af33c04___(
           v5,
           CurrentThreadId,
           &v7);
}
