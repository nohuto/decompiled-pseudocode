/*
 * XREFs of ?QueryInterface@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6A8 (--$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6E0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD714 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r10

  v3 = a2;
  v4 = a1;
  if ( *a2 == 55 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::Windows::Foundation::IUnknown>(a2)
    || (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IAgileObject>() )
  {
    *a3 = v4;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)v4 + 8LL))(v4, a2, a3, v3);
    return 0LL;
  }
  else if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IMarshal>(v5, a2, a3, v3) )
  {
    return winrt::impl::make_marshaler(v7, v6);
  }
  else
  {
    *v6 = 0LL;
    return 2147500034LL;
  }
}
