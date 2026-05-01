/*
 * XREFs of ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18043511C
 * Callers:
 *     ?HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x18007F600 (-HandleEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapterPolicy@KeyboardHosti.c)
 *     _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C (_lambda_39b1066faff2db62f569cb34f066b88c_--operator().c)
 *     _lambda_3f773d4746d1dec58197fa131fb54ae4_::operator() @ 0x1800AA428 (_lambda_3f773d4746d1dec58197fa131fb54ae4_--operator().c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032DB50 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803309E0 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18033FFD0 (-HideAllViews@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@UCoreKeyboardPosition.c)
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x180341FE0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x180342060 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180342CDC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18034B560 (-HandleShellRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardModality@Core@.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1804350E8 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
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
  RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v5, 16LL, 0LL);
}
