/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C00D7EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzSetWindowsHookEx @ 0x1C00D7FBC (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  EnterCrit(0LL, 1LL);
  v12 = 0LL;
  if ( a3 )
  {
    v13 = PtiFromThreadId(a3);
    if ( !v13 )
    {
      UserSetLastError(87LL, v10);
      goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v13) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7B8uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
  }
  v16 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v13, a4, a5, a6);
  if ( v16 )
    v12 = *v16;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, a1, a5, v12);
LABEL_9:
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v12;
}
