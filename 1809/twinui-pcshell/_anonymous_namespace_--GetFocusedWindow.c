/*
 * XREFs of _anonymous_namespace_::GetFocusedWindow @ 0x1802B68DC
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x1802B5F08 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1802B7AA8 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

HWND anonymous_namespace_::GetFocusedWindow()
{
  HWND result; // rax
  struct tagGUITHREADINFO pgui; // [rsp+20h] [rbp-68h] BYREF

  memset_0(&pgui, 0, sizeof(pgui));
  pgui.cbSize = 72;
  GetGUIThreadInfo(0, &pgui);
  result = pgui.hwndFocus;
  if ( !pgui.hwndFocus )
    return GetForegroundWindow();
  return result;
}
