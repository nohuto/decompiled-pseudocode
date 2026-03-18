/*
 * XREFs of ExpAcquireResourceExclusiveLite @ 0x14003CEE0
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14003C3B0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140133E38 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140331138 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331658 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceExclusiveLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  bool v5; // r14
  volatile __int64 *v6; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v10; // di
  int v11; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned __int8 OldIrql; // si
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _KSPIN_LOCK_QUEUE *volatile v19; // rax
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // r15
  struct _KTHREAD *v23; // r10
  int v24; // r8d
  unsigned int v25; // edx
  int v26; // ecx
  int v27; // edx
  __int16 v28; // dx
  int v29; // r9d
  int v30; // r12d
  unsigned __int8 v31; // dl
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int8 v39; // di
  unsigned int v40; // edi
  unsigned int v41; // edi
  _KSPIN_LOCK_QUEUE *volatile v42; // rax
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  unsigned __int8 v45; // si
  int v46; // eax
  int v47; // eax
  struct _KPRCB *v48; // rcx
  int v49; // eax
  struct _KPRCB *v50; // rcx
  unsigned __int8 v51; // bl
  struct _KPRCB *v52; // rcx
  int v53; // eax
  struct _KPRCB *v54; // rcx
  int v55; // eax
  unsigned __int8 v56; // r13
  struct _KPRCB *v57; // rcx
  int v58; // eax
  struct _KPRCB *v59; // rcx
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  __int64 v62; // [rsp+48h] [rbp-11h] BYREF
  volatile signed __int64 *v63; // [rsp+50h] [rbp-9h]
  __int64 v64; // [rsp+58h] [rbp-1h]
  __int64 v65; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v66; // [rsp+68h] [rbp+Fh]
  struct _KTHREAD *v67; // [rsp+70h] [rbp+17h]
  __int64 v68; // [rsp+78h] [rbp+1Fh]
  __int64 v69; // [rsp+80h] [rbp+27h] BYREF
  __int64 *v70; // [rsp+88h] [rbp+2Fh]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  struct _KPRCB *SystemArgument1; // [rsp+C0h] [rbp+67h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x6378u);
  v6 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v46 = SchedulerAssist[5];
      SchedulerAssist[5] = v46 + 1;
      if ( v46 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 48) = CurrentThread;
    *(_WORD *)(a1 + 24) = 1;
    *(_WORD *)(a1 + 26) |= 0x80u;
    v10 = 1;
    v11 = *(_DWORD *)(a1 + 56) & 7;
    *(_DWORD *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 56) = v11 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_10;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_10:
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v47 = v14[5] - 1;
        v14[5] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v48 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v48);
    }
    __writecr8(OldIrql);
    __incgsdword(0x637Cu);
    __incgsdword(0x6364u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return v10;
  }
  if ( *(char *)(a1 + 26) < 0 && *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
  {
    v40 = *(_DWORD *)(a1 + 56) + 8;
    *(_DWORD *)(a1 + 56) = v40;
    v41 = v40 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v42 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_73;
        v42 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v42->Lock, 1uLL);
    }
LABEL_73:
    v43 = KeGetCurrentPrcb();
    v44 = v43->SchedulerAssist;
    if ( v44 )
    {
      if ( v43->NestingLevel <= 1u )
      {
        v49 = v44[5] - 1;
        v44[5] = v49;
        if ( !v49 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    v45 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v50 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v50);
    }
    __writecr8(v45);
    __incgsdword(0x6380u);
    __incgsdword(0x6364u);
    if ( v5 )
      PerfLogExecutiveResourceAcquire(65585LL, a1, v41, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 76);
    v70 = &v69;
    v69 = (__int64)&v69;
    v17 = *(_QWORD *)(a1 + 40);
    v66 = 0LL;
    v68 = 393217LL;
    v67 = CurrentThread;
    if ( v17 )
    {
      v18 = *(_QWORD **)(v17 + 8);
      if ( *v18 != v17 )
        __fastfail(3u);
      v66 = *(__int64 **)(v17 + 8);
      v65 = v17;
      *v18 = &v65;
      *(_QWORD *)(v17 + 8) = &v65;
    }
    else
    {
      v66 = &v65;
      v65 = (__int64)&v65;
      *(_QWORD *)(a1 + 40) = &v65;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(&LockHandle);
    v19 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_24:
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v53 = v21[5] - 1;
            v21[5] = v53;
            if ( !v53 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v22 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v54 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v54);
        }
        __writecr8(v22);
        __incgsdword(0x6384u);
        if ( v5 )
          PerfLogExecutiveResourceWait(65572LL, a1, 0LL);
        v23 = KeGetCurrentThread();
        v24 = 0;
        v25 = (*((_DWORD *)&v23[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v23->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v25 = 0;
        }
        else if ( v25 >= 2 )
        {
          goto LABEL_30;
        }
        if ( v23 == KeGetCurrentThread() && v23[1].Timer.DueTime.LowPart )
        {
LABEL_31:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v24 = 4;
LABEL_33:
          v26 = v24 | 2;
          if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
            v26 = v24;
          v27 = v26 | 0xFF00;
          if ( v23->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
            v27 = v26;
          if ( v27 )
            ExpApplyPriorityBoost(a1, v27, (__int64)v23);
          ExpWaitForResource(a1, &v65, 66084LL, ExpApplyRewaitBoost);
          v28 = *(_WORD *)(a1 + 26);
          v62 = 0LL;
          v63 = 0LL;
          v64 = 0LL;
          if ( (v28 & 8) != 0 )
            goto LABEL_67;
          v29 = 0;
          if ( (v28 & 4) != 0
            && ((CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0
             || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) < 0x400) )
          {
            v29 = 4;
          }
          v30 = v29 | 2;
          if ( (v28 & 2) == 0 )
            v30 = v29;
          if ( !v30 )
            goto LABEL_67;
          v63 = v6;
          v62 = 0LL;
          v31 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          LOBYTE(v64) = v31;
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          if ( v33 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v55 = v33[5];
              v33[5] = v55 + 1;
              if ( v55 == -1 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v62, v6);
          }
          else if ( _InterlockedExchange64(v6, (__int64)&v62) )
          {
            KxWaitForLockOwnerShip(&v62);
          }
          v34 = ExpFindCurrentThread(a1, (__int64)CurrentThread, (__int64)&v62, 0, 1, 0);
          v35 = v34;
          if ( (v30 & 4) != 0 )
          {
            if ( (v34[1] & 1) != 0 )
            {
              v30 &= ~4u;
            }
            else
            {
              PsBoostThreadIo(CurrentThread);
              *((_DWORD *)v35 + 2) |= 1u;
            }
          }
          if ( (v30 & 2) != 0 )
          {
            if ( (v35[1] & 4) != 0 )
            {
              v30 &= ~2u;
            }
            else
            {
              if ( _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.DueTime.HighPart) == 1
                && CurrentThread->AbWaitEntryCount )
              {
                v56 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                SystemArgument1 = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     CurrentThread,
                                     &SystemArgument1->AbPropagateBoostsList,
                                     &CurrentThread->PropagateBoostsEntry) )
                  KiAbQueueAutoBoostDpc(SystemArgument1);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v56 < 2u )
                {
                  v57 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v57);
                }
                __writecr8(v56);
              }
              *((_DWORD *)v35 + 2) |= 4u;
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v62, retaddr);
          }
          else
          {
            _m_prefetchw(&v62);
            v36 = v62;
            if ( !v62 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v63, 0LL, (signed __int64)&v62) == &v62 )
                goto LABEL_60;
              v36 = KxWaitForLockChainValid(&v62);
            }
            v62 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v36 + 8), 1uLL);
          }
LABEL_60:
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          if ( v38 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v58 = v38[5] - 1;
              v38[5] = v58;
              if ( !v58 )
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          v39 = v64;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v64 < 2u )
          {
            v59 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v59);
          }
          __writecr8(v39);
          if ( v30 )
          {
            if ( (v30 & 4) != 0 )
              IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
            if ( (v30 & 2) != 0 )
            {
              if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
              {
                ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                if ( ExtensionTable )
                {
                  (*(void (__fastcall **)(struct _KTHREAD *))(ExtensionTable + 16))(CurrentThread);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                }
              }
            }
          }
LABEL_67:
          __incgsdword(0x637Cu);
          __incgsdword(0x6364u);
          if ( v5 )
            PerfLogExecutiveResourceAcquire(65569LL, a1, 1LL, *(unsigned int *)(a1 + 68));
          return 1;
        }
LABEL_30:
        if ( v25 <= 1 )
          goto LABEL_33;
        goto LABEL_31;
      }
      v19 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v19->Lock, 1uLL);
    goto LABEL_24;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v51 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v52 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v52);
  }
  __writecr8(v51);
  __incgsdword(0x6388u);
  return 0;
}
