/*
 * XREFs of ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180415A7C
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18007D0C0 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18030E690 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311510 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180320770 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x1803227A0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x180322820 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18032BCE0 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180415A48 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 */

void __fastcall IhmNotification::SendKeyboardSetVisible(IhmNotification *this, char a2)
{
  unsigned __int64 v3; // rax
  QwordHelpers *v4; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = QwordHelpers::BoolToQword(this);
  LOBYTE(v4) = a2;
  v5[0] = v3;
  v5[1] = QwordHelpers::BoolToQword(v4);
  RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v5, 16LL);
}
