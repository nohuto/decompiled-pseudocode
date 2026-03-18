/*
 * XREFs of ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023DAE4
 * Callers:
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C023E500 (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 * Callees:
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C023DC24 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

char __fastcall CWindow::ForceForeground(CWindow *this)
{
  __int64 v1; // rdx
  struct tagWND *WindowToForegroundActivate; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // di
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(this);
  if ( !WindowToForegroundActivate )
    return 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v3, v4);
  v11 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
  v12 = WindowToForegroundActivate;
  HMLockObject(WindowToForegroundActivate);
  v5 = xxxSetForegroundWindowWithOptions((__int64)WindowToForegroundActivate, 2u, 0, 0);
  if ( v5 )
  {
    v8 = *((_QWORD *)WindowToForegroundActivate + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0x20) != 0
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
  ThreadUnlock1(v8, v7, v9);
  return v5;
}
