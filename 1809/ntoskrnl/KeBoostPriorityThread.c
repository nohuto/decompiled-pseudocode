/*
 * XREFs of KeBoostPriorityThread @ 0x1400E3400
 * Callers:
 *     ExpCreateWorkerThread @ 0x14066BA44 (ExpCreateWorkerThread.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x1400CF6C0 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  int v4; // ebp
  int v6; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r15
  _DWORD *SchedulerAssist; // rcx
  int v11; // r12d
  int v12; // eax
  __int64 updated; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rbp
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // rcx
  int v23; // eax
  _KTHREAD *NextThread; // rbx
  __int64 v25; // r8
  __int64 v26; // r8
  char v27; // al
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct _KPRCB *v31; // rbx
  _DWORD *v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  struct _KPRCB *v35; // rcx
  _QWORD *v37[9]; // [rsp+30h] [rbp-48h] BYREF
  int v38; // [rsp+80h] [rbp+8h] BYREF
  int v39; // [rsp+90h] [rbp+18h] BYREF
  int v40; // [rsp+98h] [rbp+20h]

  v3 = &KiInitialProcess;
  v4 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v3;
  v37[0] = 0LL;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = SchedulerAssist[5];
        SchedulerAssist[5] = v29 + 1;
        if ( v29 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v18[5] - 1;
        v18[5] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v38, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v11 = *(char *)(a1 + 195);
  v40 = v11;
  if ( v11 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v12 = v4 + *(char *)(a1 + 563);
    if ( v12 > v11 )
    {
      v6 = v4 + *(char *)(a1 + 563);
      if ( v12 >= 16 )
        v6 = 15;
      if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
        _enable();
      }
      v14 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v14;
      KiSetPriorityThread(a1, (__int64)v37, v6);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v3) = KiReadyDeferredReadyList((__int64)CurrentPrcb, v37, v15, v16);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v3) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v3 )
        LOBYTE(v3) = KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    goto LABEL_21;
  }
  v17 = (__int64)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v31 = KeGetCurrentPrcb();
    v39 = 0;
    v32 = v31->SchedulerAssist;
    if ( v32 )
    {
      v20 = 1LL;
      if ( v31->NestingLevel <= 1u )
      {
        v33 = v32[5];
        v32[5] = v33 + 1;
        if ( v33 == -1 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v19 = v31->SchedulerAssist;
      if ( v19 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v28 = v19[5] - 1;
          v19[5] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      do
        KeYieldProcessorEx(&v39, v20, v21);
      while ( CurrentPrcb->PrcbLock );
      v22 = v31->SchedulerAssist;
      if ( v22 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v23 = v22[5];
          v22[5] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v17, 0LL);
    _enable();
    KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
    *(_BYTE *)(v17 + 643) = 32;
    *(_BYTE *)(v17 + 390) = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v17, v25);
    LOBYTE(v26) = CurrentIrql;
    v27 = KiSwapContext(v17, NextThread, v26);
    v11 = v40;
    if ( !v27 )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_38;
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(v17 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_60:
    if ( KeGetCurrentIrql() >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v34);
    }
  }
LABEL_38:
  __writecr8(1uLL);
  *(_DWORD *)(v17 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_19:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v35 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v35);
  }
  LOBYTE(v3) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v6 )
    LOBYTE(v3) = EtwTracePriority(a1, 1328, v11, v6, 0LL);
  return (char)v3;
}
