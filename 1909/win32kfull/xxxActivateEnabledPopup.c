/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C015A4AC
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01376F4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DWP_GetEnabledPopup @ 0x1C015A578 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnabledPopup = (struct tagWND *)DWP_GetEnabledPopup();
  if ( !EnabledPopup || EnabledPopup == *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = EnabledPopup;
  HMLockObject(EnabledPopup);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow(EnabledPopup);
  ThreadUnlock1(v7, v6, v8);
  return 1LL;
}
