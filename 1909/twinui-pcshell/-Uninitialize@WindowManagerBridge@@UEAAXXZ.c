/*
 * XREFs of ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x1802C1170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowManagerBridge::Uninitialize(wil::details **this, void *a2)
{
  wil::details::SetEvent(this[34], a2);
}
