/*
 * XREFs of ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x180234000
 * Callers:
 *     <none>
 * Callees:
 *     ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x18023B31C (-ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnViewLimitReached(ViewManagerBridge *this)
{
  ViewManagerInteropTelemetry::ViewManagerViewLimitReached();
  return 0LL;
}
