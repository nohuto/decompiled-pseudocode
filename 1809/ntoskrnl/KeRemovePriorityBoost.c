/*
 * XREFs of KeRemovePriorityBoost @ 0x14028E134
 * Callers:
 *     CmpReleaseWriteQueue @ 0x1406C8CE0 (CmpReleaseWriteQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KPRCB *v8; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 NextThread; // rbx
  __int64 v14; // r8
  unsigned int v15; // r8d
  bool v16; // zf
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 564) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveBoostThread((__int64)CurrentPrcb, a1, a3);
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
        v8 = KeGetCurrentPrcb();
        v19 = 0;
        while ( 1 )
        {
          SchedulerAssist = v8->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v10 = SchedulerAssist[5];
              SchedulerAssist[5] = v10 + 1;
              if ( v10 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v8);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v11 = v8->SchedulerAssist;
          if ( v11 )
          {
            if ( v8->NestingLevel <= 1u )
            {
              v12 = v11[5] - 1;
              v11[5] = v12;
              if ( !v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v8);
            }
          }
          do
            KeYieldProcessorEx(&v19, v6, v7);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = (__int64)CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        KiUpdatePriorityMatrixThreadState((__int64)CurrentPrcb, NextThread, 0, 2LL);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v14);
        LOBYTE(v15) = CurrentIrql;
        v16 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v15) == 0;
      }
      else
      {
        v16 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v16 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
      __writecr8(CurrentIrql);
    }
  }
}
