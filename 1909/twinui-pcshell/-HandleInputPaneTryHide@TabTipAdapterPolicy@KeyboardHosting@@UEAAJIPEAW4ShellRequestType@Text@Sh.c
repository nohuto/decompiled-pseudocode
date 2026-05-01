/*
 * XREFs of ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18034B330
 * Callers:
 *     ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x180341FE0 (-OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x18034B9D8 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  *(_DWORD *)a3 = 0;
  if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShown(this, 0) && *((_DWORD *)this + 125) != 512 )
    *(_DWORD *)a3 = 2;
  return 0LL;
}
