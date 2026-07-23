/*
 * XREFs of KiCommitThreadWait @ 0x140055AD0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x14008B050 (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KiComputeDueTime @ 0x14001E090 (KiComputeDueTime.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x1400581E0 (KiInsertTimerTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiTimerWaitTest @ 0x1400C7AB0 (KiTimerWaitTest.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1400FBEE0 (KiProcessThreadWaitList.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1401124F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1401126C0 (KiActivateWaiterPriQueue.c)
 *     KiIncrementConcurrencyCount @ 0x140139474 (KiIncrementConcurrencyCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x14029BB58 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 *v4; // rdi
  int *v5; // r13
  char v6; // r12
  int v7; // r14d
  struct _KPRCB *CurrentPrcb; // r15
  int v10; // ebp
  struct _KPRCB *v11; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  char v16; // al
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  BOOL v27; // ebp
  __int64 v28; // rax
  __int64 v29; // r12
  _BYTE *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  signed __int8 v33; // cf
  struct _KPRCB *v34; // rcx
  bool v35; // si
  _DWORD *v36; // rdx
  int v37; // eax
  _QWORD *v38; // rsi
  _BYTE *v39; // r14
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r14
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  struct _KPRCB *v53; // rsi
  char v54; // bp
  _DWORD *v55; // rcx
  int v56; // eax
  _DWORD *v57; // rcx
  int v58; // eax
  __int64 *v59; // rbp
  volatile signed __int32 *v60; // rsi
  __int64 *v61; // rcx
  __int64 **v62; // rax
  int v64; // [rsp+30h] [rbp-68h] BYREF
  int v65; // [rsp+34h] [rbp-64h] BYREF
  int v66; // [rsp+38h] [rbp-60h] BYREF
  int v67; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v68; // [rsp+40h] [rbp-58h]
  int v69; // [rsp+48h] [rbp-50h]
  char v70; // [rsp+A0h] [rbp+8h]

  v4 = a2;
  v68 = a4;
  v5 = (int *)(a1 + 256);
  v6 = 0;
  v7 = a3;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *v5 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  if ( !*(_BYTE *)(a1 + 391) || (*(_DWORD *)(a1 + 120) & 0x40) == 0 || (v10 = 1, *(char *)(a1 + 195) >= 25) )
    v10 = 0;
  v11 = KeGetCurrentPrcb();
  v65 = 0;
  while ( 1 )
  {
    SchedulerAssist = v11->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5];
        SchedulerAssist[5] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = v11->SchedulerAssist;
    if ( v14 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v15 = v14[5] - 1;
        v14[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    do
      KeYieldProcessorEx(&v65);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v16 = *(_BYTE *)(a1 + 112);
  if ( (v16 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v16 & 0xF8 | 1;
    if ( v10 )
    {
      v17 = KeGetCurrentPrcb();
      v66 = 0;
      while ( 1 )
      {
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v19 = v18[5];
            v18[5] = v19 + 1;
            if ( v19 == -1 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
          break;
        v20 = v17->SchedulerAssist;
        if ( v20 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v21 = v20[5] - 1;
            v20[5] = v21;
            if ( !v21 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v66);
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v23 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        __fastfail(3u);
      v23->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v23;
      CurrentPrcb->WaitListHead.Blink = v23;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v26 = v25[5] - 1;
          v25[5] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
    v27 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x80000) != 0 && (*(_DWORD *)(a1 + 120) & 0x4000) != 0 )
      v27 = !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u);
    v70 = 0;
    if ( v7 != 2
      || (v28 = *(unsigned int *)(a1 + 1504), !*(_BYTE *)(a1 + 391))
      || *(_DWORD *)(a1 + 484)
      || *(_BYTE *)(a1 + 390) )
    {
      v29 = v68;
    }
    else
    {
      v29 = v68;
      if ( !*(_BYTE *)(a1 + 192) )
      {
        v70 = 1;
        if ( (_DWORD)v28 )
          v29 = v28 + v68;
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v30 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      if ( v44 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v45 = v44[5] - 1;
          v44[5] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
    }
    else
    {
      _m_prefetchw(v30);
      if ( (*v30 & 0x7F) == 0x15 )
      {
        v31 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        v32 = 4 * v31 + 536;
        *(_DWORD *)(a1 + 540) = v31 | 0x100;
      }
      else
      {
        v32 = 40LL;
      }
      _InterlockedDecrement((volatile signed __int32 *)&v30[v32]);
      v33 = _interlockedbittestandset((volatile signed __int32 *)v30, 7u);
      *(_QWORD *)(a1 + 64) = 0LL;
      v34 = KeGetCurrentPrcb();
      v35 = !v33;
      v36 = v34->SchedulerAssist;
      if ( v36 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v37 = v36[5] - 1;
          v36[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      if ( v35 )
      {
        if ( (*v30 & 0x7F) == 0x15 )
        {
          KiActivateWaiterPriQueue(v30);
          goto LABEL_82;
        }
        if ( *((_DWORD *)v30 + 10) < *((_DWORD *)v30 + 11) )
        {
          v38 = (_QWORD *)*((_QWORD *)v30 + 3);
          v39 = v30 + 24;
          if ( v38 != (_QWORD *)(v30 + 24) && *((_BYTE **)v30 + 1) != v30 + 8 )
          {
            v40 = *v38;
            v41 = (_QWORD *)v38[1];
            if ( *(_QWORD **)(*v38 + 8LL) != v38 || (_QWORD *)*v41 != v38 )
              __fastfail(3u);
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
            *v38 = 0LL;
            if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), v30, v38) )
            {
              --*((_DWORD *)v30 + 1);
              v7 = a3;
              _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
              goto LABEL_82;
            }
            v42 = *(_QWORD *)v39;
            if ( *(_BYTE **)(*(_QWORD *)v39 + 8LL) != v39 )
              __fastfail(3u);
            *v38 = v42;
            v38[1] = v39;
            *(_QWORD *)(v42 + 8) = v38;
            *(_QWORD *)v39 = v38;
          }
          v7 = a3;
        }
        _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
      }
      else
      {
        KiActivateWaiterQueueWithNoLocks(a1, v30, 0LL);
      }
    }
LABEL_82:
    if ( v27 )
      KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
    *(_BYTE *)(a1 + 565) = 0;
    if ( !v7 )
      return KiSwapThread(a1, CurrentPrcb);
    if ( v7 == 2 )
    {
      v46 = v29 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
      *((_QWORD *)v5 + 3) = v46;
      v46 >>= 18;
      v64 = (unsigned __int8)v46;
      v69 = *v5;
      BYTE1(v69) &= ~1u;
      BYTE2(v69) = v46;
      *v5 = v69;
      if ( v70 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2000LL));
    }
    else if ( !(unsigned int)KiComputeDueTime(v5, v29, 0, &v64) )
    {
      goto LABEL_94;
    }
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)v5, 0, v64, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v47) = 1;
        KiTraceSetTimer(v5, 0LL, v47);
      }
      else
      {
        _InterlockedAnd(v5, 0xFFFFFF7F);
      }
      return KiSwapThread(a1, CurrentPrcb);
    }
LABEL_94:
    KiTimerWaitTest(CurrentPrcb, v5, 0LL);
    return KiSwapThread(a1, CurrentPrcb);
  }
  if ( (v16 & 7) == 0 )
  {
    if ( (v16 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
    }
    else
    {
      v49 = (v16 & 0x40) == 0;
      v6 = 1;
      v50 = 192LL;
      if ( v49 )
        v50 = 257LL;
      *(_QWORD *)(a1 + 200) = v50;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v51 = *(_QWORD *)(a1 + 232);
    if ( v51 )
      KiIncrementConcurrencyCount(v51, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( v7 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v48 = *(_QWORD *)(a1 + 200);
  if ( v6 )
  {
    v53 = KeGetCurrentPrcb();
    v54 = *(_BYTE *)(a1 + 391);
    v67 = 0;
    while ( 1 )
    {
      v55 = v53->SchedulerAssist;
      if ( v55 )
      {
        if ( v53->NestingLevel <= 1u )
        {
          v56 = v55[5];
          v55[5] = v56 + 1;
          if ( v56 == -1 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v57 = v53->SchedulerAssist;
      if ( v57 )
      {
        if ( v53->NestingLevel <= 1u )
        {
          v58 = v57[5] - 1;
          v57[5] = v58;
          if ( !v58 )
            KiRemoveSystemWorkPriorityKick(v53);
        }
      }
      do
        KeYieldProcessorEx(&v67);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( v48 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v54 + a1 + 114) )
        {
          *(_BYTE *)(v54 + a1 + 114) = 0;
        }
        else if ( v54 )
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
  v59 = &v4[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v4 + 17) < 5u )
    {
      v60 = (volatile signed __int32 *)v4[4];
      KiAcquireKobjectLockSafe(v60);
      if ( *((_BYTE *)v4 + 17) == 4 )
      {
        v61 = (__int64 *)*v4;
        v62 = (__int64 **)v4[1];
        if ( *(__int64 **)(*v4 + 8) != v4 || *v62 != v4 )
          __fastfail(3u);
        *v62 = v61;
        v61[1] = (__int64)v62;
      }
      _InterlockedAnd(v60, 0xFFFFFF7F);
    }
    v4 += 6;
  }
  while ( v4 != v59 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  LOBYTE(v52) = 1;
  KiExitThreadWait(CurrentPrcb, a1, v52);
  return v48;
}
