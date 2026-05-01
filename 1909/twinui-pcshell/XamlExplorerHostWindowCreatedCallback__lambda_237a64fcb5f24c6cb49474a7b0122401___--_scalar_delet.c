/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::_scalar_deleting_destructor_ @ 0x1802FBED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x1802FB904 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--__lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 */

_QWORD *__fastcall XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
