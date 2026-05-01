/*
 * XREFs of _lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_ @ 0x180364014
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::_scalar_deleting_destructor_ @ 0x1803643D0 (CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___--_scalar_deleting_dest.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180364B78 (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
}
