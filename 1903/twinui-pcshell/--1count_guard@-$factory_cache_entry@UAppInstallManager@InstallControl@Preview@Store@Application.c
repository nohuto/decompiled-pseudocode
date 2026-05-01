/*
 * XREFs of ??1count_guard@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA@XZ @ 0x180094740
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f42f65653c13c4ca9c04beaf1720b2f0__&__::_1_::dtor$0 @ 0x18009431D (_winrt--impl--factory_cache_entry_winrt--Windows--ApplicationModel--Store--Preview--InstallContr.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f42f65653c13c4ca9c04beaf1720b2f0__&__::_1_::dtor$4 @ 0x180094335 (_winrt--impl--factory_cache_entry_winrt--Windows--ApplicationModel--Store--Preview-_ea_180094335.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager,winrt::Windows::Foundation::IActivationFactory>::count_guard::~count_guard(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  _InterlockedDecrement64(*a1);
  return result;
}
