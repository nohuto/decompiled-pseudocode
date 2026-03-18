/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C00EE200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00EE378 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v4 + 424) == CurrentProcessWin32Process )
    {
      if ( CheckClipboardAccess(v4, v3) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 232LL) & 1) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v8);
          v7 = 1LL;
        }
        else
        {
          UserSetLastError(87LL, v3, v5, v6);
        }
      }
    }
    else
    {
      v7 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
