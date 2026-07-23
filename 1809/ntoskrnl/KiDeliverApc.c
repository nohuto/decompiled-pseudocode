/*
 * XREFs of KiDeliverApc @ 0x140058490
 * Callers:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiContinueEx @ 0x1400A2480 (KiContinueEx.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     KiApcInterrupt @ 0x1401C0BD0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1401C11E0 (KiInitiateUserApc.c)
 *     KeRemovePriorityBoost @ 0x14028E134 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeTestAlertThread @ 0x1400A2610 (KeTestAlertThread.c)
 *     KiCheckForSListAddress @ 0x140107DC0 (KiCheckForSListAddress.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiInitializeUserApc @ 0x140128774 (KiInitializeUserApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall KiDeliverApc(char a1, int a2, _KTRAP_FRAME *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v5; // zf
  _KTRAP_FRAME *TrapFrame; // r15
  ULONG_PTR Process; // r12
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v8; // rdi
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
  struct _LIST_ENTRY *v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _LIST_ENTRY *v24; // r13
  _LIST_ENTRY *v25; // rdi
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // rsi
  _DWORD *v28; // rcx
  unsigned __int8 UserApcPendingAll; // si
  _LIST_ENTRY *v30; // rcx
  _LIST_ENTRY *v31; // rdx
  struct _LIST_ENTRY *v32; // rax
  unsigned __int8 v33; // al
  __int64 v34; // rcx
  char v35; // si
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
  struct _KPRCB *v46; // rcx
  struct _KPRCB *v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  unsigned __int8 v51; // al
  _LIST_ENTRY *v52; // rcx
  struct _KPRCB *v53; // rcx
  signed __int32 v54[8]; // [rsp+0h] [rbp-59h] BYREF
  struct _LIST_ENTRY *v55; // [rsp+40h] [rbp-19h] BYREF
  struct _LIST_ENTRY *v56; // [rsp+48h] [rbp-11h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+50h] [rbp-9h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+58h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v59; // [rsp+60h] [rbp+7h]
  int v62; // [rsp+D0h] [rbp+77h] BYREF
  int v63; // [rsp+D8h] [rbp+7Fh] BYREF

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
    _InterlockedOr(v54, 0);
    v8 = &CurrentThread->152;
    while ( 1 )
    {
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v8->ApcState.ApcListHead[0].Flink == v8 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      v62 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v39 = SchedulerAssist[5];
          SchedulerAssist[5] = v39 + 1;
          if ( v39 == -1 )
LABEL_60:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v40 = v22[5] - 1;
            v22[5] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v62);
        while ( CurrentThread->ThreadLock );
        v23 = CurrentPrcb->SchedulerAssist;
        if ( v23 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v23[5];
            v23[5] = v41 + 1;
            if ( v41 == -1 )
              goto LABEL_60;
          }
        }
      }
      Flink = v8->ApcState.ApcListHead[0].Flink;
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v8->ApcState.ApcListHead[0].Flink == v8 )
        break;
      CurrentThread->ApcState.KernelApcPending = 0;
      v13 = Flink - 1;
      _m_prefetchw(&Flink[-1]);
      v14 = Flink[1].Flink;
      v55 = Flink[2].Flink;
      Blink = Flink[2].Blink;
      v57 = Flink[3].Flink;
      v56 = Flink[3].Blink;
      if ( v55 )
      {
        if ( CurrentThread->ApcState.InProgressFlags || CurrentThread->KernelApcDisable )
        {
          KiReleaseThreadLockSafe(CurrentThread);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v46);
          }
          __writecr8(1uLL);
          goto LABEL_17;
        }
        v20 = Flink->Flink;
        v21 = Flink->Blink;
        if ( Flink->Flink->Blink != Flink || v21->Flink != Flink )
          goto LABEL_107;
        v21->Flink = v20;
        v20->Blink = v21;
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
          &v55,
          &Blink,
          &v57,
          &v56);
        if ( v55 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v45 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v45);
          }
          __writecr8(0LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *, struct _LIST_ENTRY *))v55)(Blink, v57, v56);
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
          goto LABEL_107;
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
          &v55,
          &Blink,
          &v57,
          &v56);
        CurrentThread->ApcState.InProgressFlags &= ~2u;
      }
    }
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(1uLL);
LABEL_16:
    if ( a1 == 1 )
    {
      v24 = &CurrentThread->ApcState.ApcListHead[1];
      if ( v24->Flink != v24 )
      {
        v59 = 0LL;
        v25 = 0LL;
        v55 = 0LL;
        Blink = 0LL;
        v57 = 0LL;
        v56 = 0LL;
        v26 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v27 = KeGetCurrentPrcb();
        v63 = 0;
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v48 = v28[5];
            v28[5] = v48 + 1;
            if ( v48 == -1 )
LABEL_93:
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v37 = v27->SchedulerAssist;
          if ( v37 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v49 = v37[5] - 1;
              v37[5] = v49;
              if ( !v49 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          do
            KeYieldProcessorEx(&v63);
          while ( CurrentThread->ThreadLock );
          v38 = v27->SchedulerAssist;
          if ( v38 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v50 = v38[5];
              v38[5] = v50 + 1;
              if ( v50 == -1 )
                goto LABEL_93;
            }
          }
        }
        UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
        CurrentThread->ApcState.UserApcPendingAll = UserApcPendingAll & 0xFD;
        v30 = v24->Flink;
        if ( v24->Flink != v24 )
        {
          while ( 1 )
          {
            v25 = v30 - 1;
            _m_prefetchw(&v30[-1]);
            if ( (__int64 (__fastcall *)(int, int, int, int, __int64))v30[1].Flink == KeSpecialUserApcKernelRoutine
              || (UserApcPendingAll & 2) != 0 )
            {
              break;
            }
            v30 = v30->Flink;
            v25 = 0LL;
            if ( v30 == v24 )
              goto LABEL_44;
          }
          v59 = v30[1].Flink;
          v55 = v25[3].Flink;
          Blink = v25[3].Blink;
          v57 = v25[4].Flink;
          v56 = v25[4].Blink;
          v31 = v30->Flink;
          v32 = v30->Blink;
          if ( v30->Flink->Blink != v30 || v32->Flink != v30 )
LABEL_107:
            __fastfail(3u);
          v32->Flink = v31;
          v31->Blink = v32;
          BYTE2(v25[5].Flink) = 0;
          v33 = CurrentThread->ApcState.UserApcPendingAll;
          if ( (v33 & 1) != 0 )
          {
            v51 = v33 & 0xFE;
            CurrentThread->ApcState.UserApcPendingAll = v51;
            v52 = v24->Flink;
            if ( v24->Flink != v24 )
            {
              while ( (__int64 (__fastcall *)(int, int, int, int, __int64))v52[1].Flink != KeSpecialUserApcKernelRoutine )
              {
                v52 = v52->Flink;
                if ( v52 == v24 )
                  goto LABEL_44;
              }
              CurrentThread->ApcState.UserApcPendingAll = v51 | 1;
            }
          }
        }
LABEL_44:
        KiReleaseThreadLockSafe(CurrentThread);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v53);
        }
        __writecr8(1uLL);
        if ( v25 )
        {
          ((void (__fastcall *)(_LIST_ENTRY *, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **, struct _LIST_ENTRY **))v59)(
            v25,
            &v55,
            &Blink,
            &v57,
            &v56);
          v35 = UserApcPendingAll & 2;
          if ( v55 )
          {
            if ( v35 )
            {
              v36 = 1;
LABEL_49:
              KiInitializeUserApc(a2, (_DWORD)a3, (_DWORD)v55, (_DWORD)Blink, (__int64)v57, (__int64)v56, v36);
              goto LABEL_17;
            }
          }
          else if ( v35 )
          {
            LOBYTE(v34) = 1;
            KeTestAlertThread(v34);
            goto LABEL_17;
          }
          v36 = 0;
          goto LABEL_49;
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
