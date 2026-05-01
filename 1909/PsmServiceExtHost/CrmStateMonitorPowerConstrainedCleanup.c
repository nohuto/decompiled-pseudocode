/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x18007E6C8
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    CrmStateMonitorListenerRemove((char *)qword_1800ABE30, a1 + 72, 0);
  v2 = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800ABEC8, a1 + 96, 0);
  return (char)v2;
}
