/*
 * XREFs of NtUserSetWindowsHookEx @ 0x1C00B31A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowsHookEx @ 0x1C00B32E4 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 CurrentProcess; // rax
  _QWORD *ProcessPeb; // r15
  __int64 *v18; // rax
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v14 = 0LL;
  if ( a3 )
  {
    v15 = PtiFromThreadId(a3);
    if ( !v15 )
    {
      UserSetLastError(87LL, v10, v12, v13);
      goto LABEL_9;
    }
  }
  else
  {
    LODWORD(v15) = 0;
  }
  if ( a1 )
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
    ProcessPeb = (_QWORD *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(ProcessPeb, 0x7C8uLL, 1u);
    if ( ProcessPeb[2] == a1 )
    {
      a1 = 0LL;
      a2 = 0LL;
    }
  }
  v18 = (__int64 *)zzzSetWindowsHookEx(a1, a2, v15, a4, a5, a6);
  if ( v18 )
    v14 = *v18;
  EtwTraceAuditApiSetWindowsHookEx(a4, a2, a1, a5, v14);
LABEL_9:
  UserSessionSwitchLeaveCrit(v19);
  return v14;
}
