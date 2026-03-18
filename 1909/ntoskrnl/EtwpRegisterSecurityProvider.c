/*
 * XREFs of EtwpRegisterSecurityProvider @ 0x14078CD70
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140036F60 (PsGetCurrentThreadProcessId.c)
 */

__int64 __fastcall EtwpRegisterSecurityProvider(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 4072) )
    return (unsigned int)-1073741790;
  else
    *(_DWORD *)(a1 + 4072) = PsGetCurrentThreadProcessId();
  return v1;
}
