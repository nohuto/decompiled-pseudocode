/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1400C678C
 * Callers:
 *     ExpWakePushLock @ 0x1400C63C0 (ExpWakePushLock.c)
 *     KeAbPreWakeupThread @ 0x1400C6754 (KeAbPreWakeupThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BAA0 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiSetPriorityFloor @ 0x1400C6CFC (KiSetPriorityFloor.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14032D1C8 (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  int v4; // r12d
  __int64 v5; // rax
  char v6; // r14
  ULONG_PTR v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  char v9; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rdx
  __int64 CurrentThread; // rdi
  bool v13; // zf
  struct _KPRCB *v14; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v16; // r8
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  int v20; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v5 = *(unsigned __int8 *)(a2 + 24);
    v21 = 0LL;
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
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v21);
    if ( !v4 )
    {
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          LOBYTE(v11) = 2;
          KiRequestSoftwareInterrupt(CurrentPrcb, v11);
        }
      }
      else
      {
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v14 = KeGetCurrentPrcb();
          v20 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v14, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v14, 0);
            do
              KeYieldProcessorEx(&v20);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
          KiSetThreadState(NextThread, 2LL);
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v16);
          LOBYTE(v17) = CurrentIrql;
          v13 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
        }
        else
        {
          v13 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
        }
        if ( !v13 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v18);
          }
          __writecr8(1uLL);
          *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v19);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
