/*
 * XREFs of xxxMNSetCapture @ 0x1C02267B8
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0210820 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxMNSetCapture(__int64 **a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v4 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, **a1);
  v10 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v10;
  v11 = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxCapture(gptiCurrent, *(struct tagWND **)(**a1 + 8), 4);
  ThreadUnlock1(v7, v6, v8);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v9 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == gptiCurrent )
        xxxWindowEvent(0x80000004, (struct tagWND *)v9, 0LL, 1, 33);
    }
  }
}
