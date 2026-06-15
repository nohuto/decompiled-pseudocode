/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo___::_Delete_this @ 0x1800E1920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo___::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
