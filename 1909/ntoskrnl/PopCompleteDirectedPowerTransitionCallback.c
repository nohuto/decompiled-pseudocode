/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x1402FAFD0
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2A6C (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x1408ABDFC (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140165460 (PopCompleteNotifyTransitionCommon.c)
 */

__int64 __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  int v6; // esi
  _DISPATCHER_HEADER *v7; // r9

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, (__int64 *)(*(_QWORD *)(a1 + 48) + 144LL), a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphoreEx(*(_QWORD *)(a2 + 40), 0, 1, v7, 0);
}
