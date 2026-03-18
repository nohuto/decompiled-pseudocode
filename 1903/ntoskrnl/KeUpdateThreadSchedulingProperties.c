/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x1400E9720
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x1400E94A8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400E9570 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14000FAD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  __int64 result; // rax
  char v6; // r10
  char v7; // cl
  bool IsThreadRankNonZero; // al
  __int64 v9; // rdx

  result = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !a3->NextThread || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3), v7 = 1, !IsThreadRankNonZero) )
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    *a3->PriorityState = v7;
    result = (__int64)a3->SchedulerAssist;
    if ( result )
    {
      v9 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a1 != a3->IdleThread )
        v9 = (unsigned int)v7;
      return KiSetSchedulerAssistPriority(a3->SchedulerAssist, v9, 0LL);
    }
  }
  return result;
}
