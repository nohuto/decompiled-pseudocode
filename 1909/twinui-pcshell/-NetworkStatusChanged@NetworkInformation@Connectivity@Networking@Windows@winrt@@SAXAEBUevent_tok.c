/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SAXAEBUevent_token@5@@Z @ 0x1800C1004
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 * Callees:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7__&_ @ 0x1800BFB6C (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_wi.c)
 */

void __fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(
        const struct winrt::event_token *a1)
{
  const struct winrt::event_token *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7____(
    (__int64)a1,
    &v1);
}
