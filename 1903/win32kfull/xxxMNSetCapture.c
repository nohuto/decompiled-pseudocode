/*
 * XREFs of xxxMNSetCapture @ 0x1C0226CF8
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0210D60 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 */

void __fastcall xxxMNSetCapture(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, **a1, a4);
  v12 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
  v13 = v6;
  if ( v6 )
    HMLockObject(v6);
  xxxCapture(gptiCurrent, *(struct tagWND **)(**a1 + 8), 4);
  ThreadUnlock1(v9, v8, v10);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v11 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) == gptiCurrent )
        xxxWindowEvent(0x80000004, (struct tagWND *)v11, 0LL, 1LL, 33);
    }
  }
}
