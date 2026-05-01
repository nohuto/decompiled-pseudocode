/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a__&_ @ 0x1800BFCCC
 * Callers:
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA?AUevent_token@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1800C0FDC (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA-AUevent_token.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18008E785 (WINRT_InterlockedPushEntrySList.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18009BCC0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ @ 0x18009FDF8 (-get_factory_cache@impl@winrt@@YAAEAUfactory_cache@12@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A190C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C0104 (--$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@wi.c)
 *     ?NetworkStatusChanged@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBUNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@3@@Z @ 0x1800C0F6C (-NetworkStatusChanged@-$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINet.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::impl::factory_cache_entry_winrt::Windows::Networking::Connectivity::NetworkInformation_winrt::Windows::Networking::Connectivity::INetworkInformationStatics_::call__lambda_62163f859eafa11c99a7dc06c25ae87a____(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  bool v6; // si
  winrt::impl *v7; // rcx
  union _SLIST_HEADER *factory_cache; // rax
  winrt::impl **v9; // rcx
  winrt::impl *v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v13[2] = -2LL;
  v13[3] = &qword_1805C24E8;
  _InterlockedIncrement64(&qword_1805C24E8);
  if ( winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
      &winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1805C24E8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805C24E8);
    v13[0] = L"Windows.Networking.Connectivity.NetworkInformation";
    v13[1] = 50LL;
    winrt::param::hstring::hstring(string, (__int64)v13);
    winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(&v11, string);
    v5 = 0LL;
    v12 = 0LL;
    if ( v11 )
    {
      (**(void (__fastcall ***)(winrt::impl *, void *, __int64 *))v11)(
        v11,
        &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value,
        &v12);
      v5 = v12;
    }
    v6 = v5 != 0;
    if ( v5 )
      winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref(&v12);
    if ( v6 )
    {
      v13[4] = &qword_1805C24E8;
      _InterlockedIncrement64(&qword_1805C24E8);
      v7 = v11;
      if ( _InterlockedCompareExchange64(
             &winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory,
             (signed __int64)v11,
             0LL) )
      {
        v9 = &v11;
      }
      else
      {
        v11 = 0LL;
        factory_cache = winrt::impl::get_factory_cache(v7);
        WINRT_InterlockedPushEntrySList(factory_cache, &stru_1805C24F0);
        v9 = (winrt::impl **)&winrt::impl::factory_storage<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::factory;
      }
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        v9,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_1805C24E8);
    }
    else
    {
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        &v11,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v11);
  }
  return a2;
}
