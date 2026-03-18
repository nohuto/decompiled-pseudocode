/*
 * XREFs of xxxActivateEnabledPopup @ 0x1C02281EC
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C012540C (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DWP_GetEnabledPopup @ 0x1C0228108 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxActivateEnabledPopup(struct tagWND *a1)
{
  volatile signed __int32 *EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF

  EnabledPopup = (volatile signed __int32 *)DWP_GetEnabledPopup(a1);
  if ( !EnabledPopup || EnabledPopup == *(volatile signed __int32 **)(GetDesktopWindow((__int64)a1) + 88) )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v8;
  v8[1] = EnabledPopup;
  _InterlockedIncrement(EnabledPopup + 2);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 19);
  xxxSetActiveWindow((struct tagWND *)EnabledPopup);
  ThreadUnlock1(v6, v5);
  return 1LL;
}
