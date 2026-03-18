/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01D3AA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v8 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v7) )
    {
      v7 = i;
      if ( !i )
      {
        v8 = 1431LL;
        goto LABEL_14;
      }
      v6 = *(_DWORD *)(i + 68) == -1
         ? *(_QWORD *)(i + 56)
         : *(_QWORD *)(i + 56)
         + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 424)
                     + 8LL * *(int *)(i + 68)
                     + 416);
      if ( v6 == a2 )
        break;
    }
    if ( *(_QWORD *)(v7 + 16) == gptiCurrent )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v7, a2);
    v8 = 5LL;
  }
LABEL_14:
  UserSetLastError(v8, a2, a3, a4);
  return 0LL;
}
