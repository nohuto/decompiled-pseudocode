/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C01E3C00
 * Callers:
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 *     xxxSetWindowPosAndBand @ 0x1C0071DE8 (xxxSetWindowPosAndBand.c)
 *     xxxHandleHealthyThread @ 0x1C01E3B40 (xxxHandleHealthyThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01E3704 (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v8;
    v8[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v6, v5);
  }
  return v1;
}
