/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x140008A00
 * Callers:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     PpmUpdatePerformanceFeedback @ 0x140034110 (PpmUpdatePerformanceFeedback.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1400A24E0 (KiExecuteAllDpcs.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FFB90 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x1401046B0 (IopQueueIrpToFileObject.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A75D8 (KiAcquireSpinLockInstrumented.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v4; // ebx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v7; // rcx
  int v8; // eax
  int v9; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  while ( 1 )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)a1 );
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[5];
        SchedulerAssist[5] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    if ( !_interlockedbittestandset64(a1, 0LL) )
      break;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v7[5] - 1;
        v7[5] = v9;
        if ( !v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
  }
  return v4;
}
