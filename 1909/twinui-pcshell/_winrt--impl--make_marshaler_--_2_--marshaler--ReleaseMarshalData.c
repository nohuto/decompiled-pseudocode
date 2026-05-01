/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::ReleaseMarshalData @ 0x1800A3DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::ReleaseMarshalData(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
  else
    return 2147942414LL;
}
