/*
 * XREFs of ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18007B830
 * Callers:
 *     ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18007B7D0 (-GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x1801752B0 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x18017AFC0 (-SetFocus@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x18017B630 (-SwitchTo@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetSwitchWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND Window; // rax
  HWND v4; // rbx
  HWND v5; // rdi
  HWND LastActivePopup; // rax
  HWND v7; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  HWND i; // rcx
  HWND v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  Window = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v4 = Window;
  do
  {
    v5 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  LastActivePopup = GetLastActivePopup(v5);
  v7 = LastActivePopup;
  if ( !LastActivePopup )
    goto LABEL_17;
  if ( LastActivePopup != v4 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v7) )
  {
    for ( i = v7; ; i = v11 )
    {
      v11 = GetWindow(i, 4u);
      if ( !v11 )
        break;
      if ( v11 == v4 )
        goto LABEL_16;
    }
    if ( v4 )
      goto LABEL_5;
LABEL_16:
    v4 = v7;
  }
LABEL_5:
  if ( v4 )
  {
    v8 = GhostWindowFromHungWindow(v4);
    if ( v8 )
      v4 = (HWND)v8;
    result = 0LL;
    *a2 = v4;
  }
  else
  {
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070578LL);
    return 2147943800LL;
  }
  return result;
}
