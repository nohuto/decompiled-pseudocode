/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Delete_this @ 0x18030DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Delete_this(
        char *a1,
        __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  char *v5; // rcx

  v2 = a2;
  v4 = a1 + 8;
  v5 = (char *)*((_QWORD *)a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  if ( v2 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
}
