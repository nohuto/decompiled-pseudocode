/*
 * XREFs of xxxHandleHealthyWindow @ 0x1C00E6B20
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0034E48 (xxxSetWindowPosAndBand.c)
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 *     xxxHandleHealthyThread @ 0x1C00E6A60 (xxxHandleHealthyThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C00E6BA8 (xxxDestroyCorrespondingGhostWindow.c)
 */

__int64 __fastcall xxxHandleHealthyWindow(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( RealGetProp(*(_QWORD *)(a1 + 120), *(unsigned __int16 *)(gpsi + 900LL), 1LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v9;
    v9[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v2 = xxxDestroyCorrespondingGhostWindow((struct tagWND *)a1);
    ThreadUnlock1(v6, v5, v7);
  }
  return v2;
}
