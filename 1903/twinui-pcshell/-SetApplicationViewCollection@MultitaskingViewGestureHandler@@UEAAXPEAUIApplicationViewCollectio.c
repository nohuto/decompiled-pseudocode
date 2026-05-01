/*
 * XREFs of ?SetApplicationViewCollection@MultitaskingViewGestureHandler@@UEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801244C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetApplicationViewCollection(
        MultitaskingViewGestureHandler *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
}
