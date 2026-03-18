/*
 * XREFs of KxTryToAcquireSpinLock @ 0x14011BAB4
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x14011BAA0 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KdPollBreakIn @ 0x14028CB40 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x14028D790 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x140296EC8 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x140315B14 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140317728 (EtwpCovSampTryAcquireBufferLock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140290E64 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // di
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5];
      SchedulerAssist[5] = v7 + 1;
      if ( v7 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = v6[5] - 1;
      v6[5] = v8;
      if ( !v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  _mm_pause();
  return v3;
}
