/*
 * XREFs of KiSchedulerApc @ 0x1400816F0
 * Callers:
 *     <none>
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14000FF70 (KiSelectReadyThreadEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140015164 (KiCheckForMaxOverQuotaScb.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiSignalThreadForApc @ 0x1400AF130 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AF2B8 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiIsProcessTerminationRequested @ 0x140129868 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x140131888 (KiRemoveQueueApc.c)
 *     KiSetProcessorIdle @ 0x14013AB5C (KiSetProcessorIdle.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 *     DbgkForwardException @ 0x1406F79F8 (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x140880CA8 (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x140880D00 (KiSuspendUmsThread.c)
 */

NTSTATUS __fastcall KiSchedulerApc(__int64 a1)
{
  NTSTATUS result; // eax
  char v3; // r12
  int v4; // r13d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  __int64 NextThread; // rbx
  __int64 v9; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  unsigned __int8 v12; // r14
  struct _KPRCB *v13; // r15
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  char v17; // cl
  KPROCESSOR_MODE v18; // si
  __int64 v19; // rax
  __int16 v20; // bx
  bool v21; // bl
  bool IsThreadRankNonZero; // al
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  struct _KPRCB *v30; // rcx
  struct _KPRCB *v31; // rcx
  unsigned __int8 v32; // r14
  struct _KPRCB *v33; // rbx
  _DWORD *v34; // rcx
  int v35; // eax
  _DWORD *v36; // rcx
  int v37; // eax
  char v38; // bl
  char v39; // al
  struct _KPRCB *v40; // rcx
  unsigned __int8 v41; // si
  struct _KPRCB *v42; // rbx
  _DWORD *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  struct _KPRCB *v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  int v50; // eax
  int v51; // [rsp+38h] [rbp-99h] BYREF
  int v52; // [rsp+3Ch] [rbp-95h] BYREF
  int v53; // [rsp+40h] [rbp-91h] BYREF
  int v54; // [rsp+44h] [rbp-8Dh] BYREF
  int v55; // [rsp+48h] [rbp-89h] BYREF
  int v56[3]; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v57[40]; // [rsp+58h] [rbp-79h] BYREF

  result = (unsigned int)memset(v57, 0, 0x98uLL);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 120) & 0x8000;
  v51 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v52 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = SchedulerAssist[5];
          SchedulerAssist[5] = v26 + 1;
          if ( v26 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v23 = CurrentPrcb->SchedulerAssist;
      if ( v23 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = v23[5] - 1;
          v23[5] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v52);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v9 = *(_QWORD *)(a1 + 104)) != 0
      && (v25 = CurrentPrcb->ScbOffset + v9) != 0
      && KiCheckForMaxOverQuotaScb(v25)
      && (NextThread = (__int64)CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v17 = 1, !IsThreadRankNonZero) )
      {
        v17 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v17;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v29 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
          v29 = (unsigned int)v17;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v29, 0LL);
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread((__int64)CurrentPrcb, a1, v16);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v30);
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      if ( v11 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v28 = v11[5] - 1;
          v11[5] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    {
      v3 = 1;
      KiSuspendUmsThread(a1, &v51);
    }
    v18 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v19 = *(_QWORD *)(a1 + 144);
      if ( v19 )
      {
        --*(_WORD *)(a1 + 486);
        v20 = *(_WORD *)(v19 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v18 = v20 & 1;
      }
    }
    v21 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v32 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v33 = KeGetCurrentPrcb();
      v53 = 0;
      while ( 1 )
      {
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v35 = v34[5];
            v34[5] = v35 + 1;
            if ( v35 == -1 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v36 = v33->SchedulerAssist;
        if ( v36 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v37 = v36[5] - 1;
            v36[5] = v37;
            if ( !v37 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(&v53);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v38 = *(_BYTE *)(a1 + 194);
      v39 = v38 & 0xFD;
      v21 = (v38 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v39;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
      {
        v40 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v40);
      }
      __writecr8(v32);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v18, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v21 )
    {
      v41 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v42 = KeGetCurrentPrcb();
      v54 = 0;
      while ( 1 )
      {
        v43 = v42->SchedulerAssist;
        if ( v43 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v44 = v43[5];
            v43[5] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v45 = v42->SchedulerAssist;
        if ( v45 )
        {
          if ( v42->NestingLevel <= 1u )
          {
            v46 = v45[5] - 1;
            v45[5] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        do
          KeYieldProcessorEx(&v54);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v41 < 2u )
      {
        v47 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v47);
      }
      result = v41;
      __writecr8(v41);
    }
    if ( v3 )
      result = KiResumeUmsThread(a1, &v51);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v55) )
    {
      memset(&v57[2], 0, 0x90uLL);
      v57[0] = v55;
      LOBYTE(v48) = 1;
      v57[1] = 1;
      DbgkForwardException(v57, v48);
      DbgkForwardException(v57, 0LL);
    }
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v13 = KeGetCurrentPrcb();
    v56[0] = 0;
    while ( 1 )
    {
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v49 = v14[5];
          v14[5] = v49 + 1;
          if ( v49 == -1 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v24 = v13->SchedulerAssist;
      if ( v24 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v50 = v24[5] - 1;
          v24[5] = v50;
          if ( !v50 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(v56);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      *(_BYTE *)(a1 + 729) = 1;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      if ( *(_BYTE *)(a1 + 730) )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      LOBYTE(v15) = v12;
      KiSignalThreadForApc(v13, a1 + 648, v15);
    }
    KiReleaseThreadLockSafe(a1);
    return KiExitDispatcher((__int64)v13, 0LL, 1u, 0, v12);
  }
  return result;
}
