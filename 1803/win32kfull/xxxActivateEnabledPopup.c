/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C0100CD4
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSetActiveWindow @ 0x1C0100E20 (xxxSetActiveWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0100E84 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  __int64 EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  EnabledPopup = DWP_GetEnabledPopup();
  if ( !EnabledPopup || EnabledPopup == *(_QWORD *)(GetDesktopWindow((__int64)a1) + 88) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v9;
  v9[1] = EnabledPopup;
  _InterlockedIncrement((volatile signed __int32 *)(EnabledPopup + 8));
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v6, v5, v7);
  return 1LL;
}
