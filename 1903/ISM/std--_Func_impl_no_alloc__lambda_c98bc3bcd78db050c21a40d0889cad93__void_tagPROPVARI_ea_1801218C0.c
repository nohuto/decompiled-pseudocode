/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const_&_::_Delete_this @ 0x1801218C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_c98bc3bcd78db050c21a40d0889cad93__void_tagPROPVARIANT_const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 3);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
