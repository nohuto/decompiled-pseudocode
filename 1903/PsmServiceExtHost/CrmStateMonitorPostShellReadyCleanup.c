/*
 * XREFs of CrmStateMonitorPostShellReadyCleanup @ 0x18007E624
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPostShellReadyCleanup(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((char *)qword_1800ABE70, (__int64)(a1 + 8), 0);
  v2 = a1[17];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[17], 1LL);
    TpReleaseTimer(a1[17]);
  }
  if ( (_QWORD *)a1[12] != a1 + 12 )
    CrmStateMonitorListenerRemove((char *)qword_1800ABED0, (__int64)(a1 + 11), 0);
  v3 = a1 + 15;
  if ( (_QWORD *)*v3 != v3 )
    LOBYTE(v3) = CrmStateMonitorListenerRemove((char *)qword_1800ABED8, (__int64)(a1 + 14), 0);
  return (char)v3;
}
