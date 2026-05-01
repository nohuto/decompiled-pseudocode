/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke @ 0x18029B520
 * Callers:
 *     <none>
 * Callees:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802994D4 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 *     ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x18029A3FC (-AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ.c)
 *     ?CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ @ 0x18029A644 (-CortanaKeepsCrashing@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__IInspectable_____ptr64_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_IInspectable_____ptr64_::Invoke(
        XamlLauncher *a1)
{
  __int64 v2; // rdx

  if ( *(_DWORD *)(*((_QWORD *)a1 + 2) + 240LL) < *(_DWORD *)(*((_QWORD *)a1 + 2) + 244LL)
    && XamlLauncher::AllowAutoAppRestartOnCrash(a1) )
  {
    ++*(_DWORD *)(*((_QWORD *)a1 + 2) + 240LL);
    RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 112LL),
      v2);
  }
  else
  {
    StartWindowTelemetry::CortanaKeepsCrashing();
  }
  return 0LL;
}
