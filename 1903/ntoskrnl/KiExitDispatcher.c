/*
 * XREFs of KiExitDispatcher @ 0x140067BE0
 * Callers:
 *     KeRegisterObjectNotification @ 0x1400082F0 (KeRegisterObjectNotification.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     KeInsertQueueEx @ 0x14000CE90 (KeInsertQueueEx.c)
 *     AlpcpSignal @ 0x14000D460 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeInsertPriQueue @ 0x14005B2E0 (KeInsertPriQueue.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KiRundownMutants @ 0x140080B0C (KiRundownMutants.c)
 *     KeForceResumeThread @ 0x140081304 (KeForceResumeThread.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KeRundownQueueEx @ 0x1400AA4CC (KeRundownQueueEx.c)
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1400AEA00 (KeAlertThread.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     KeSuspendThread @ 0x1400AF684 (KeSuspendThread.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeSetProcess @ 0x1400E57A0 (KeSetProcess.c)
 *     KeFreezeProcess @ 0x1400EE7A4 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400EEA04 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400EEAF4 (KeThawProcess.c)
 *     KePulseEvent @ 0x1400F3050 (KePulseEvent.c)
 *     IoSetIoCompletionEx @ 0x140100320 (IoSetIoCompletionEx.c)
 *     KeSetTimerEx @ 0x1401028B0 (KeSetTimerEx.c)
 *     PpmCheckRun @ 0x140108FC0 (PpmCheckRun.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     KeAlertThreadByThreadId @ 0x1401198BC (KeAlertThreadByThreadId.c)
 *     KeTimeOutQueueWaiters @ 0x140122CF0 (KeTimeOutQueueWaiters.c)
 *     KeResumeThread @ 0x140125248 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x14012567C (KeWakeWaitChain.c)
 *     KeInsertQueue @ 0x14012D860 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiSetSystemTimeDpc @ 0x1401791F0 (KiSetSystemTimeDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1402A502C (KeAdjustTimerDelayProcess.c)
 *     KeInsertHeadQueue @ 0x1402ABBB0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1402B3640 (KeRundownPriQueue.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14032E1F4 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiExitDispatcher(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r14
  char v6; // bl
  unsigned __int8 v9; // bl
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 **v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // rsi
  __int64 *v16; // r12
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  volatile signed __int32 *v31; // [rsp+60h] [rbp+8h]
  int v32; // [rsp+68h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528) )
  {
    if ( v6 && (unsigned __int8)KiDirectSwitchThread(a1, a4, (a2 & 2) != 0) )
      goto LABEL_28;
    v12 = *(__int64 ***)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = 0LL;
    do
    {
      v13 = *((unsigned __int8 *)v12 + 371);
      v14 = (__int64 *)(v12 - 27);
      v15 = *(v12 - 1);
      v12 = (__int64 **)*v12;
      v16 = &v15[6 * v13];
      do
      {
        if ( *((_BYTE *)v15 + 17) < 5u )
        {
          v31 = (volatile signed __int32 *)v15[4];
          KiAcquireKobjectLockSafe(v31);
          if ( *((_BYTE *)v15 + 17) == 4 )
          {
            v17 = (__int64 *)*v15;
            v18 = (__int64 **)v15[1];
            if ( *(__int64 **)(*v15 + 8) != v15 || *v18 != v15 )
              __fastfail(3u);
            *v18 = v17;
            v17[1] = (__int64)v18;
          }
          _InterlockedAnd(v31, 0xFFFFFF7F);
        }
        v15 += 6;
      }
      while ( v15 != v16 );
      *((_BYTE *)v14 + 566) = a3;
      *((_BYTE *)v14 + 567) = v5;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceReadyThread(v14, a3, v5, 0LL);
      KiReadyThread(a1, v14);
    }
    while ( v12 );
  }
  if ( v6 )
  {
LABEL_28:
    v19 = *(_QWORD *)(a1 + 8);
    result = a5;
    *(_DWORD *)(v19 + 116) |= 4u;
    *(_BYTE *)(v19 + 390) = result;
    return result;
  }
  v9 = a5;
  result = *(_QWORD *)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( result )
    {
      KiAbProcessContextSwitch(*(_QWORD *)(a1 + 8), 0);
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = SchedulerAssist[5];
          SchedulerAssist[5] = v27 + 1;
          if ( v27 == -1 )
LABEL_47:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v25 = CurrentPrcb->SchedulerAssist;
        if ( v25 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v28 = v25[5] - 1;
            v25[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v32);
        while ( *(_QWORD *)(a1 + 48) );
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v29 = v26[5];
            v26[5] = v29 + 1;
            if ( v29 == -1 )
              goto LABEL_47;
          }
        }
      }
      v22 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(a1, v11, 0LL);
      _enable();
      *(_QWORD *)(a1 + 8) = v22;
      if ( *(_BYTE *)(v22 + 388) == 1 )
        *(_DWORD *)(v22 + 132) = *(_DWORD *)(v22 + 132) - *(_DWORD *)(v22 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v22 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread(a1, v11, v23);
      if ( !(unsigned __int8)KiSwapContext(v11, v22, v9) )
        goto LABEL_6;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
        goto LABEL_37;
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
        goto LABEL_6;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      {
LABEL_37:
        __writecr8(1uLL);
        *(_DWORD *)(v11 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
LABEL_6:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v30);
        }
        result = v9;
        __writecr8(v9);
        return result;
      }
    }
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
    goto LABEL_37;
  }
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 11882);
    if ( !(_BYTE)result )
    {
      LOBYTE(a2) = 2;
      return KiRequestSoftwareInterrupt(a1, a2);
    }
  }
  return result;
}
