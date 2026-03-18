/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C0135E70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 456);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 168);
      if ( v6 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
        v10 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
        v11 = *(unsigned int *)(v10 + 780);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 780) == (_DWORD)v11 )
        {
          v12 = PsGetCurrentProcessWin32Process(v11);
          v10 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
          if ( *(_DWORD *)(v12 + 784) == *(_DWORD *)(v10 + 784) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v4 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v10, v8, v9);
      }
    }
  }
  return 0LL;
}
