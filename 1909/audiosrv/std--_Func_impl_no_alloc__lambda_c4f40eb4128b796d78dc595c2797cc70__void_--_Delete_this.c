/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Delete_this @ 0x1800F39F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
}
