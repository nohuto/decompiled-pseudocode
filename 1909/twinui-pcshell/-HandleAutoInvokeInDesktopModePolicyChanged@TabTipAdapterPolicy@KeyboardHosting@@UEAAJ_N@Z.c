/*
 * XREFs of ?HandleAutoInvokeInDesktopModePolicyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_N@Z @ 0x180088140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleAutoInvokeInDesktopModePolicyChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 480) = a2;
  return 0LL;
}
