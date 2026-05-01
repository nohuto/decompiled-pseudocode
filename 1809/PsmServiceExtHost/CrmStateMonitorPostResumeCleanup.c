/*
 * XREFs of CrmStateMonitorPostResumeCleanup @ 0x180070C30
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorPostResumeCleanup(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((char *)qword_18009BBC0, (__int64)(a1 + 8), 0);
  v2 = a1[18];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[18], 1LL);
    TpReleaseTimer(a1[18]);
  }
  if ( (_QWORD *)a1[13] != a1 + 13 )
    CrmStateMonitorListenerRemove((char *)qword_18009BC30, (__int64)(a1 + 12), 0);
  result = a1 + 16;
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BC38, (__int64)(a1 + 15), 0);
  return result;
}
