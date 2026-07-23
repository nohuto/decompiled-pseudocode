/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1400F48B0
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1400F3B18 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400F4738 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D1644 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  __int64 result; // rax
  __int64 v6; // r9
  char v7; // r10
  bool IsThreadRankNonZero; // al
  char v9; // cl
  __int64 v10; // rdx

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v7 == 2 && !a3->NextThread || v7 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3), v9 = 1, !IsThreadRankNonZero) )
    {
      v9 = *(_BYTE *)(a1 + 195);
    }
    *a3->PriorityState = v9;
    result = (__int64)a3->SchedulerAssist;
    if ( result )
    {
      v10 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a1 != a3->IdleThread )
        v10 = (unsigned int)v9;
      return KiSetSchedulerAssistPriority(a3->SchedulerAssist, v10, 0LL, v6);
    }
  }
  return result;
}
