/*
 * XREFs of CrmStateMonitorSystemDiskUsageCleanup @ 0x18007090C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180070970 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorSystemDiskUsageCleanup(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = (_QWORD *)(a1 + 72);
  if ( (_QWORD *)*result != result )
    result = (_QWORD *)CrmStateMonitorListenerRemove((char *)qword_18009BBB0, a1 + 64, 0);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    return (_QWORD *)TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  return result;
}
