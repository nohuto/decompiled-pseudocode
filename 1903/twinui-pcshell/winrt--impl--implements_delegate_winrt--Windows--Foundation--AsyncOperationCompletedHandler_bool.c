/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::QueryInterface @ 0x180095400
 * Callers:
 *     <none>
 * Callees:
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE088 (--$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0C0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0F4 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_9783efd0cf9a4011a5fefd366cc6ea27___::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r8
  __int64 v5; // r10

  v3 = a1;
  if ( *a2 == -1043082846 && a2[1] == 1516219927 && a2[2] == -859987275 && a2[3] == -1702345592
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2)
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IAgileObject>() )
  {
    *a3 = v3;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 24), 1u);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IMarshal>() )
  {
    return winrt::impl::make_marshaler(v5, v4);
  }
  else
  {
    *v4 = 0LL;
    return 2147500034LL;
  }
}
