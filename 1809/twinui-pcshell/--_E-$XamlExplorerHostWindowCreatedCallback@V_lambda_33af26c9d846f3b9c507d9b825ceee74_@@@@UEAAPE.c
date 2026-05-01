/*
 * XREFs of ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_33af26c9d846f3b9c507d9b825ceee74_@@@@UEAAPEAXI@Z @ 0x18027F430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::__lambda_33af26c9d846f3b9c507d9b825ceee74_ @ 0x18027E174 (_lambda_33af26c9d846f3b9c507d9b825ceee74_--__lambda_33af26c9d846f3b9c507d9b825ceee74_.c)
 */

_QWORD *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_33af26c9d846f3b9c507d9b825ceee74_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_33af26c9d846f3b9c507d9b825ceee74_::__lambda_33af26c9d846f3b9c507d9b825ceee74_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x70);
  return a1;
}
