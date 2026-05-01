/*
 * XREFs of ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x18032E11C
 * Callers:
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032DB50 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180341370 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180341600 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x18032EE7C (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18034AB4C (-GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::FireInputPaneHidingEvent(TouchKeyboardExperienceManager *this, int a2)
{
  int v4; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rbx
  __int64 v7; // rdi
  unsigned int PrimaryViewDisplayMode; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 91) + 32LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 91) + 32LL),
         0LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      643LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !a2 )
  {
    FocusedWindow = (HWND)anonymous_namespace_::GetFocusedWindow();
    Ancestor = GetAncestor(FocusedWindow, 2u);
    v7 = *((_QWORD *)this + 45);
    PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(*(_QWORD *)(*((_QWORD *)this + 91) + 96LL));
    v9 = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, Ancestor, PrimaryViewDisplayMode);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        651LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
}
