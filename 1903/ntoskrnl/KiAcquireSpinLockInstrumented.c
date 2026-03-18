/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1402A7878
 * Callers:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     PpmUpdatePerformanceFeedback @ 0x140033D20 (PpmUpdatePerformanceFeedback.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiExecuteAllDpcs @ 0x1400C2660 (KiExecuteAllDpcs.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FDA00 (KiCallInterruptServiceRoutine.c)
 *     IopQueueIrpToFileObject @ 0x140100010 (IopQueueIrpToFileObject.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x140331D80 (PerfLogSpinLockAcquire.c)
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
