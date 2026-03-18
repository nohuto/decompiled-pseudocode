/*
 * XREFs of ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C011B2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall _SetShellChangeNotifyHWND(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax

  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 448);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 168);
      if ( v8 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
        v12 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
        v13 = *(unsigned int *)(v12 + 772);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 772) == (_DWORD)v13 )
        {
          v14 = PsGetCurrentProcessWin32Process(v13, v12);
          v12 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL);
          if ( *(_DWORD *)(v14 + 776) == *(_DWORD *)(v12 + 776) )
          {
            result = 1LL;
            *(_QWORD *)(**(_QWORD **)(v6 + 8) + 56LL) = a1;
            return result;
          }
        }
        UserSetLastError(5LL, v12, v10, v11);
      }
    }
  }
  return 0LL;
}
