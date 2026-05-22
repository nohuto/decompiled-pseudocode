/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Delete_this @ 0x1801218F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f167ce5618b3131ff3632db620bc3da6__void_unsigned_short_const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
