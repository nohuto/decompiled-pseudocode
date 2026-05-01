/*
 * XREFs of ?HandleTabletModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_N@Z @ 0x1800881C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleTabletModeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 475) = a2;
  return 0LL;
}
