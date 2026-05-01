/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA?AUevent_token@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1800C0FDC
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 * Callees:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&_ @ 0x1800BFCCC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800BFCCC.c)
 */

__int64 __fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  return *(_QWORD *)winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a____(
                      a1,
                      (__int64)&v3,
                      &v2);
}
