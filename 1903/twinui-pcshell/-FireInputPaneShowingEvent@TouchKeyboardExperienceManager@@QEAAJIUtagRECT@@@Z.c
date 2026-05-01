/*
 * XREFs of ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803112E4 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180312360 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180314544 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180321DC0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180322260 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18030F9BC (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180320B54 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18032B2CC (-GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
        KeyboardHosting::TabTipAdapter **this,
        unsigned int a2,
        struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  HWND FocusedWindow; // rax
  HWND Ancestor; // rbx
  KeyboardHosting::TabTipAdapter *v11; // rdi
  unsigned int PrimaryViewDisplayMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(this[91], a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !a2 )
    {
      FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
      Ancestor = GetAncestor(FocusedWindow, 2u);
      v11 = this[45];
      PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(*((_QWORD *)this[91] + 12));
      (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *, HWND, struct tagRECT *, _QWORD))(*(_QWORD *)v11 + 24LL))(
        v11,
        Ancestor,
        a3,
        PrimaryViewDisplayMode);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
