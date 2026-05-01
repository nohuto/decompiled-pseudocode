/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::QueryInterface @ 0x1800C1950
 * Callers:
 *     <none>
 * Callees:
 *     ??$is_guid_of@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C02C0 (--$is_guid_of@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@@impl@win.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6A8 (--$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6E0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD714 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___::QueryInterface(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9

  if ( winrt::impl::is_guid_of<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>(a2)
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::Windows::Foundation::IUnknown>(v2)
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IAgileObject>() )
  {
    *v3 = v4;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IMarshal>(v6, v5, v3, v4) )
  {
    return winrt::impl::make_marshaler(v8, v7);
  }
  else
  {
    *v7 = 0LL;
    return 2147500034LL;
  }
}
