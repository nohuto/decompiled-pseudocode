/*
 * XREFs of ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023D4C4
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023DEE0 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C023D604 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CWindow::ForceForeground(CWindow *this)
{
  __int64 v1; // rdx
  struct tagWND *WindowToForegroundActivate; // rbx
  __int64 v3; // r8
  char v4; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v3);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = WindowToForegroundActivate;
  HMLockObject(WindowToForegroundActivate);
  v4 = xxxSetForegroundWindowWithOptions((__int64)WindowToForegroundActivate, 2u, 0, 0);
  if ( v4 )
  {
    v7 = *((_QWORD *)WindowToForegroundActivate + 5);
    if ( (*(_BYTE *)(v7 + 31) & 0x20) != 0
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
  ThreadUnlock1(v7, v6, v8);
  return v4;
}
