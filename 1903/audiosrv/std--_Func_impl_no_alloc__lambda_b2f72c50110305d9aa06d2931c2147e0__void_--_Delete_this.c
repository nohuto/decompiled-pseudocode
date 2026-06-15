/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Delete_this @ 0x1800F1480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_ @ 0x1800ED5E4 (_lambda_b2f72c50110305d9aa06d2931c2147e0_--__lambda_b2f72c50110305d9aa06d2931c2147e0_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
