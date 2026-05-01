/*
 * XREFs of ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009FDF8
 * Callers:
 *     ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x18009B8F0 (--$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@-$factory_cache_entry@UUISettings@ViewMa.c)
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800A148C (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7__&_ @ 0x1800BFB6C (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_wi.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&_ @ 0x1800BFCCC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800BFCCC.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::System::UserProfile::GlobalizationPreferences_winrt::Windows::System::UserProfile::IGlobalizationPreferencesStatics_::call__lambda_09e73978074c072f8532c19292e7e852__&_ @ 0x1800C6414 (winrt--impl--factory_cache_entry_winrt--Windows--System--UserProfile--GlobalizationPreferences_w.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&_ @ 0x1800C65BC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800C65BC.c)
 * Callees:
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     InitializeSListHead_0 @ 0x18008AB92 (InitializeSListHead_0.c)
 */

union _SLIST_HEADER *__fastcall winrt::impl::get_factory_cache(winrt::impl *this)
{
  if ( __TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                            + (unsigned int)tls_index)
                                                                                          + 4LL) )
  {
    Init_thread_header(&__TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA);
    if ( __TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA == -1 )
    {
      InitializeSListHead_0(&`winrt::impl::get_factory_cache'::`2'::cache);
      Init_thread_footer(&__TSS0__1__get_factory_cache_impl_winrt__YAAEAUfactory_cache_23_XZ_4HA);
    }
  }
  return &`winrt::impl::get_factory_cache'::`2'::cache;
}
