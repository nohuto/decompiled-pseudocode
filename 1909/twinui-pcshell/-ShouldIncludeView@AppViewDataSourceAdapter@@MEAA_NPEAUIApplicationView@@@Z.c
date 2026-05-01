/*
 * XREFs of ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180326B80
 * Callers:
 *     ?InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18032454C (-InitializeItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180080794 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsViewTabbed@AppViewDataSourceAdapterBase@@IEAA_NPEAUIApplicationView@@@Z @ 0x180324C0C (-IsViewTabbed@AppViewDataSourceAdapterBase@@IEAA_NPEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180326764 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHidi.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z @ 0x180326BE0 (-ShouldIncludeView@AppViewDataSourceAdapterBase@@MEAA_NPEAUIApplicationView@@@Z.c)
 */

bool __fastcall AppViewDataSourceAdapter::ShouldIncludeView(
        AppViewDataSourceAdapter *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  struct IApplicationView *v5; // rdx

  wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    a3);
  return !HolographicViewHelpers::IsApplicationViewHolographic(a2, v5)
      && (*((_DWORD *)this + 82) != 2 || !AppViewDataSourceAdapterBase::IsViewTabbed(this, a2))
      && AppViewDataSourceAdapterBase::ShouldIncludeView(this, a2);
}
