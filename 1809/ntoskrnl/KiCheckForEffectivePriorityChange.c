/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x140116904
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x1400D3720 (KiComputeGroupSchedulingRank.c)
 *     KiUpdateCpuTargetByWeight @ 0x140115FD4 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1401162B8 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 NextThread; // rbx
  __int64 v6; // r8
  bool IsThreadRankNonZero; // al
  char v8; // cl
  __int64 v9; // rdx

  NextThread = (__int64)a1->NextThread;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v6 = *(_QWORD *)(NextThread + 104);
  if ( v6 )
  {
    for ( v6 += a1->ScbOffset; v6; v6 = *(_QWORD *)(v6 + 408) )
    {
      if ( v6 == a2 )
        goto LABEL_9;
    }
  }
  if ( v6 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, a1), v8 = 1, !IsThreadRankNonZero) )
    {
      v8 = *(_BYTE *)(NextThread + 195);
    }
    *a1->PriorityState = v8;
    if ( a1->SchedulerAssist )
    {
      v9 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != a1->IdleThread )
        v9 = (unsigned int)v8;
      KiSetSchedulerAssistPriority(a1->SchedulerAssist, v9, 0LL, a4);
    }
  }
}
