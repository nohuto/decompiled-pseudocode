/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1402A75D8
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
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008A00 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x1403317E0 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // esi
  char v5; // bp
  unsigned __int64 v6; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v8; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v6) << 32;
    v8 = v6;
  }
  else
  {
    v8 = v15;
    v5 = 0;
    InterruptCount = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[5];
      SchedulerAssist[5] = v10 + 1;
      if ( v10 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v11[5] - 1;
        v11[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    v13 = KxWaitForSpinLockAndAcquire(a1, a2);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v13;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v13;
  }
  if ( v5 )
  {
    v14 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v14, v14 - v8, v3, InterruptCount, 0);
  }
}
