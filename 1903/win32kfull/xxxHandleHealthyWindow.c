/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C0150500
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C009DEC0 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C00CB2A0 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C0150440 (xxxHandleHealthyThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01505A4 (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = a1;
    HMLockObject(a1);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v8, v7, v9);
  }
  return v1;
}
