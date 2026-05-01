/*
 * XREFs of ?EndDrag@JointResizeAcc@@UEAAX_N@Z @ 0x1803D1AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::EndDrag(IRawElementProviderSimple *this, unsigned __int8 a2)
{
  UiaRaiseAutomationEvent(this - 2, (a2 ^ 1) + 20027);
}
