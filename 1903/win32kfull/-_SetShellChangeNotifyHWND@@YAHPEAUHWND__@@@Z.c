/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C0140B70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax

  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 448);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 168);
      if ( v9 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
        v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL);
        v14 = *(unsigned int *)(v13 + 772);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 772) == (_DWORD)v14 )
        {
          v15 = PsGetCurrentProcessWin32Process(v14, v13);
          v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL);
          if ( *(_DWORD *)(v15 + 776) == *(_DWORD *)(v13 + 776) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v7 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v13, v11, v12);
      }
    }
  }
  return 0LL;
}
