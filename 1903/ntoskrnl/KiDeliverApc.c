/*
 * XREFs of KiDeliverApc @ 0x140043310
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KiContinueEx @ 0x14001BA10 (KiContinueEx.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x1400478B0 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x1400746F0 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KiBeginThreadWait @ 0x1400BA600 (KiBeginThreadWait.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KiApcInterrupt @ 0x1401C7B50 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401C8010 (KiInitiateUserApc.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 * Callees:
 *     KeTestAlertThread @ 0x14001BBA0 (KeTestAlertThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiCheckForSListAddress @ 0x1400FFCE0 (KiCheckForSListAddress.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiInitializeUserApc @ 0x14012BB10 (KiInitializeUserApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  $6EAC78A6FCFADE0A5FA44F358736B38F *v8; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v13; // rsi
  struct _LIST_ENTRY *v14; // r13
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  ULONG_PTR v19; // r8
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _LIST_ENTRY *v26; // rsi
  _LIST_ENTRY *v27; // rdi
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r13
  _DWORD *v30; // rcx
  unsigned __int8 UserApcPendingAll; // r13
  _LIST_ENTRY *v32; // rcx
  _LIST_ENTRY *v33; // rdx
  struct _LIST_ENTRY *v34; // rax
  unsigned __int8 v35; // al
  int v36; // eax
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  struct _KPRCB *v43; // rcx
  struct _KPRCB *v44; // rcx
  struct _KPRCB *v45; // rcx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  struct _KPRCB *v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned __int8 v52; // al
  _LIST_ENTRY *v53; // rcx
  struct _KPRCB *v54; // rcx
  signed __int32 v55[8]; // [rsp+0h] [rbp-59h] BYREF
  struct _LIST_ENTRY *v56; // [rsp+40h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+48h] [rbp-11h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+50h] [rbp-9h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+58h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v60; // [rsp+60h] [rbp+7h]
  int v63; // [rsp+D0h] [rbp+77h] BYREF
  int v64; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a3 )
    KiCheckForSListAddress(a3);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->SpecialApcDisable == 0;
  TrapFrame = CurrentThread->TrapFrame;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  CurrentThread->TrapFrame = a3;
  CurrentThread->ApcState.KernelApcPending = 0;
  if ( v5 )
  {
    _InterlockedOr(v55, 0);
    v8 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v8->ApcState.ApcListHead[0].Flink == v8 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      v63 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = SchedulerAssist[5];
          SchedulerAssist[5] = v39 + 1;
          if ( v39 == -1 )
LABEL_61:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v24 = CurrentPrcb->SchedulerAssist;
        if ( v24 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v40 = v24[5] - 1;
            v24[5] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v63);
        while ( CurrentThread->ThreadLock );
        v25 = CurrentPrcb->SchedulerAssist;
        if ( v25 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v25[5];
            v25[5] = v41 + 1;
            if ( v41 == -1 )
              goto LABEL_61;
          }
        }
      }
      Flink = v8->ApcState.ApcListHead[0].Flink;
      if ( ($6EAC78A6FCFADE0A5FA44F358736B38F *)v8->ApcState.ApcListHead[0].Flink == v8 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v13 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v14 = Flink[1].Flink;
      v56 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v58 = Flink[3].Flink;
      v57 = Flink[3].Blink;
      if ( v56 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          CurrentThread->ThreadLock = 0LL;
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v46 = v21[5] - 1;
              v21[5] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v47);
          }
          __writecr8(1uLL);
          goto LABEL_17;
        }
        v22 = Flink->Flink;
        v23 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v23->Flink != Flink )
          goto LABEL_111;
        v23->Flink = v22;
        v22->Blink = v23;
        BYTE2(v13[5].Flink) = 0;
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v44);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags = 1;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v14)(
          v13,
          &v56,
          &Blink,
          &v58,
          &v57);
        if ( v56 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v45);
          }
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v56)(Blink, v58, v57);
          KeGetCurrentIrql();
          __writecr8(1uLL);
        }
        CurrentThread->ApcState.InProgressFlags = 0;
      }
      else
      {
        v15 = Flink->Flink;
        v16 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v16->Flink != Flink )
          goto LABEL_111;
        v16->Flink = v15;
        v15->Blink = v16;
        BYTE2(v13[5].Flink) = 0;
        CurrentThread->ThreadLock = 0LL;
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v42 = v18[5] - 1;
            v18[5] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v43);
        }
        __writecr8(1uLL);
        CurrentThread->ApcState.InProgressFlags |= 2u;
        ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v14)(
          v13,
          &v56,
          &Blink,
          &v58,
          &v57);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
    }
    __writecr8(1uLL);
LABEL_16:
    if ( a1 == 1 )
    {
      v26 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v26->Flink != v26 )
      {
        v60 = 0LL;
        v27 = 0LL;
        v56 = 0LL;
        Blink = 0LL;
        v58 = 0LL;
        v57 = 0LL;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v29 = KeGetCurrentPrcb();
        v64 = 0;
        v30 = v29->SchedulerAssist;
        if ( v30 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v49 = v30[5];
            v30[5] = v49 + 1;
            if ( v49 == -1 )
LABEL_97:
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v37 = v29->SchedulerAssist;
          if ( v37 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v50 = v37[5] - 1;
              v37[5] = v50;
              if ( !v50 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
          do
            KeYieldProcessorEx(&v64);
          while ( CurrentThread->ThreadLock );
          v38 = v29->SchedulerAssist;
          if ( v38 )
          {
            if ( v29->NestingLevel <= 1u )
            {
              v51 = v38[5];
              v38[5] = v51 + 1;
              if ( v51 == -1 )
                goto LABEL_97;
            }
          }
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        v32 = v26->Flink;
        if ( v26->Flink != v26 )
        {
          while ( 1 )
          {
            v27 = v32 - 1;
            _m_prefetchw(&v32[-1]);
            if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v32[1].Flink == KeSpecialUserApcKernelRoutine
              || (UserApcPendingAll & 2) != 0 )
            {
              break;
            }
            v32 = v32->Flink;
            v27 = 0LL;
            if ( v32 == v26 )
              goto LABEL_45;
          }
          v60 = v32[1].Flink;
          v56 = v27[3].Flink;
          Blink = v27[3].Blink;
          v58 = v27[4].Flink;
          v57 = v27[4].Blink;
          v33 = v32->Flink;
          v34 = v32->Blink;
          if ( v32->Flink->Blink != v32 || v34->Flink != v32 )
LABEL_111:
            __fastfail(3u);
          v34->Flink = v33;
          v33->Blink = v34;
          BYTE2(v27[5].Flink) = 0;
          v35 = CurrentThread->ApcState.UserApcPendingAll;
          if ( (v35 & 1) != 0 )
          {
            v52 = v35 & 0xFE;
            CurrentThread->ApcState.UserApcPendingAll = v52;
            v53 = v26->Flink;
            if ( v26->Flink != v26 )
            {
              while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v53[1].Flink != KeSpecialUserApcKernelRoutine )
              {
                v53 = v53->Flink;
                if ( v53 == v26 )
                  goto LABEL_45;
              }
              CurrentThread->ApcState.UserApcPendingAll = v52 | 1;
            }
          }
        }
LABEL_45:
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        __writecr8(1uLL);
        if ( v27 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v60)(
            v27,
            &v56,
            &Blink,
            &v58,
            &v57);
          if ( (UserApcPendingAll & 2) != 0 )
          {
            if ( !v56 )
            {
              KeTestAlertThread(1);
              goto LABEL_17;
            }
            v36 = 1;
          }
          else
          {
            v36 = 0;
          }
          KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v56, (_DWORD)Blink, (__int64)v58, (__int64)v57, v36);
        }
      }
    }
  }
LABEL_17:
  v19 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v19 != Process )
    KeBugCheckEx(5u, Process, v19, CurrentThread->ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  CurrentThread->TrapFrame = TrapFrame;
}
