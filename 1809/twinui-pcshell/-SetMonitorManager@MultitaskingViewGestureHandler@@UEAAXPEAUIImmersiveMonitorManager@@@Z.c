/*
 * XREFs of ?SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802E32C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetMonitorManager(
        MultitaskingViewGestureHandler *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 4, (__int64)a2);
}
