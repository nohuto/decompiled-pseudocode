/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Delete_this @ 0x1800BEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e9caf7be01a97f1d4a6ebcd24956563c__void_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
