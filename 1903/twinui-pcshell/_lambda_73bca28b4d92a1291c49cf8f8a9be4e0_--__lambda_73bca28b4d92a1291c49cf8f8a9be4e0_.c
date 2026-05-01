/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x18008C8F4
 * Callers:
 *     _lambda_136faaf7160992a8f53bd109551410c5_::operator() @ 0x18008C964 (_lambda_136faaf7160992a8f53bd109551410c5_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___::_scalar_deleting_destructor_ @ 0x18008CDB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_799c8fcca6c2609bbf12201b8ac3c3e3___--_scala.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x1801365E6 (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
