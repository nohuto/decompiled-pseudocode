/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C010B418
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C010B330 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C0154370 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(int a1, struct tagINPUT_MESSAGE_SOURCE *a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOL v13; // edx
  BOOL v15; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  v15 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9) + 472) & 0x40000000) != 0;
  v13 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 472) < 0;
  if ( a1 )
  {
    if ( v13 || (**(_DWORD **)(ThreadWin32Thread + 440) & 8) != 0 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)a2 = *(_DWORD *)(ThreadWin32Thread + 1240);
    *((_DWORD *)a2 + 1) = *(_DWORD *)(ThreadWin32Thread + 1244);
    return 1LL;
  }
  if ( !v15 && (**(_DWORD **)(ThreadWin32Thread + 440) & 6) == 0 )
    goto LABEL_8;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}
