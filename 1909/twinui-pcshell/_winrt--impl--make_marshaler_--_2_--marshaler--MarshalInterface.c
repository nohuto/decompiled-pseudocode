/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::MarshalInterface @ 0x1800A23F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::MarshalInterface(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, a2, a3);
  else
    return 2147942414LL;
}
