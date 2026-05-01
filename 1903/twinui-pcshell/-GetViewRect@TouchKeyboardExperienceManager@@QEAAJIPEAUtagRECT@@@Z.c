/*
 * XREFs of ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18030FF94
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180321DC0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18030FC80 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetViewRect(RTL_SRWLOCK *this, int a2, struct tagRECT *a3)
{
  int FrameWindowByViewId; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  const char *v7; // r9
  HWND hWnd[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  hWnd[0] = 0LL;
  hWnd[1] = 0LL;
  *a3 = 0u;
  FrameWindowByViewId = TouchKeyboardExperienceManager::GetFrameWindowByViewId(this, a2, hWnd);
  v5 = FrameWindowByViewId;
  if ( FrameWindowByViewId >= 0 )
  {
    if ( GetWindowRect(hWnd[0], &Rect) )
    {
      result = 0LL;
      *a3 = Rect;
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x357,
               (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
               v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x354,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)FrameWindowByViewId);
    return v5;
  }
  return result;
}
