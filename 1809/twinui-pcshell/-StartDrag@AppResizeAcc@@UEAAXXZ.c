/*
 * XREFs of ?StartDrag@AppResizeAcc@@UEAAXXZ @ 0x1803671B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeAcc::StartDrag(IRawElementProviderSimple *this)
{
  IRawElementProviderSimple *v1; // rbx

  v1 = this - 2;
  UiaRaiseAutomationEvent(this - 2, 20026);
  AppResizeAcc::ProcessPendingNotifications(v1, 1);
}
