/*
 * XREFs of KeSetAffinityThread @ 0x14015A824
 * Callers:
 *     ExpWorkerThread @ 0x140059CD0 (ExpWorkerThread.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x14076BAB0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     KiExtendProcessAffinity @ 0x1402B332C (KiExtendProcessAffinity.c)
 */

char __fastcall KeSetAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // r8
  char result; // al
  __int64 CurrentThread; // rsi
  bool v11; // zf
  struct _KPRCB *v12; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_WORD *)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 544);
  v23 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v8 = *(_QWORD *)(v4 + 8LL * v2 + 88);
  if ( !v8 || (v8 & *(_QWORD *)a2) != *(_QWORD *)a2 )
    KiExtendProcessAffinity(v4);
  if ( !*(_QWORD *)a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v4 + 8LL * v2 + 88);
  KiSetAffinityThread(a1, (__int64)&v23, (__int64 *)a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v23);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v12 = KeGetCurrentPrcb();
      v22 = 0;
      while ( 1 )
      {
        SchedulerAssist = v12->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v15 = SchedulerAssist[5];
            SchedulerAssist[5] = v15 + 1;
            if ( v15 == -1 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v14 = v12->SchedulerAssist;
        if ( v14 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v16 = v14[5] - 1;
            v14[5] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        do
          KeYieldProcessorEx(&v22);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v18);
      LOBYTE(v19) = CurrentIrql;
      v11 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) == 0;
    }
    else
    {
      v11 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v11 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v20);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v21);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
