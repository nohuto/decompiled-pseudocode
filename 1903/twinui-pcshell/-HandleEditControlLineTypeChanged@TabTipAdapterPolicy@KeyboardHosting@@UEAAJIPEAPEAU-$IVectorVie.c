/*
 * XREFs of ?HandleEditControlLineTypeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x180085620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlLineTypeChanged(
        __int64 a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 192) = a2;
  result = 0LL;
  *a4 = 0;
  return result;
}
