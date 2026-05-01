/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface @ 0x180095520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801DE0C0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r8
  __int64 v4; // r9

  if ( !(unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IMarshal>(a2, a2, a3, a1, -2LL) )
    return (***(__int64 (__fastcall ****)(_QWORD))(v4 + 8))(*(_QWORD *)(v4 + 8));
  *v3 = v4;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
  return 0LL;
}
