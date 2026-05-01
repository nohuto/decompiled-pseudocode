/*
 * XREFs of ?HandleHardwareKeyboardUIEnabled@TabTipAdapterPolicy@KeyboardHosting@@UEAAJE@Z @ 0x18034B310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 469) = a2 != 0;
  return 0LL;
}
