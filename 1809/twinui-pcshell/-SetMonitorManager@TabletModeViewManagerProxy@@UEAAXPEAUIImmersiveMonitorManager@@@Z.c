/*
 * XREFs of ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1802E55C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeViewManagerProxy::SetMonitorManager(
        TabletModeViewManagerProxy *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 3, (__int64)a2);
}
