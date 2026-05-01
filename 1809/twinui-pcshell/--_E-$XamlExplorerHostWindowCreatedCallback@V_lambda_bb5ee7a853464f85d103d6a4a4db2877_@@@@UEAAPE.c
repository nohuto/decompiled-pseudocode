/*
 * XREFs of ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_bb5ee7a853464f85d103d6a4a4db2877_@@@@UEAAPEAXI@Z @ 0x18026CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_ @ 0x18026AC84 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--__lambda_bb5ee7a853464f85d103d6a4a4db2877_.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_bb5ee7a853464f85d103d6a4a4db2877_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_bb5ee7a853464f85d103d6a4a4db2877_::__lambda_bb5ee7a853464f85d103d6a4a4db2877_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
