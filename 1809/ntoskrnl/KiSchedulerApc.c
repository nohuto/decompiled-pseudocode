/*
 * XREFs of KiSchedulerApc @ 0x1400F1850
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400D2FD4 (KiCheckForMaxOverQuotaScb.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KiSignalThreadForApc @ 0x1400F2004 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400F21A0 (KiInsertQueueApc.c)
 *     KiIsProcessTerminationRequested @ 0x1400F23D8 (KiIsProcessTerminationRequested.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveQueueApc @ 0x14012F4CC (KiRemoveQueueApc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkForwardException @ 0x1406D7B7C (DbgkForwardException.c)
 *     KiResumeUmsThread @ 0x14084691C (KiResumeUmsThread.c)
 *     KiSuspendUmsThread @ 0x140846974 (KiSuspendUmsThread.c)
 */

int __fastcall KiSchedulerApc(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  char v4; // r12
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int8 v9; // r14
  struct _KPRCB *v10; // r15
  _DWORD *v11; // rcx
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *p_Lock; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  KPROCESSOR_MODE v22; // si
  __int64 v23; // rax
  __int16 v24; // bx
  bool v25; // bl
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  struct _KPRCB *v34; // rcx
  struct _KPRCB *v35; // rcx
  unsigned __int8 v36; // r14
  struct _KPRCB *v37; // rbx
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  char v42; // bl
  char v43; // al
  struct _KPRCB *v44; // rcx
  unsigned __int8 v45; // si
  struct _KPRCB *v46; // rbx
  _DWORD *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  struct _KPRCB *v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  int v54; // eax
  int v56; // [rsp+38h] [rbp-99h] BYREF
  int v57; // [rsp+3Ch] [rbp-95h] BYREF
  int v58; // [rsp+40h] [rbp-91h] BYREF
  int v59; // [rsp+44h] [rbp-8Dh] BYREF
  int v60; // [rsp+48h] [rbp-89h] BYREF
  int v61[3]; // [rsp+4Ch] [rbp-85h] BYREF
  _DWORD v62[40]; // [rsp+58h] [rbp-79h] BYREF
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  v4 = 0;
  v6 = *(_DWORD *)(a1 + 120) & 0x8000;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v56 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = SchedulerAssist[5];
          SchedulerAssist[5] = v31 + 1;
          if ( v31 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v29 = CurrentPrcb->SchedulerAssist;
      if ( v29 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = v29[5] - 1;
          v29[5] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v56, v14, v15);
      while ( CurrentPrcb->PrcbLock );
    }
    p_Lock = &CurrentPrcb->NextThread->Header.Lock;
    if ( p_Lock
      || (p_Lock = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0LL)) != 0LL
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v19 = *(_QWORD *)(a1 + 104)) != 0
      && (v20 = CurrentPrcb->ScbOffset + v19) != 0
      && KiCheckForMaxOverQuotaScb(v20)
      && (p_Lock = &CurrentPrcb->IdleThread->Header.Lock, KiSetProcessorIdle((__int64)CurrentPrcb, 1, 1), p_Lock) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, p_Lock, 2LL, 2LL);
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1, v28);
      if ( (unsigned __int8)KiSwapContext(a1, p_Lock, 0LL) )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v34);
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v21 = KeGetCurrentPrcb();
      a2 = (__int64)v21->SchedulerAssist;
      if ( a2 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v33 = *(_DWORD *)(a2 + 20) - 1;
          *(_DWORD *)(a2 + 20) = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v35);
    }
    LODWORD(v3) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !*(_DWORD *)(a1 + 740) && !v6 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    {
      v4 = 1;
      KiSuspendUmsThread(a1, &v59);
    }
    v22 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 144);
      if ( v23 )
      {
        --*(_WORD *)(a1 + 486);
        v24 = *(_WORD *)(v23 + 368);
        KiLeaveGuardedRegionUnsafe(a1);
        v22 = v24 & 1;
      }
    }
    v25 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v36 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v37 = KeGetCurrentPrcb();
      v57 = 0;
      while ( 1 )
      {
        v38 = v37->SchedulerAssist;
        if ( v38 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v39 = v38[5];
            v38[5] = v39 + 1;
            if ( v39 == -1 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v40 = v37->SchedulerAssist;
        if ( v40 )
        {
          if ( v37->NestingLevel <= 1u )
          {
            v41 = v40[5] - 1;
            v40[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
        do
          KeYieldProcessorEx(&v57, a2, a3);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v42 = *(_BYTE *)(a1 + 194);
      v43 = v42 & 0xFD;
      v25 = (v42 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v43;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v36 < 2u )
      {
        v44 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v44);
      }
      __writecr8(v36);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    LODWORD(v3) = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v22, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v25 )
    {
      v45 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v46 = KeGetCurrentPrcb();
      v58 = 0;
      while ( 1 )
      {
        v47 = v46->SchedulerAssist;
        if ( v47 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v48 = v47[5];
            v47[5] = v48 + 1;
            if ( v48 == -1 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v49 = v46->SchedulerAssist;
        if ( v49 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v50 = v49[5] - 1;
            v49[5] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
        do
          KeYieldProcessorEx(&v58, v26, v27);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
      {
        v51 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v51);
      }
      LODWORD(v3) = v45;
      __writecr8(v45);
    }
    if ( v4 )
      LODWORD(v3) = KiResumeUmsThread(a1, &v59);
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v6 )
  {
    if ( (unsigned __int8)KiIsProcessTerminationRequested(a1, &v60) )
    {
      memset(v62, 0, 0x98uLL);
      v62[0] = v60;
      LOBYTE(v52) = 1;
      v62[1] = 1;
      DbgkForwardException(v62, v52);
      DbgkForwardException(v62, 0LL);
    }
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v10 = KeGetCurrentPrcb();
    v61[0] = 0;
    while ( 1 )
    {
      v11 = v10->SchedulerAssist;
      if ( v11 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v53 = v11[5];
          v11[5] = v53 + 1;
          if ( v53 == -1 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v30 = v10->SchedulerAssist;
      if ( v30 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v54 = v30[5] - 1;
          v30[5] = v54;
          if ( !v54 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(v61, v7, v8);
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
      LOBYTE(v12) = v9;
      KiSignalThreadForApc(v10, a1 + 648, v12);
    }
    KiReleaseThreadLockSafe(a1);
    LODWORD(v3) = KiExitDispatcher((__int64)v10, 0LL, 1LL, 0, v9);
  }
  return (int)v3;
}
