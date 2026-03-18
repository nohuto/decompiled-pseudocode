/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01021B8
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C01020D0 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C014B2F0 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(int a1, struct tagINPUT_MESSAGE_SOURCE *a2)
{
  __int64 ThreadWin32Thread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  BOOL v7; // edx
  BOOL v9; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  v9 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 480) & 0x40000000) != 0;
  v7 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6) + 480) < 0;
  if ( a1 )
  {
    if ( v7 || (**(_DWORD **)(ThreadWin32Thread + 448) & 8) != 0 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)a2 = *(_DWORD *)(ThreadWin32Thread + 1216);
    *((_DWORD *)a2 + 1) = *(_DWORD *)(ThreadWin32Thread + 1220);
    return 1LL;
  }
  if ( !v9 && (**(_DWORD **)(ThreadWin32Thread + 448) & 6) == 0 )
    goto LABEL_8;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}
