/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface @ 0x180397A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::QueryInterface(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  if ( *a2 != 3 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
    return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8));
  *a3 = a1;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  return 0LL;
}
