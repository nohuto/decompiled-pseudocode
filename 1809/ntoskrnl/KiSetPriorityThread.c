/*
 * XREFs of KiSetPriorityThread @ 0x1400CF6C0
 * Callers:
 *     KiSetPriorityFloor @ 0x14002509C (KiSetPriorityFloor.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400CE670 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KiSetPriorityBoost @ 0x140117558 (KiSetPriorityBoost.c)
 *     KiClearPriorityFloor @ 0x14011F7AC (KiClearPriorityFloor.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KiInsertDeferredReadyList @ 0x1400ACB08 (KiInsertDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EE5C (KiAbQueueAutoBoostDpc.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140117384 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1401177F0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, __int64 a2, char a3)
{
  int v3; // r14d
  unsigned int v4; // eax
  char v5; // si
  int v8; // r10d
  int v9; // ebp
  char v10; // al
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v12; // r9
  char v13; // dl
  int v14; // r13d
  int v15; // r14d
  int v16; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v18; // rdx
  bool v19; // zf
  struct _KPRCB *v20; // rdi
  _QWORD *v21; // rax
  struct _KPRCB *v22; // rcx
  _KTHREAD *NextThread; // r15
  struct _SINGLE_LIST_ENTRY *v24; // rdx
  char v25; // al
  void *SchedulerAssist; // rcx
  __int64 v27; // rdx
  bool v28; // cc
  _QWORD *v29; // rax
  char v30; // si
  __int64 v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // eax
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  int v37; // eax
  int v39; // [rsp+20h] [rbp-38h]
  struct _KPRCB *v40; // [rsp+60h] [rbp+8h] BYREF
  int v41; // [rsp+70h] [rbp+18h]
  volatile signed __int64 *v42; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 1408);
  v5 = a3;
  if ( v4 )
  {
    _BitScanReverse((unsigned int *)&v8, v4);
    if ( a3 < v8 )
      v5 = v8;
    v41 = v8;
  }
  v9 = v5;
  if ( *(char *)(a1 + 195) == v5 )
    return 0;
  v39 = v3;
  v10 = KiAcquireThreadStateLock(a1, &v40, &v42);
  v13 = *(_BYTE *)(a1 + 195);
  v14 = 0;
  v15 = 0;
  v16 = v13;
  if ( v10 != 2 )
  {
    if ( v10 != 1 )
    {
      if ( v10 == 3 )
      {
        v20 = v40;
        LOBYTE(v12) = 1;
        KiUpdateThreadPriority(v40, a1, (unsigned int)v5, v12);
        if ( v5 >= v16 )
        {
          v15 = v5;
        }
        else
        {
          v21 = KiSelectReadyThreadEx(v20, (_KTHREAD *)a1, 0LL);
          if ( v21 )
          {
            KiUpdatePriorityMatrixThreadState(v20, v21, 2LL, 3LL);
            KiInsertDeferredReadyList(a2, a1);
          }
        }
        goto LABEL_50;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v5 > v13 )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v18 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
            {
              v18->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v18;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      v19 = (*(_DWORD *)(a1 + 120) & 0x400000) == 0;
      *(_BYTE *)(a1 + 195) = v5;
      if ( !v19 )
      {
        LOBYTE(p_AbPropagateBoostsList) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 1512), (unsigned int)v5, p_AbPropagateBoostsList, v12);
      }
LABEL_49:
      v20 = v40;
      goto LABEL_50;
    }
    v20 = v40;
    KiRemoveThreadFromAnyReadyQueue(v40, v42, a1, (unsigned int)v13, v39);
    KiUpdateThreadPriority(0LL, a1, (unsigned int)v5, 0LL);
    KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v5, a2);
LABEL_50:
    v30 = 0;
    goto LABEL_51;
  }
  v22 = KeGetCurrentPrcb();
  NextThread = v40->NextThread;
  if ( v5 > v13 )
  {
    if ( *(_BYTE *)(a1 + 793) )
    {
      v24 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
      if ( *(_QWORD *)(a1 + 1376) == 1LL )
      {
        p_AbPropagateBoostsList = &v22->AbPropagateBoostsList;
        if ( v22 != (struct _KPRCB *)-25720LL )
        {
          v24->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v24;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
          KiAbQueueAutoBoostDpc(v22);
        }
      }
    }
  }
  v20 = v40;
  *(_BYTE *)(a1 + 195) = v5;
  if ( !NextThread )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
    {
      v19 = (unsigned __int8)KiIsThreadRankNonZero(a1, v20) == 0;
      v25 = 1;
      if ( v19 )
        v25 = *(_BYTE *)(a1 + 195);
      v5 = v25;
    }
    *v20->PriorityState = v5;
    SchedulerAssist = v20->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v27 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a1 != v20->IdleThread )
        v27 = (unsigned int)v5;
      KiSetSchedulerAssistPriority(SchedulerAssist, v27, 0LL, v12);
    }
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    LOBYTE(p_AbPropagateBoostsList) = 1;
    KiSetSchedulerAssistPriority(
      *(_QWORD *)(a1 + 1512),
      (unsigned int)*(char *)(a1 + 195),
      p_AbPropagateBoostsList,
      v12);
  }
  v28 = v9 <= v16;
  if ( v9 >= v16 )
  {
LABEL_45:
    if ( v28 || NextThread )
      goto LABEL_50;
    if ( *(_BYTE *)(a1 + 388) == 2 )
      v15 = v9;
    goto LABEL_49;
  }
  if ( NextThread )
  {
    v28 = v9 <= v16;
    goto LABEL_45;
  }
  v20 = v40;
  if ( *(_BYTE *)(a1 + 388) != 2 )
  {
    if ( v40->ReadySummary >> (v9 + 1) )
      *(_BYTE *)(a1 + 112) |= 0x10u;
    goto LABEL_50;
  }
  v29 = KiSelectReadyThreadEx(v40, (_KTHREAD *)a1, 0LL);
  if ( !v29 )
    goto LABEL_50;
  KiUpdatePriorityMatrixThreadState(v20, v29, 2LL, 3LL);
  v30 = 1;
LABEL_51:
  v31 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 24896);
  if ( v31 )
    LOBYTE(v14) = (v31 & *(_QWORD *)(a1 + 576)) == v31;
  if ( v14 != ((*(_DWORD *)(a1 + 120) >> 13) & 1) )
  {
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
    v20 = v40;
  }
  if ( v20 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&v20->PrcbLock, 0LL);
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v34 = v33[5] - 1;
        v33[5] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  if ( v42 )
  {
    _InterlockedAnd64(v42, 0LL);
    v35 = KeGetCurrentPrcb();
    v36 = v35->SchedulerAssist;
    if ( v36 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v37 = v36[5] - 1;
        v36[5] = v37;
        if ( !v37 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  if ( v30 && KeGetPcr()->Prcb.Number != v40->Number )
    KiSendSoftwareInterrupt();
  if ( v15 > 0 )
    KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v40, (unsigned int)v15);
  return 1;
}
