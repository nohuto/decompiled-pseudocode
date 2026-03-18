/*
 * XREFs of KeGenericProcessorCallback @ 0x1400FBCAC
 * Callers:
 *     KeFlushQueuedDpcs @ 0x1400FB5E0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1400FBBEC (ExpUpdateTimerConfiguration.c)
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     KeDisableTimer2 @ 0x1401137EC (KeDisableTimer2.c)
 *     KeSetIntervalProfile @ 0x1406F9F50 (KeSetIntervalProfile.c)
 *     PspSetVmProcessorHostProcessWorkerRoutine @ 0x1408C8900 (PspSetVmProcessorHostProcessWorkerRoutine.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiEnumerateNextProcessorNumber @ 0x1400FBFF0 (KiEnumerateNextProcessorNumber.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char __fastcall KeGenericProcessorCallback(
        _QWORD *a1,
        void (__fastcall *a2)(struct _KPRCB *, __int64),
        __int64 a3,
        char a4)
{
  struct _GROUP_AFFINITY *p_PreviousAffinity; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  KPRIORITY v9; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v14; // r15d
  _KTHREAD *NextThread; // rax
  __int64 v16; // rdi
  bool v17; // zf
  struct _KPRCB *v18; // rsi
  _DWORD *SchedulerAssist; // rcx
  _KTHREAD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  struct _KPRCB *v26; // rcx
  struct _KPRCB *v27; // rcx
  int v29; // [rsp+20h] [rbp-E0h] BYREF
  int v30; // [rsp+24h] [rbp-DCh]
  int v31; // [rsp+28h] [rbp-D8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h]
  _QWORD v34[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ah] [rbp-A6h]
  __int16 v37; // [rsp+5Eh] [rbp-A2h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v39[22]; // [rsp+70h] [rbp-90h] BYREF

  v33 = a3;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(v39, 0, 0xA8uLL);
  v36 = 0;
  v37 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v29 = 0;
  if ( !a1 )
  {
    LODWORD(v39[0]) = 1310721;
    a1 = v39;
    memset((char *)v39 + 4, 0, 0xA4uLL);
    v39[1] |= 1uLL;
  }
  p_PreviousAffinity = &PreviousAffinity;
  CurrentPrcb = 0LL;
  *(_DWORD *)Affinity.Reserved = 0;
  v9 = 0;
  Affinity.Reserved[2] = 0;
  CurrentThread = KeGetCurrentThread();
  v30 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v9 = KeSetPriorityThread(CurrentThread, 30);
  else
    KeSetPriorityBoost((__int64)CurrentThread, 15LL);
  v11 = a1[1];
  v34[0] = a1;
  v12 = v33;
  v35 = 0;
  v34[1] = v11;
  while ( !(unsigned int)KiEnumerateNextProcessorNumber(&v29, v34) )
  {
    Affinity.Group = v29;
    Affinity.Mask = 1LL << SBYTE2(v29);
    KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    a2(CurrentPrcb, v12);
    p_PreviousAffinity = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v14 = v30;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb->DpcRoutineActive = 1;
  if ( v14 )
    KeSetPriorityThread(CurrentThread, v9);
  else
    KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentThread);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  CurrentPrcb->DpcRoutineActive = 0;
  NextThread = CurrentPrcb->NextThread;
  if ( CurrentIrql >= 2u )
  {
    if ( NextThread )
    {
      LOBYTE(NextThread) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)NextThread )
        LOBYTE(NextThread) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    v16 = (__int64)CurrentPrcb->CurrentThread;
    if ( NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v18 = KeGetCurrentPrcb();
      v31 = 0;
      while ( 1 )
      {
        SchedulerAssist = v18->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v23 = SchedulerAssist[5];
            SchedulerAssist[5] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v24 = v18->SchedulerAssist;
        if ( v24 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v25 = v24[5] - 1;
            v24[5] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v31);
        while ( CurrentPrcb->PrcbLock );
      }
      v20 = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v16, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = v20;
      if ( v20->WaitBlockFill6[68] == 1 )
      {
        v21 = v20->ReadyTime - v20->WaitBlock[2].SpareLong;
        v20->ReadyTime = v21 + MEMORY[0xFFFFF78000000320];
      }
      v20->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v16 + 643) = 32;
      *(_BYTE *)(v16 + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, v16, v21);
      LOBYTE(v22) = CurrentIrql;
      v17 = (unsigned __int8)KiSwapContext(v16, v20, v22) == 0;
    }
    else
    {
      v17 = (*(_DWORD *)(v16 + 116) & 0x40) == 0;
    }
    if ( !v17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      __writecr8(1uLL);
      *(_DWORD *)(v16 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
    LOBYTE(NextThread) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)NextThread;
}
