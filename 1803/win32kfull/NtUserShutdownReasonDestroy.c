/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0110ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v4 + 416) == CurrentProcessWin32Process )
    {
      v10 = RealInternalRemoveProp(*(_QWORD *)(v8 + 120), (unsigned __int16)gatomShutdownBlockingReason, 1LL);
      if ( v10 )
      {
        Win32FreePool(v10);
        v7 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v11);
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
