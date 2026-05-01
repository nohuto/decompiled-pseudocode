/*
 * XREFs of _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x18008F348
 * Callers:
 *     _lambda_3eaa8416a18b3d4d2003ae87be4de258_::operator() @ 0x18008F4CC (_lambda_3eaa8416a18b3d4d2003ae87be4de258_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f___::_scalar_deleting_destructor_ @ 0x18008F770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0778bf33688fe19efef5fae2e4780c3f___--_scala.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x180155B66 (_CAppViewManager--Switch_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
