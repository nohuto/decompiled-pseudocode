/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C00B3174
 * Callers:
 *     xxxConsoleControl @ 0x1C00B28FC (xxxConsoleControl.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = ValidateHwnd(*(_QWORD *)a1);
  v6 = v2;
  if ( v2 && (v7 = *(_QWORD *)(v2 + 24)) != 0 )
  {
    *(_OWORD *)(v7 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v7 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v12;
    v12[1] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    xxxWindowEvent(0x800Bu, v6, -8, 0, 4u);
    ThreadUnlock1(v10, v9);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL, v3, v4, v5);
    return 0LL;
  }
}
