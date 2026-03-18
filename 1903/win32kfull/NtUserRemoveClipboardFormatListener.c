/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C00DCB80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00DCD20 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    v4 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(v4 + 416) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess(v4, v8, v9, v10) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 232LL) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v6);
          v5 = 1LL;
        }
        else
        {
          UserSetLastError(87LL, v11, v12, v13);
        }
      }
    }
    else
    {
      v5 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
