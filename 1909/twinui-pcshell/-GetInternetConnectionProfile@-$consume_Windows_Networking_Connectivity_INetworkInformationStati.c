/*
 * XREFs of ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUConnectionProfile@Connectivity@Networking@Windows@3@XZ @ 0x1800C7628
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&_ @ 0x1800C65BC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800C65BC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 56LL))(*a1);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  return a2;
}
