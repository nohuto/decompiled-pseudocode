/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x180070D98
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    CrmStateMonitorListenerRemove((char *)qword_18009BB90, a1 + 72, 0);
  result = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BC28, a1 + 96, 0);
  return result;
}
