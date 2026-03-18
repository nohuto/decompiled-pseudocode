/*
 * XREFs of KiCommitThreadWait @ 0x140040740
 * Callers:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiIncrementConcurrencyCount @ 0x14000D358 (KiIncrementConcurrencyCount.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x140042CD0 (KiInsertTimerTable.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiTimerWaitTest @ 0x1400C3730 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1401029D0 (KiComputeDueTime.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x14010D40C (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x1401148D0 (KiProcessThreadWaitList.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x1402B2E40 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // r15
  int v5; // r12d
  __int64 *v7; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  BOOL v10; // r14d
  struct _KPRCB *v11; // rbp
  _DWORD *SchedulerAssist; // rcx
  char v13; // al
  int v14; // edx
  _BYTE *v15; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // r8
  __int64 v23; // rax
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v27; // rcx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  char v31; // bp
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  _QWORD *v34; // rbp
  _BYTE *v35; // r14
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  char v41; // bp
  __int64 v42; // r8
  __int64 *v43; // rbp
  volatile signed __int32 *v44; // r14
  __int64 *v45; // rcx
  __int64 **v46; // rax
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  __int64 v49; // rax
  struct _KPRCB *v50; // rbp
  char v51; // r14
  _DWORD *v52; // rcx
  _BYTE *v53; // rcx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  _DWORD *v67; // rcx
  int v68; // eax
  int v69; // [rsp+30h] [rbp-68h] BYREF
  int v70; // [rsp+34h] [rbp-64h] BYREF
  __int64 v71; // [rsp+38h] [rbp-60h]
  __int64 v72; // [rsp+40h] [rbp-58h]
  __int64 v73; // [rsp+48h] [rbp-50h]
  __int64 v74; // [rsp+50h] [rbp-48h]
  int v75; // [rsp+A0h] [rbp+8h] BYREF
  int v76; // [rsp+A8h] [rbp+10h] BYREF
  char v77; // [rsp+B0h] [rbp+18h]

  v71 = a4;
  v72 = 0LL;
  v4 = a1 + 256;
  v73 = 0LL;
  v5 = 0;
  v74 = 0LL;
  v7 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)v4 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v10 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v11 = KeGetCurrentPrcb();
  v76 = 0;
  SchedulerAssist = v11->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v54 = SchedulerAssist[5];
      SchedulerAssist[5] = v54 + 1;
      if ( v54 == -1 )
LABEL_107:
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v39 = v11->SchedulerAssist;
    if ( v39 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v55 = v39[5] - 1;
        v39[5] = v55;
        if ( !v55 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    do
      KeYieldProcessorEx(&v76);
    while ( *(_QWORD *)(a1 + 64) );
    v40 = v11->SchedulerAssist;
    if ( v40 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v56 = v40[5];
        v40[5] = v56 + 1;
        if ( v56 == -1 )
          goto LABEL_107;
      }
    }
  }
  v13 = *(_BYTE *)(a1 + 112);
  if ( (v13 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 1;
    if ( v10 )
    {
      v24 = KeGetCurrentPrcb();
      v69 = 0;
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v57 = v25[5];
          v25[5] = v57 + 1;
          if ( v57 == -1 )
LABEL_116:
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        v47 = v24->SchedulerAssist;
        if ( v47 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v58 = v47[5] - 1;
            v47[5] = v58;
            if ( !v58 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v69);
        while ( CurrentPrcb->WaitLock );
        v48 = v24->SchedulerAssist;
        if ( v48 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v59 = v48[5];
            v48[5] = v59 + 1;
            if ( v59 == -1 )
              goto LABEL_116;
          }
        }
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v27 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        goto LABEL_76;
      v27->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v27;
      CurrentPrcb->WaitListHead.Blink = v27;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
      v28 = KeGetCurrentPrcb();
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v60 = v29[5] - 1;
          v29[5] = v60;
          if ( !v60 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    v14 = *(_DWORD *)(a1 + 120);
    if ( (v14 & 0x1000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v14 = *(_DWORD *)(a1 + 120);
    }
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & ((v14 & 0x4000) != 0)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v5 = 1;
    }
    v77 = 0;
    if ( a3 == 2 )
    {
      v23 = *(unsigned int *)(a1 + 1504);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v77 = 1;
          if ( (_DWORD)v23 )
            v71 += v23;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v15 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v63 = v17[5] - 1;
          v17[5] = v63;
          if ( !v63 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
LABEL_16:
      if ( v5 )
        KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
      *(_BYTE *)(a1 + 565) = 0;
      if ( !a3 )
        return KiSwapThread(a1, CurrentPrcb);
      if ( a3 == 2 )
      {
        v20 = v71 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(v4 + 24) = v20;
        v20 >>= 18;
        v75 = (unsigned __int8)v20;
        LODWORD(v72) = *(_DWORD *)v4;
        BYTE1(v72) &= ~1u;
        v21 = v77 == 0;
        BYTE2(v72) = v20;
        *(_DWORD *)v4 = v72;
        if ( !v21 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2048LL));
      }
      else if ( !(unsigned int)KiComputeDueTime(v4, v71, 0LL, &v75) )
      {
        goto LABEL_104;
      }
      if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, v4, 0, v75, 0LL) )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          LOBYTE(v22) = 1;
          KiTraceSetTimer(v4, 0LL, v22);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
        }
        return KiSwapThread(a1, CurrentPrcb);
      }
LABEL_104:
      KiTimerWaitTest(CurrentPrcb, v4, 0LL);
      return KiSwapThread(a1, CurrentPrcb);
    }
    _m_prefetchw(v15);
    if ( (*v15 & 0x7F) == 0x15 )
    {
      v38 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v30 = 4 * v38 + 536;
      *(_DWORD *)(a1 + 540) = v38 | 0x100;
    }
    else
    {
      v30 = 40LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&v15[v30]);
    if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
      v31 = 0;
    else
      v31 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    v32 = KeGetCurrentPrcb();
    v33 = v32->SchedulerAssist;
    if ( v33 )
    {
      if ( v32->NestingLevel <= 1u )
      {
        v61 = v33[5] - 1;
        v33[5] = v61;
        if ( !v61 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    if ( !v31 )
    {
      KiActivateWaiterQueueWithNoLocks(a1, v15, 0LL);
      goto LABEL_16;
    }
    if ( (*v15 & 0x7F) == 0x15 )
    {
      KiActivateWaiterPriQueue(v15);
      goto LABEL_16;
    }
    if ( *((_DWORD *)v15 + 10) >= *((_DWORD *)v15 + 11)
      || (v34 = (_QWORD *)*((_QWORD *)v15 + 3), v35 = v15 + 24, v34 == (_QWORD *)(v15 + 24))
      || *((_BYTE **)v15 + 1) == v15 + 8 )
    {
LABEL_50:
      _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      goto LABEL_16;
    }
    v36 = *v34;
    v37 = (_QWORD *)v34[1];
    if ( *(_QWORD **)(*v34 + 8LL) == v34 && (_QWORD *)*v37 == v34 )
    {
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *v34 = 0LL;
      if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), v15, (__int64)v34) )
      {
        --*((_DWORD *)v15 + 1);
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        goto LABEL_16;
      }
      v62 = *(_QWORD *)v35;
      if ( *(_BYTE **)(*(_QWORD *)v35 + 8LL) == v35 )
      {
        *v34 = v62;
        v34[1] = v35;
        *(_QWORD *)(v62 + 8) = v34;
        *(_QWORD *)v35 = v34;
        goto LABEL_50;
      }
    }
LABEL_76:
    __fastfail(3u);
  }
  if ( (v13 & 7) == 0 )
  {
    if ( (v13 & 0x20) == 0 )
    {
      v21 = (v13 & 0x40) == 0;
      v41 = 1;
      v49 = 192LL;
      if ( v21 )
        v49 = 257LL;
      *(_QWORD *)(a1 + 200) = v49;
      goto LABEL_68;
    }
    *(_QWORD *)(a1 + 200) = 256LL;
  }
  v41 = 0;
LABEL_68:
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v53 = *(_BYTE **)(a1 + 232);
    if ( v53 )
      KiIncrementConcurrencyCount(v53, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v18 = *(_QWORD *)(a1 + 200);
  if ( v41 )
  {
    v50 = KeGetCurrentPrcb();
    v51 = *(_BYTE *)(a1 + 391);
    v70 = 0;
    v52 = v50->SchedulerAssist;
    if ( v52 )
    {
      if ( v50->NestingLevel <= 1u )
      {
        v64 = v52[5];
        v52[5] = v64 + 1;
        if ( v64 == -1 )
LABEL_137:
          KiRemoveSystemWorkPriorityKick(v50);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v65 = v50->SchedulerAssist;
      if ( v65 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v66 = v65[5] - 1;
          v65[5] = v66;
          if ( !v66 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      do
        KeYieldProcessorEx(&v70);
      while ( *(_QWORD *)(a1 + 64) );
      v67 = v50->SchedulerAssist;
      if ( v67 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v68 = v67[5];
          v67[5] = v68 + 1;
          if ( v68 == -1 )
            goto LABEL_137;
        }
      }
    }
    if ( v18 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v51 + a1 + 114) )
        {
          *(_BYTE *)(v51 + a1 + 114) = 0;
        }
        else if ( v51 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
    }
    KiReleaseThreadLockSafe(a1);
  }
  v43 = &v7[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v7 + 17) < 5u )
    {
      v44 = (volatile signed __int32 *)v7[4];
      KiAcquireKobjectLockSafe(v44);
      if ( *((_BYTE *)v7 + 17) == 4 )
      {
        v45 = (__int64 *)*v7;
        v46 = (__int64 **)v7[1];
        if ( *(__int64 **)(*v7 + 8) != v7 || *v46 != v7 )
          goto LABEL_76;
        *v46 = v45;
        v45[1] = (__int64)v46;
      }
      _InterlockedAnd(v44, 0xFFFFFF7F);
    }
    v7 += 6;
  }
  while ( v7 != v43 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  LOBYTE(v42) = 1;
  KiExitThreadWait(CurrentPrcb, a1, v42);
  return v18;
}
