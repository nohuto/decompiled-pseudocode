/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01B0A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2)
{
  __int64 i; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v6 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v5) )
    {
      v5 = i;
      if ( !i )
      {
        v6 = 1431LL;
        goto LABEL_14;
      }
      v4 = *(_DWORD *)(i + 68) == -1
         ? *(_QWORD *)(i + 56)
         : *(_QWORD *)(i + 56)
         + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 416)
                     + 8LL * *(int *)(i + 68)
                     + 408);
      if ( v4 == a2 )
        break;
    }
    if ( *(_QWORD *)(v5 + 16) == gptiCurrent )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v5, a2);
    v6 = 5LL;
  }
LABEL_14:
  UserSetLastError(v6, a2);
  return 0LL;
}
