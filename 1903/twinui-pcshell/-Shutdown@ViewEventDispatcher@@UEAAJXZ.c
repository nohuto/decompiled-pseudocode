/*
 * XREFs of ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x18026E660
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18028A6F0 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::Shutdown(ViewManagerBridge **this)
{
  ViewManagerBridge::Shutdown(this[55]);
  return 0LL;
}
