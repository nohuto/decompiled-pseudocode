/*
 * XREFs of ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C01FD5A8 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C01FCD28 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CWindow::ForceForeground(CWindow *this)
{
  __int64 v1; // rdx
  struct tagWND *WindowToForegroundActivate; // rbx
  char v3; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
  v3 = 1;
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v9;
  v9[1] = WindowToForegroundActivate;
  _InterlockedAdd((volatile signed __int32 *)WindowToForegroundActivate + 2, 1u);
  if ( (unsigned int)xxxSetForegroundWindow(WindowToForegroundActivate, 0) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)WindowToForegroundActivate + 5) + 31LL) & 0x20) != 0
      && !(unsigned int)IsThreadHung(*((_QWORD **)WindowToForegroundActivate + 2), 0) )
    {
      PostEventMessageEx(
        *((struct tagTHREADINFO **)WindowToForegroundActivate + 2),
        *(_QWORD *)(*((_QWORD *)WindowToForegroundActivate + 2) + 424LL),
        7u,
        (__int64)WindowToForegroundActivate,
        0x112u,
        61728LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v3 = 0;
  }
  ThreadUnlock1(v6, v5, v7);
  return v3;
}
