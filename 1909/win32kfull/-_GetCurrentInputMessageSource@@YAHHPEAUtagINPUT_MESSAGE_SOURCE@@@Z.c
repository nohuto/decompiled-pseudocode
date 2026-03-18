/*
 * XREFs of ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00E59B8
 * Callers:
 *     NtUserGetCurrentInputMessageSource @ 0x1C00E58D0 (NtUserGetCurrentInputMessageSource.c)
 *     NtUserGetCIMSSM @ 0x1C0155130 (NtUserGetCIMSSM.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _GetCurrentInputMessageSource(int a1, struct tagINPUT_MESSAGE_SOURCE *a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  BOOL v10; // edx
  BOOL v12; // [rsp+20h] [rbp-18h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  v12 = (**(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7) + 472) & 0x40000000) != 0;
  v10 = **(int **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 472) < 0;
  if ( a1 )
  {
    if ( v10 || (**(_DWORD **)(ThreadWin32Thread + 440) & 8) != 0 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)a2 = *(_DWORD *)(ThreadWin32Thread + 1240);
    *((_DWORD *)a2 + 1) = *(_DWORD *)(ThreadWin32Thread + 1244);
    return 1LL;
  }
  if ( !v12 && (**(_DWORD **)(ThreadWin32Thread + 440) & 6) == 0 )
    goto LABEL_8;
LABEL_4:
  SetUnavailableInputSource(a2);
  return 1LL;
}
