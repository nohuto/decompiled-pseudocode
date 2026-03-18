/*
 * XREFs of KiAbApplyWakeupBoost @ 0x14009E94C
 * Callers:
 *     ExpWakePushLock @ 0x14009E580 (ExpWakePushLock.c)
 *     KeAbPreWakeupThread @ 0x14009E914 (KeAbPreWakeupThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiSetPriorityFloor @ 0x14009EEC0 (KiSetPriorityFloor.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14032D768 (EtwTraceAutoBoostSetFloor.c)
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
  __int64 CurrentThread; // rdi
  bool v12; // zf
  struct _KPRCB *v13; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v15; // r8
  __int64 v16; // r8
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+98h] [rbp+20h] BYREF

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
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v20);
    if ( !v4 )
    {
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
          v13 = KeGetCurrentPrcb();
          v19 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)v13, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)v13, 0);
            do
              KeYieldProcessorEx(&v19);
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
          KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v15);
          LOBYTE(v16) = CurrentIrql;
          v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v16) == 0;
        }
        else
        {
          v12 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
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
          *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
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
