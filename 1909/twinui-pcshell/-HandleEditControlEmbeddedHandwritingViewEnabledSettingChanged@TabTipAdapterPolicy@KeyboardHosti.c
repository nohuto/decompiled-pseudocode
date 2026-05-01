/*
 * XREFs of ?HandleEditControlEmbeddedHandwritingViewEnabledSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18034AE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlEmbeddedHandwritingViewEnabledSettingChanged(
        __int64 a1,
        char a2,
        _QWORD *a3,
        _DWORD *a4)
{
  *a4 = 0;
  *a3 = 0LL;
  *(_BYTE *)(a1 + 486) = a2 != 0;
  return 0LL;
}
