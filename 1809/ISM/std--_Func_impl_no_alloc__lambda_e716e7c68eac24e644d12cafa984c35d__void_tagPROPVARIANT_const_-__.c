/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_&___ptr64_::_Delete_this @ 0x1800E2120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_____ptr64_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
