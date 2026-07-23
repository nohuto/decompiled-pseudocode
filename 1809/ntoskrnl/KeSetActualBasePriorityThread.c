/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1400CCFC0
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x1400DEEE0 (IoApplyPriorityInfoThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1400E1194 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011D770 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140135BA0 (SmKmStoreHelperWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140138F10 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     PfpServiceMainThreadUnboost @ 0x140143450 (PfpServiceMainThreadUnboost.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140153CA4 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     PfpServiceMainThreadBoost @ 0x1401594D4 (PfpServiceMainThreadBoost.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopCreatePowerThread @ 0x140176528 (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x140185180 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x140188880 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401918C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxEmergencyWorker @ 0x140192F50 (PopFxEmergencyWorker.c)
 *     MiSetZeroPageThreadPriority @ 0x14019319C (MiSetZeroPageThreadPriority.c)
 *     MiFlushAllHintedStorePages @ 0x1402B8224 (MiFlushAllHintedStorePages.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14075B534 (IopCreatePassiveInterruptRealtimeThreads.c)
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
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140310478 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbp
  _DWORD *SchedulerAssist; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  struct _KPRCB *v10; // rcx
  char v11; // al
  __int64 updated; // rdx
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  _KTHREAD *v15; // rbp
  struct _SINGLE_LIST_ENTRY *v17; // r8
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // rdi
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  struct _KPRCB *v35; // rcx
  int v36; // [rsp+80h] [rbp+8h] BYREF
  int v37; // [rsp+88h] [rbp+10h] BYREF
  int v38; // [rsp+90h] [rbp+18h] BYREF
  __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v37 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v36 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = SchedulerAssist[5];
      SchedulerAssist[5] = v29 + 1;
      if ( v29 == -1 )
LABEL_61:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v24[5] - 1;
        v24[5] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v36, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v25[5];
        v25[5] = v31 + 1;
        if ( v31 == -1 )
          goto LABEL_61;
      }
    }
  }
  v8 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v9 = v8;
  v10 = KeGetCurrentPrcb();
  if ( (char)v37 < (char)v8 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v17 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_AbSelfIoBoostsList = &v10->AbSelfIoBoostsList;
        if ( v10 != (struct _KPRCB *)-25712LL )
        {
          v17->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v17;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v10);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v37;
  v11 = *(_BYTE *)(a1 + 564);
  if ( v11 )
  {
    if ( (v11 & 0xF) != 0 )
      *(_DWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v37 != *(char *)(a1 + 195) )
  {
    if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(a1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, a1, 0LL);
      _enable();
    }
    v13 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    *(_QWORD *)(a1 + 32) = v13;
    KiSetPriorityThread(a1, &v39);
  }
  v14 = *(_BYTE **)(a1 + 232);
  if ( v14 && (*v14 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v14, a1);
  else
    KiReleaseThreadLockSafe(a1);
  KiReadyDeferredReadyList(CurrentPrcb, &v39);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_22;
  }
  v15 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v21 = KeGetCurrentPrcb();
    v38 = 0;
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v32 = v22[5];
        v22[5] = v32 + 1;
        if ( v32 == -1 )
LABEL_70:
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v27 = v21->SchedulerAssist;
      if ( v27 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v33 = v27[5] - 1;
          v27[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v38, v19, v20);
      while ( CurrentPrcb->PrcbLock );
      v28 = v21->SchedulerAssist;
      if ( v28 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v34 = v28[5];
          v28[5] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_70;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v15, 0LL);
    _enable();
    KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
    v15->WaitReason = 32;
    v15->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v15);
    if ( !(unsigned __int8)KiSwapContext(v15, NextThread, CurrentIrql) )
      goto LABEL_20;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_43;
    goto LABEL_50;
  }
  if ( (v15->MiscFlags & 0x40) == 0 )
    goto LABEL_20;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
LABEL_50:
    v26 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v26);
  }
LABEL_43:
  __writecr8(1uLL);
  v15->MiscFlags &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_20:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v35 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v35);
  }
  __writecr8(CurrentIrql);
LABEL_22:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v9, v37, (__int64)&v37);
  return v9;
}
