/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C01512C0
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C003EC90 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C006C970 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0151200 (xxxHandleHealthyThread.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0151364 (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
    v10 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
    v11 = a1;
    HMLockObject(a1);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v7, v6, v8);
  }
  return v1;
}
