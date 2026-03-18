/*
 * XREFs of ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C022565C
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0226078 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C0225780 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CWindow::ForceForeground(CWindow *this)
{
  __int64 v1; // rdx
  struct tagWND *WindowToForegroundActivate; // rbx
  char v3; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1);
  v3 = 1;
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v8;
  v8[1] = WindowToForegroundActivate;
  _InterlockedAdd((volatile signed __int32 *)WindowToForegroundActivate + 2, 1u);
  if ( (unsigned int)xxxSetForegroundWindow(WindowToForegroundActivate, 0) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)WindowToForegroundActivate + 5) + 31LL) & 0x20) != 0
      && !(unsigned int)IsThreadHung(*((_QWORD **)WindowToForegroundActivate + 2), 0) )
    {
      PostEventMessageEx(
        *((struct tagTHREADINFO **)WindowToForegroundActivate + 2),
        *(_QWORD *)(*((_QWORD *)WindowToForegroundActivate + 2) + 432LL),
        7u,
        WindowToForegroundActivate,
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
  ThreadUnlock1(v6, v5);
  return v3;
}
