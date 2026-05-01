/*
 * XREFs of ??$get_activation_factory@UIGlobalizationPreferencesStatics@UserProfile@System@Windows@winrt@@@winrt@@YA?AUIGlobalizationPreferencesStatics@UserProfile@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C6764
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&_ @ 0x1800C6414 (winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--GlobalizationPreferences_w.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008AE83 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008B22A (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  int ActivationFactory_0; // eax
  int v5; // eax

  *a1 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::value,
                          (__int64)a1);
  if ( ActivationFactory_0 == -2147221008 )
  {
    v5 = CoIncrementMTAUsage_0();
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::value,
                            (__int64)a1);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  return a1;
}
