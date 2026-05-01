/*
 * XREFs of ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x18009BA90
 * Callers:
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x18009B8F0 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800A148C (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008AE83 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008B22A (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(
        _QWORD *a1,
        __int64 *a2)
{
  int ActivationFactory_0; // eax
  int v5; // eax

  *a1 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::IActivationFactory>::value,
                          (__int64)a1);
  if ( ActivationFactory_0 == -2147221008 )
  {
    v5 = CoIncrementMTAUsage_0();
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::IActivationFactory>::value,
                            (__int64)a1);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  return a1;
}
