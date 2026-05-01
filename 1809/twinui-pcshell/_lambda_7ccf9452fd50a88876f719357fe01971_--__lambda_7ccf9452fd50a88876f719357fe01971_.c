/*
 * XREFs of _lambda_7ccf9452fd50a88876f719357fe01971_::__lambda_7ccf9452fd50a88876f719357fe01971_ @ 0x1802639E0
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971____::_1_::dtor$0 @ 0x180263726 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe0197.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_7ccf9452fd50a88876f719357fe01971_::__lambda_7ccf9452fd50a88876f719357fe01971_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
}
