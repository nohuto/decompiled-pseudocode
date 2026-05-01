/*
 * XREFs of _lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_ @ 0x18008AAC8
 * Callers:
 *     ??_G?$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_a6a1a1620cd1726c3c4e0031d0123816_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008AD10 (--_G-$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_a6a1a1620cd1726c3c4e0031d0123816_@@$0-0J@-$.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18011249C (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$11 @ 0x180112AEE (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$11.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
