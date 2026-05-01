/*
 * XREFs of ?HandleHardwareKeyboardTextIntelligenceEnabled@TabTipAdapterPolicy@KeyboardHosting@@UEAAJE@Z @ 0x18032BA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleHardwareKeyboardTextIntelligenceEnabled(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 491) = a2 != 0;
  return 0LL;
}
