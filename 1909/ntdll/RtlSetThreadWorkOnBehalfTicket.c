/*
 * XREFs of RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0
 * Callers:
 *     TppCleanupGroupMemberCallbackProlog @ 0x180033474 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppIopExecuteCallback @ 0x180033520 (TppIopExecuteCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlSetThreadWorkOnBehalfTicket(_QWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket == *a1 )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, a1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *a1;
  return result;
}
