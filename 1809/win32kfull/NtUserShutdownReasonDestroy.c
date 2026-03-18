/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0132DE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (_QWORD *)v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v4 = v8[2];
    if ( *(_QWORD *)(v4 + 424) == CurrentProcessWin32Process )
    {
      v10 = (unsigned __int16)gatomShutdownBlockingReason;
      v11 = v8[15];
      if ( gatomShutdownBlockingReason == word_1C0317660 )
        *(_QWORD *)(v8[5] + 312LL) = 0LL;
      v12 = RealInternalRemoveProp(v11, v10, 1LL);
      if ( v12 )
      {
        Win32FreePool(v12);
        v7 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v13, v14, v15);
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
