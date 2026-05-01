/*
 * XREFs of CrmStateMonitorCsAcDcCleanup @ 0x180070BE0
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorCsAcDcCleanup(__int64 a1)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_18009BB90, a1 + 64, 0);
  result = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BBB0, a1 + 88, 0);
  return result;
}
