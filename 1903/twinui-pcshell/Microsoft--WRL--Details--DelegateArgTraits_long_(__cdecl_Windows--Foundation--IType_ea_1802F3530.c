/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1802F3530
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180070928 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802F12B4 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x1802F226C (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?StartKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x1802F5200 (-StartKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_4e5ace4978557f95a503fdd97e32a105___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke(
        __int64 a1)
{
  XamlLauncher *v2; // rcx
  __int64 v3; // rdx

  XamlLauncher::PublishLauncherVisibilityState(*(XamlLauncher **)(a1 + 16), 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 260LL) < *(_DWORD *)(*(_QWORD *)(a1 + 16) + 268LL)
    && XamlLauncher::AllowAutoAppRestartOnCrash(v2) )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 260LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL),
      v3);
  }
  else
  {
    StartWindowTelemetry::StartKeepsCrashing();
  }
  return 0LL;
}
