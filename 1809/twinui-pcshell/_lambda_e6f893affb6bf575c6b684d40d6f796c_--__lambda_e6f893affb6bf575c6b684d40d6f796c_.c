/*
 * XREFs of _lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_ @ 0x1802E3EE4
 * Callers:
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z @ 0x1802E42A0 (--_G-$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1802E4A48 (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
}
