/*
 * XREFs of ?DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ @ 0x18038F150
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1803905D0 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

void __fastcall VirtualDesktopGestureHandler::DismissContextMenuIfPresent(VirtualDesktopGestureHandler *this)
{
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) )
  {
    if ( (pgui.flags & 4) != 0 )
      SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  }
}
