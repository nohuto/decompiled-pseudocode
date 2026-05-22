/*
 * XREFs of std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Copy @ 0x1800E20D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_824b94053d2fecabe388e187688ff60e__void_long_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_180141C98;
  a2[1] = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
