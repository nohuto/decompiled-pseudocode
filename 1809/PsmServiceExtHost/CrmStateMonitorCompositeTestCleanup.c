/*
 * XREFs of CrmStateMonitorCompositeTestCleanup @ 0x180070B3C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorCompositeTestCleanup(__int64 a1)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_18009BB70, a1 + 64, 0);
  result = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BB78, a1 + 96, 0);
  return result;
}
