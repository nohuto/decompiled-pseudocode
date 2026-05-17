/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x18002EFD0
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002ECB4 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1, 8LL);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
