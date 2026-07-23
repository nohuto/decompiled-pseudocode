/*
 * XREFs of KeSetPriorityBoost @ 0x1400CEF60
 * Callers:
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400E1528 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x140107EE4 (FsRtlpDoBoost.c)
 *     CmpBoostActiveHiveWriter @ 0x1406D0458 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1401177F0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeSetPriorityBoost(
        __int64 a1,
        __int64 a2,
        _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList,
        unsigned __int64 a4)
{
  __int64 result; // rax
  char v6; // r15
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  char v9; // al
  struct _KPRCB *v10; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  char v15; // dl
  char v16; // cl
  unsigned int v17; // eax
  int v18; // r14d
  char v19; // al
  char v20; // r15
  int v21; // r12d
  int v22; // r13d
  struct _KPRCB *v23; // rsi
  _QWORD *v24; // rax
  struct _KPRCB *v25; // rcx
  _KTHREAD *NextThread; // r15
  struct _SINGLE_LIST_ENTRY *v27; // rdx
  char v28; // dl
  char v29; // al
  void *v30; // rcx
  __int64 v31; // rdx
  bool v32; // cc
  _QWORD *v33; // rax
  int v34; // ecx
  __int64 v35; // rdx
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  int v38; // eax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  unsigned __int64 v42; // rcx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  _QWORD *i; // rbx
  __int64 v46; // rdx
  _KTHREAD *CurrentThread; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _KPRCB *v50; // rbx
  _DWORD *v51; // rcx
  int v52; // eax
  _DWORD *v53; // rcx
  int v54; // eax
  _KTHREAD *v55; // rbx
  bool v56; // zf
  struct _KPRCB *v57; // rcx
  struct _KPRCB *v58; // rcx
  int v59; // [rsp+20h] [rbp-19h]
  struct _KPRCB *v60; // [rsp+28h] [rbp-11h] BYREF
  _QWORD *v61; // [rsp+30h] [rbp-9h] BYREF
  volatile signed __int64 *v62; // [rsp+38h] [rbp-1h] BYREF
  __int64 v63; // [rsp+40h] [rbp+7h]
  unsigned __int64 v64; // [rsp+48h] [rbp+Fh]
  int v65; // [rsp+A8h] [rbp+6Fh]
  int v66; // [rsp+B0h] [rbp+77h] BYREF
  int v67; // [rsp+B8h] [rbp+7Fh] BYREF

  v65 = a2;
  result = (__int64)&KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return result;
  v6 = 0;
  v61 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v63 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = *(_BYTE *)(a1 + 195);
  if ( v9 <= 0 || v9 >= (int)a2 )
  {
LABEL_128:
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)CurrentIrql >= 2u )
      goto LABEL_133;
    goto LABEL_132;
  }
  v10 = KeGetCurrentPrcb();
  v64 = *(_QWORD *)(a1 + 72);
  v66 = 0;
  while ( 1 )
  {
    SchedulerAssist = v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = v10->SchedulerAssist;
    if ( v13 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    do
      KeYieldProcessorEx(&v66, a2, (__int64)p_AbPropagateBoostsList);
    while ( *(_QWORD *)(a1 + 64) );
  }
  result = *(unsigned __int8 *)(a1 + 195);
  if ( (char)result > 0 )
  {
    v15 = v65;
    a4 = (unsigned int)(char)result;
    if ( (int)a4 < v65 )
    {
      v6 = 1;
      v16 = v65 - result;
      v17 = *(_DWORD *)(a1 + 1408);
      *(_BYTE *)(a1 + 564) += 16 * v16;
      if ( v17 )
      {
        _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v17);
        v15 = v65;
        if ( (char)v65 < (int)p_AbPropagateBoostsList )
          v15 = (char)p_AbPropagateBoostsList;
        v59 = (int)p_AbPropagateBoostsList;
        LOBYTE(v65) = v15;
      }
      v18 = v15;
      if ( (_DWORD)a4 == v15 )
        goto LABEL_86;
      v19 = KiAcquireThreadStateLock(a1, &v60, &v62);
      v20 = 0;
      v21 = 0;
      v22 = *(char *)(a1 + 195);
      if ( v19 != 2 )
      {
        if ( v19 == 1 )
        {
          v23 = v60;
          KiRemoveThreadFromAnyReadyQueue(v60, v62, a1, (unsigned int)v22, v59);
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v18, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v18, &v61);
        }
        else if ( v19 == 3 )
        {
          v23 = v60;
          LOBYTE(a4) = 1;
          KiUpdateThreadPriority(v60, a1, (unsigned int)v18, a4);
          if ( v18 >= v22 )
          {
            v21 = v18;
          }
          else
          {
            v24 = KiSelectReadyThreadEx(v23, (_KTHREAD *)a1, 0LL);
            if ( v24 )
            {
              KiUpdatePriorityMatrixThreadState(v23, v24, 2LL, 3LL);
              KiInsertDeferredReadyList((__int64)&v61, a1);
            }
          }
        }
        else
        {
          KiUpdateThreadPriority(0LL, a1, (unsigned int)v18, 0LL);
          v23 = v60;
        }
        goto LABEL_66;
      }
      v25 = KeGetCurrentPrcb();
      NextThread = v60->NextThread;
      if ( (char)v65 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v27 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &v25->AbPropagateBoostsList;
            if ( v25 != (struct _KPRCB *)-25720LL )
            {
              v27->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v27;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
              KiAbQueueAutoBoostDpc(v25);
            }
          }
        }
      }
      v28 = v65;
      v23 = v60;
      *(_BYTE *)(a1 + 195) = v65;
      if ( !NextThread )
      {
        if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
        {
          v56 = (unsigned __int8)KiIsThreadRankNonZero(a1, v23) == 0;
          v29 = 1;
          if ( v56 )
            v29 = *(_BYTE *)(a1 + 195);
          v28 = v29;
        }
        *v23->PriorityState = v28;
        v30 = v23->SchedulerAssist;
        if ( v30 )
        {
          if ( (_KTHREAD *)a1 == v23->IdleThread )
            v31 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v31 = (unsigned int)v28;
          KiSetSchedulerAssistPriority(v30, v31, 0LL, a4);
        }
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(
          *(_QWORD *)(a1 + 1512),
          (unsigned int)*(char *)(a1 + 195),
          p_AbPropagateBoostsList,
          a4);
      }
      v32 = v18 <= v22;
      if ( v18 < v22 )
      {
        if ( !NextThread )
        {
          v23 = v60;
          if ( *(_BYTE *)(a1 + 388) == 2 )
          {
            v33 = KiSelectReadyThreadEx(v60, (_KTHREAD *)a1, 0LL);
            if ( v33 )
            {
              KiUpdatePriorityMatrixThreadState(v23, v33, 2LL, 3LL);
              v20 = 1;
LABEL_66:
              v34 = 0;
              v35 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 24896);
              if ( v35 )
                LOBYTE(v34) = (v35 & *(_QWORD *)(a1 + 576)) == v35;
              if ( v34 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
              {
                _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
                v23 = v60;
              }
              if ( v23 )
              {
                _InterlockedAnd64((volatile signed __int64 *)&v23->PrcbLock, 0LL);
                v36 = KeGetCurrentPrcb();
                v37 = v36->SchedulerAssist;
                if ( v37 )
                {
                  if ( v36->NestingLevel <= 1u )
                  {
                    v38 = v37[5] - 1;
                    v37[5] = v38;
                    if ( !v38 )
                      KiRemoveSystemWorkPriorityKick(v36);
                  }
                }
              }
              if ( v62 )
              {
                _InterlockedAnd64(v62, 0LL);
                v39 = KeGetCurrentPrcb();
                v40 = v39->SchedulerAssist;
                if ( v40 )
                {
                  if ( v39->NestingLevel <= 1u )
                  {
                    v41 = v40[5] - 1;
                    v40[5] = v41;
                    if ( !v41 )
                      KiRemoveSystemWorkPriorityKick(v39);
                  }
                }
              }
              if ( v20 && KeGetPcr()->Prcb.Number != v60->Number )
                KiSendSoftwareInterrupt();
              if ( v21 > 0 )
                KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v60, (unsigned int)v21);
              v6 = 1;
LABEL_86:
              v42 = *(_QWORD *)(a1 + 32);
              if ( v64 > v42
                || (result = (unsigned int)KiLockQuantumTarget, v42 - v64 < (unsigned int)KiLockQuantumTarget) )
              {
                result = v64 + (unsigned int)KiLockQuantumTarget;
                *(_QWORD *)(a1 + 32) = result;
              }
              LOBYTE(CurrentIrql) = v63;
              goto LABEL_90;
            }
          }
          else if ( v60->ReadySummary >> (v18 + 1) )
          {
            *(_BYTE *)(a1 + 112) |= 0x10u;
          }
LABEL_65:
          v20 = 0;
          goto LABEL_66;
        }
        v32 = v18 <= v22;
      }
      if ( !v32 && !NextThread )
      {
        v23 = v60;
        if ( *(_BYTE *)(a1 + 388) == 2 )
          v21 = v18;
      }
      goto LABEL_65;
    }
  }
LABEL_90:
  *(_QWORD *)(a1 + 64) = 0LL;
  v43 = KeGetCurrentPrcb();
  v44 = v43->SchedulerAssist;
  if ( v44 )
  {
    if ( v43->NestingLevel <= 1u )
    {
      result = (unsigned int)(v44[5] - 1);
      v44[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v43);
    }
  }
  if ( !v6 )
    goto LABEL_128;
  for ( i = v61; i; result = KiDeferredReadyThread((__int64)CurrentPrcb, v46, (__int64)p_AbPropagateBoostsList, a4) )
  {
    v46 = (__int64)(i - 27);
    i = (_QWORD *)*i;
  }
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v50 = KeGetCurrentPrcb();
      v67 = 0;
      while ( 1 )
      {
        v51 = v50->SchedulerAssist;
        if ( v51 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v52 = v51[5];
            v51[5] = v52 + 1;
            if ( v52 == -1 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v53 = v50->SchedulerAssist;
        if ( v53 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v54 = v53[5] - 1;
            v53[5] = v54;
            if ( !v54 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v67, v48, v49);
        while ( CurrentPrcb->PrcbLock );
      }
      v55 = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = v55;
      if ( v55->WaitBlockFill6[68] == 1 )
        v55->ReadyTime = v55->ReadyTime - v55->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      v55->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      v56 = (unsigned __int8)KiSwapContext(CurrentThread, v55, (unsigned __int8)CurrentIrql) == 0;
    }
    else
    {
      v56 = (CurrentThread->MiscFlags & 0x40) == 0;
    }
    if ( !v56 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v57);
      }
      __writecr8(1uLL);
      CurrentThread->MiscFlags &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
      goto LABEL_133;
LABEL_132:
    v58 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v58);
LABEL_133:
    result = (unsigned __int8)CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
    return result;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}
