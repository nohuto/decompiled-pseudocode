/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C001ACD4
 * Callers:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = ValidateHwnd(v2);
  v4 = v3;
  if ( v3 && (v5 = *(_QWORD *)(v3 + 24)) != 0 )
  {
    *(_OWORD *)(v5 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v5 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v4;
    HMLockObject(v4);
    xxxWindowEvent(0x800Bu, 4);
    ThreadUnlock1(v8, v7, v9);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
