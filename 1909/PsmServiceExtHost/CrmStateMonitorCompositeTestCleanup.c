/*
 * XREFs of CrmStateMonitorCompositeTestCleanup @ 0x18007E38C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorCompositeTestCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_1800ABE10, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800ABE18, a1 + 96, 0);
  return (char)v2;
}
