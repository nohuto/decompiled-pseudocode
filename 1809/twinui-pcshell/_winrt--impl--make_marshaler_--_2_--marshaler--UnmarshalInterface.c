/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::UnmarshalInterface @ 0x180398220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::UnmarshalInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  *a4 = 0LL;
  return 2147942414LL;
}
