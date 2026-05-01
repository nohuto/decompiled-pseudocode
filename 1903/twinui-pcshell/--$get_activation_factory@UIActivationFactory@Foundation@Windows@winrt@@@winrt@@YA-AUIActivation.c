/*
 * XREFs of ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800943C0
 * Callers:
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x180088306 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x1800886AD (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
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
