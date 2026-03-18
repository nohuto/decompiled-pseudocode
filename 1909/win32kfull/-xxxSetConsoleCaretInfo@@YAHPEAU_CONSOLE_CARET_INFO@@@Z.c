/*
 * XREFs of ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C00FF03C
 * Callers:
 *     xxxConsoleControl @ 0x1C0020828 (xxxConsoleControl.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetConsoleCaretInfo(struct _CONSOLE_CARET_INFO *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagWND *v7; // rbx
  __int64 v8; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v3 = ValidateHwnd(v2);
  v7 = (struct tagWND *)v3;
  if ( v3 && (v8 = *(_QWORD *)(v3 + 24)) != 0 )
  {
    *(_OWORD *)(v8 + 144) = *(_OWORD *)a1;
    *(_QWORD *)(v8 + 160) = *((_QWORD *)a1 + 2);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
    v14 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
    v15 = v7;
    HMLockObject(v7);
    xxxWindowEvent(0x800Bu, v7, 4294967288LL, 0, 4);
    ThreadUnlock1(v11, v10, v12);
    return 1LL;
  }
  else
  {
    UserSetLastError(87LL, v4, v5, v6);
    return 0LL;
  }
}
