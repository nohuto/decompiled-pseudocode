/*
 * XREFs of KeSetActualBasePriorityThread @ 0x140012650
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x1400807B0 (IoApplyPriorityInfoThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14009A66C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140105330 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14013A9DC (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiFlushAllHintedStorePages @ 0x1401406F8 (MiFlushAllHintedStorePages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140149600 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014C91C (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401572CC (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     MiWakeModifiedPageWriter @ 0x14015C314 (MiWakeModifiedPageWriter.c)
 *     PfpServiceMainThreadUnboost @ 0x14015E710 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x140169948 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x14017FDA8 (PopCreatePowerThread.c)
 *     MiSetZeroPageThreadPriority @ 0x140185264 (MiSetZeroPageThreadPriority.c)
 *     MiMappedPageWriter @ 0x14018C6A0 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x14018F980 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x1401924B0 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140198EA0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxEmergencyWorker @ 0x14019D8F0 (PopFxEmergencyWorker.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x14078126C (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140012B6C (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x14032E128 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rbp
  _DWORD *SchedulerAssist; // rcx
  unsigned int v7; // eax
  unsigned int v8; // esi
  struct _KPRCB *v9; // rcx
  char v10; // al
  __int64 updated; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r8
  _BYTE *v14; // rcx
  __int64 v15; // rdx
  _KTHREAD *v16; // rbp
  struct _SINGLE_LIST_ENTRY *v18; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  __int64 v20; // rdx
  struct _KPRCB *v21; // r15
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // r15
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
  _QWORD *v39; // [rsp+98h] [rbp+20h] BYREF

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
LABEL_63:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, a2);
      }
    }
    do
      KeYieldProcessorEx(&v36);
    while ( *(_QWORD *)(a1 + 64) );
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v25[5];
        v25[5] = v31 + 1;
        if ( v31 == -1 )
          goto LABEL_63;
      }
    }
  }
  v7 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v8 = v7;
  v9 = KeGetCurrentPrcb();
  if ( (char)v37 < (char)v7 )
  {
    if ( *(_BYTE *)(a1 + 1423) )
    {
      v18 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1384);
      if ( *(_QWORD *)(a1 + 1384) == 1LL )
      {
        p_AbSelfIoBoostsList = &v9->AbSelfIoBoostsList;
        if ( v9 != (struct _KPRCB *)-25712LL )
        {
          v18->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v18;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v9);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v37;
  v10 = *(_BYTE *)(a1 + 564);
  if ( v10 )
  {
    if ( (v10 & 0xF) != 0 )
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
    v12 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v13 = v37;
    *(_QWORD *)(a1 + 32) = v12;
    KiSetPriorityThread((_BYTE *)a1, (__int64 *)&v39, v13);
  }
  v14 = *(_BYTE **)(a1 + 232);
  if ( v14 && (*v14 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v14, a1);
  else
    KiReleaseThreadLockSafe(a1);
  KiReadyDeferredReadyList((__int64)CurrentPrcb, &v39);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2LL);
    goto LABEL_21;
  }
  v16 = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(v16, 0LL);
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
LABEL_72:
          KiRemoveSystemWorkPriorityKick(v21, v20);
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
            KiRemoveSystemWorkPriorityKick(v21, v20);
        }
      }
      do
        KeYieldProcessorEx(&v38);
      while ( CurrentPrcb->PrcbLock );
      v28 = v21->SchedulerAssist;
      if ( v28 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v34 = v28[5];
          v28[5] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_72;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, v16, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    KiSetThreadState(NextThread, 2LL);
    v16->WaitReason = 32;
    v16->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, v16);
    if ( !(unsigned __int8)KiSwapContext(v16, NextThread, CurrentIrql) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_49;
    goto LABEL_52;
  }
  if ( (v16->MiscFlags & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
LABEL_52:
    v26 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v26, v15);
  }
LABEL_49:
  __writecr8(1uLL);
  v16->MiscFlags &= ~0x40u;
  KiDeliverApc(0LL, 0LL, 0LL);
LABEL_19:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
  {
    v35 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v35, v15);
  }
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v8, v37, (__int64)&v37);
  return v8;
}
