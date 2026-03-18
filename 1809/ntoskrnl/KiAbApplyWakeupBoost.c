/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1400240DC
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400915F0 (ExpWakePushLock.c)
 *     KeSetEventBoostPriorityEx @ 0x1401034A8 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiSetPriorityFloor @ 0x14002509C (KiSetPriorityFloor.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC7C0 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x1400CDC04 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D1F80 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4B7C (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C3F50 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14030F9BC (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  int v4; // r12d
  __int64 v5; // rax
  char v6; // r14
  ULONG_PTR v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  char v9; // di
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  bool v12; // zf
  __int64 v13; // rdx
  struct _KPRCB *v14; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v16; // r8
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v5 = *(unsigned __int8 *)(a2 + 24);
    v20 = 0LL;
    v6 = 32;
    v7 = a2 - 16 * v5;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v9 = a1;
    if ( a1 > 15 )
      v9 = 15;
    if ( *(char *)(v7 + 563) < v9 && ((1 << (v9 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
    {
      v6 = *(_BYTE *)(v7 + 195);
      KiSetPriorityFloor(v7);
      a3 = 0x7FFF;
      *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v9 - 1)))) & 0x7FFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v6 != 32 )
    {
      LOBYTE(a3) = v9;
      EtwTraceAutoBoostSetFloor(v7, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, a3, 0, 0, v6, 0, 0, 1, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList(CurrentPrcb, &v20);
    if ( !v4 )
    {
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v14 = KeGetCurrentPrcb();
          v19 = 0;
          while ( 1 )
          {
            LOBYTE(v13) = 1;
            KiSetVpThreadSpinLockCount(v14, v13);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v14, 0LL);
            do
              KeYieldProcessorEx(&v19);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
          _enable();
          KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
          CurrentThread->WaitReason = 32;
          CurrentThread->WaitIrql = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, CurrentThread);
          LOBYTE(v16) = CurrentIrql;
          v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v16) == 0;
        }
        else
        {
          v12 = (CurrentThread->MiscFlags & 0x40) == 0;
        }
        if ( !v12 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v17);
          }
          __writecr8(1uLL);
          CurrentThread->MiscFlags &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v18);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
