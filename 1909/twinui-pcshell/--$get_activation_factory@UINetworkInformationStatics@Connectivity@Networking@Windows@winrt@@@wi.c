/*
 * XREFs of ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C0104
 * Callers:
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_615adbe98d4101f038671f2644b55ba7__&_ @ 0x1800BFB6C (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkInformation_wi.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&_ @ 0x1800BFCCC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800BFCCC.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&_ @ 0x1800C65BC (winrt--impl--factory_cache_entry_winrt--Windows--Networking--Connectivity--NetworkI_ea_1800C65BC.c)
 * Callees:
 *     RoGetActivationFactory_0 @ 0x18008AE83 (RoGetActivationFactory_0.c)
 *     CoIncrementMTAUsage_0 @ 0x18008B22A (CoIncrementMTAUsage_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(
        _QWORD *a1,
        __int64 *a2)
{
  int ActivationFactory_0; // eax
  int v5; // eax

  *a1 = 0LL;
  ActivationFactory_0 = RoGetActivationFactory_0(
                          *a2,
                          (__int64)&winrt::impl::guid_storage<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::value,
                          (__int64)a1);
  if ( ActivationFactory_0 == -2147221008 )
  {
    v5 = CoIncrementMTAUsage_0();
    if ( v5 < 0 )
      winrt::throw_hresult((unsigned int)v5);
    ActivationFactory_0 = RoGetActivationFactory_0(
                            *a2,
                            (__int64)&winrt::impl::guid_storage<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::value,
                            (__int64)a1);
  }
  if ( ActivationFactory_0 < 0 )
    winrt::throw_hresult((unsigned int)ActivationFactory_0);
  return a1;
}
