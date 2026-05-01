/*
 * XREFs of _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_ @ 0x18012D974
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::_scalar_deleting_destructor_ @ 0x18012E7B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_18012E7B0.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180139BA0 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$11 @ 0x18013A221 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$11.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::__lambda_9c39f2de9248b3982b3805f9f5b1e7b6_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
