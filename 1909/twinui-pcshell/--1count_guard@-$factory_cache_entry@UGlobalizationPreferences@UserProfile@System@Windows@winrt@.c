/*
 * XREFs of ??1count_guard@?$factory_cache_entry@UGlobalizationPreferences@UserProfile@System@Windows@winrt@@UIGlobalizationPreferencesStatics@2345@@impl@winrt@@QEAA@XZ @ 0x18009BDFC
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Windows::UI::ViewManagement::UISettings_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f92aa4e0a61c3892856266e5a8e834f7__&__::_1_::dtor$0 @ 0x18009BA63 (_winrt--impl--factory_cache_entry_winrt--Windows--UI--ViewManagement--UISettings_winrt--Windows-.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::UI::ViewManagement::UISettings_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f92aa4e0a61c3892856266e5a8e834f7__&__::_1_::dtor$4 @ 0x18009BA7B (_winrt--impl--factory_cache_entry_winrt--Windows--UI--ViewManagement--UISettings_wi_ea_18009BA7B.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f42f65653c13c4ca9c04beaf1720b2f0__&__::_1_::dtor$0 @ 0x1800A15FF (_winrt--impl--factory_cache_entry_winrt--Windows--ApplicationModel--Store--Preview--InstallContr.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager_winrt::Windows::Foundation::IActivationFactory_::call__lambda_f42f65653c13c4ca9c04beaf1720b2f0__&__::_1_::dtor$4 @ 0x1800A1617 (_winrt--impl--factory_cache_entry_winrt--Windows--ApplicationModel--Store--Preview-_ea_1800A1617.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&__::_1_::dtor$0 @ 0x1800BFE4D (_winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_w.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&__::_1_::dtor$3 @ 0x1800BFE65 (_winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--Network_ea_1800BFE65.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&__::_1_::dtor$0 @ 0x1800C658F (_winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--GlobalizationPreferences_.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&__::_1_::dtor$4 @ 0x1800C65A7 (_winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--Globalizatio_ea_1800C65A7.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&__::_1_::dtor$0 @ 0x1800C6737 (_winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--Network_ea_1800C6737.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&__::_1_::dtor$4 @ 0x1800C674F (_winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--Network_ea_1800C674F.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::GlobalizationPreferences,winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics>::count_guard::~count_guard(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  _InterlockedDecrement64(*a1);
  return result;
}
