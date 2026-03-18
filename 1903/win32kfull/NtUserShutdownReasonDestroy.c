/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C013E470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = (_QWORD *)v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    v4 = v6[2];
    if ( *(_QWORD *)(v4 + 416) == CurrentProcessWin32Process )
    {
      v8 = (unsigned __int16)gatomShutdownBlockingReason;
      v9 = v6[18];
      if ( gatomShutdownBlockingReason == word_1C032C66C )
        *(_QWORD *)(v6[5] + 312LL) = 0LL;
      v10 = RealInternalRemoveProp(v9, v8, 1LL);
      if ( v10 )
      {
        Win32FreePool(v10);
        v5 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v11, v12, v13);
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
