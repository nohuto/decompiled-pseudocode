/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___::QueryInterface @ 0x180095490
 * Callers:
 *     <none>
 * Callees:
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE088 (--$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0C0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0F4 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_89fb5ab193d74e8b0300aa0759d904c8___::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r8
  __int64 v5; // r10

  v3 = a1;
  if ( *a2 == -1837955993 && a2[1] == 1527074846 && a2[2] == 1871849096 && a2[3] == 56332934
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
