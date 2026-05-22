/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_&___ptr64_::_Copy @ 0x1800E21D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_____ptr64_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_180141C08;
  a2[1] = a1[1];
  a2[2] = a1[2];
  v3 = a1[3];
  a2[3] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
