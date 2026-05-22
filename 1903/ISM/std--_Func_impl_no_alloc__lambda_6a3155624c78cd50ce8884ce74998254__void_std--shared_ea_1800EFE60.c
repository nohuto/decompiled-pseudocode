/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6a3155624c78cd50ce8884ce74998254__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Delete_this @ 0x1800EFE60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_6a3155624c78cd50ce8884ce74998254__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const___::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
}
