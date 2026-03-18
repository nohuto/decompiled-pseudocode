/*
 * XREFs of xxxMNSetCapture @ 0x1C020F000
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01FA0A0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 */

__int64 __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v9;
  v9[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  xxxCapture(gptiCurrent, *(__int64 **)(**(_QWORD **)a1 + 8LL), 4);
  ThreadUnlock1(v7, v6);
  result = *(_QWORD *)(gptiCurrent + 432LL);
  *(_DWORD *)(result + 388) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  return result;
}
