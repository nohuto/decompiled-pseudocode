/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828__&_ @ 0x1800C65BC
 * Callers:
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800D29AC (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18008E785 (WINRT_InterlockedPushEntrySList.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18009BCC0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009FDF8 (-get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C0104 (--$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@wi.c)
 *     ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUConnectionProfile@Connectivity@Networking@Windows@3@XZ @ 0x1800C7628 (-GetInternetConnectionProfile@-$consume_Windows_Networking_Connectivity_INetworkInformationStati.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_1e61a9d39de6ceac5f1441c0746d6828____(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  bool v4; // di
  winrt::impl *v5; // rcx
  union _SLIST_HEADER *factory_cache; // rax
  winrt::impl **v7; // rcx
  winrt::impl *v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v11[2] = -2LL;
  v10 = a2;
  v11[3] = &qword_1805C24E8;
  _InterlockedIncrement64(&qword_1805C24E8);
  if ( winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
      &winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory,
      a2);
    _InterlockedDecrement64(&qword_1805C24E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805C24E8);
    v11[0] = L"Windows.Networking.Connectivity.NetworkInformation";
    v11[1] = 50LL;
    winrt::param::hstring::hstring(string, (__int64)v11);
    winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(
      &v9,
      (__int64 *)string);
    v3 = 0LL;
    v10 = 0LL;
    if ( v9 )
    {
      (**(void (__fastcall ***)(winrt::impl *, void *, __int64 *))v9)(
        v9,
        &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value,
        &v10);
      v3 = v10;
    }
    v4 = v3 != 0;
    if ( v3 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(&v10);
    if ( v4 )
    {
      v11[4] = &qword_1805C24E8;
      _InterlockedIncrement64(&qword_1805C24E8);
      v5 = v9;
      if ( _InterlockedCompareExchange64(
             &winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory,
             (signed __int64)v9,
             0LL) )
      {
        v7 = &v9;
      }
      else
      {
        v9 = 0LL;
        factory_cache = winrt::impl::get_factory_cache(v5);
        WINRT_InterlockedPushEntrySList(factory_cache, &stru_1805C24F0);
        v7 = (winrt::impl **)&winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory;
      }
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
        v7,
        a2);
      _InterlockedDecrement64(&qword_1805C24E8);
    }
    else
    {
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
        &v9,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v9);
  }
  return a2;
}
