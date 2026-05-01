/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Delete_this @ 0x180273820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f167818d7963a6aecc3c3c61dfbcf93a__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx

  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
