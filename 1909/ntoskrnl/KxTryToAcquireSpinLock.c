/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1402A7818
 * Callers:
 *     KdPollBreakIn @ 0x1402A2A40 (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x1402A4120 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x140334068 (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140335CB4 (EtwpCovSampTryAcquireBufferLock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x1402A7714 (KiTryToAcquireSpinLockInstrumented.c)
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char v2; // di
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v5 = SchedulerAssist[5];
      SchedulerAssist[5] = v5 + 1;
      if ( v5 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = v6[5] - 1;
      v6[5] = v7;
      if ( !v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  _mm_pause();
  return v2;
}
