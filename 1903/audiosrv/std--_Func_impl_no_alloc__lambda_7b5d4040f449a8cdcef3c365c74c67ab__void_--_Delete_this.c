/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_::_Delete_this @ 0x180067A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
