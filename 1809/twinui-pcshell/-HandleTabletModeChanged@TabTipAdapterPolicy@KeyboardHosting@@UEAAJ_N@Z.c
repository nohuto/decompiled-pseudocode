/*
 * XREFs of ?HandleTabletModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_N@Z @ 0x180082A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleTabletModeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 471) = a2;
  return 0LL;
}
