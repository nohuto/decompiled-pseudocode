/*
 * XREFs of ?NetworkStatusChanged@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x1800C0FB0
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7__&_ @ 0x1800BFB6C (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_wi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        _QWORD *a1,
        _QWORD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 104LL))(*a1, *a2);
}
