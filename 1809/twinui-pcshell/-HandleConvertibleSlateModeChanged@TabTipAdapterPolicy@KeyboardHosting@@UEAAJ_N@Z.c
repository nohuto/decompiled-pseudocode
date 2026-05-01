/*
 * XREFs of ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_N@Z @ 0x1800829A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleConvertibleSlateModeChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2)
{
  *((_BYTE *)this + 472) = a2;
  return 0LL;
}
