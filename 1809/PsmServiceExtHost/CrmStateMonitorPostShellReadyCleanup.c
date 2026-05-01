/*
 * XREFs of CrmStateMonitorPostShellReadyCleanup @ 0x180070CF4
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorPostShellReadyCleanup(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *result; // rax

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((char *)qword_18009BBD0, (__int64)(a1 + 8), 0);
  v2 = a1[17];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[17], 1LL);
    TpReleaseTimer(a1[17]);
  }
  if ( (_QWORD *)a1[12] != a1 + 12 )
    CrmStateMonitorListenerRemove((char *)qword_18009BC30, (__int64)(a1 + 11), 0);
  result = a1 + 15;
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BC38, (__int64)(a1 + 14), 0);
  return result;
}
