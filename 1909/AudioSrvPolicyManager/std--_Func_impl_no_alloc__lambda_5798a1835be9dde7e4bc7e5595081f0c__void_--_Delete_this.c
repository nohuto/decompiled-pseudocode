/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Delete_this @ 0x1800160E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  volatile signed __int32 *v4; // rbx

  v4 = (volatile signed __int32 *)a1[1];
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
