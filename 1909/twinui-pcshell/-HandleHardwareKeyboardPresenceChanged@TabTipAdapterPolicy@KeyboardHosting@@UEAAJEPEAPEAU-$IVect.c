/*
 * XREFs of ?HandleHardwareKeyboardPresenceChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034B2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleHardwareKeyboardPresenceChanged(
        __int64 a1,
        char a2,
        __int64 a3,
        _DWORD *a4)
{
  *a4 = 0;
  *(_BYTE *)(a1 + 490) = a2 != 0;
  return 0LL;
}
