/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x14003C570
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14003B4E0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1400A91E0 (SepMandatoryIntegrityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400CF6A0 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400CF830 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140105D40 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     ExpFindCurrentThread @ 0x14003B680 (ExpFindCurrentThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     ExpWaitForResource @ 0x140042F70 (ExpWaitForResource.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     ExpGetThreadResourceHint @ 0x1400B8B70 (ExpGetThreadResourceHint.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     ExpExpandResourceOwnerTable @ 0x140123FA0 (ExpExpandResourceOwnerTable.c)
 *     KiAbQueueAutoBoostDpc @ 0x14013062C (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x140133E38 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140331138 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140331658 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThread; // r14
  bool v7; // r15
  volatile __int64 *v8; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rdx
  unsigned __int8 v13; // si
  int v14; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int8 OldIrql; // di
  __int16 v20; // ax
  unsigned int ThreadResourceHint; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // eax
  _KSPIN_LOCK_QUEUE *volatile v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int8 v28; // di
  int v29; // eax
  __int64 v30; // rax
  _KSPIN_LOCK_QUEUE *volatile v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int8 v34; // si
  struct _KTHREAD *v35; // r10
  int v36; // r8d
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // edx
  unsigned int v40; // r12d
  __int16 v41; // dx
  int v42; // r9d
  int v43; // esi
  unsigned __int8 v44; // dl
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  struct _KPRCB *v50; // rcx
  _DWORD *v51; // rdx
  unsigned __int8 v52; // di
  unsigned int v53; // edi
  unsigned int v54; // edi
  _KSPIN_LOCK_QUEUE *volatile v55; // rax
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  unsigned __int8 v58; // si
  __int64 v59; // rdx
  _QWORD *v60; // rax
  unsigned int v61; // edi
  unsigned int v62; // edi
  _KSPIN_LOCK_QUEUE *volatile v63; // rax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  unsigned __int8 v66; // si
  _QWORD *v67; // rcx
  unsigned __int8 v68; // bl
  int v69; // eax
  int v70; // eax
  struct _KPRCB *v71; // rcx
  int v72; // eax
  struct _KPRCB *v73; // rcx
  struct _KPRCB *v74; // rcx
  int v75; // eax
  struct _KPRCB *v76; // rcx
  int v77; // eax
  unsigned __int8 v78; // r12
  struct _KPRCB *v79; // r13
  struct _KPRCB *v80; // rcx
  int v81; // eax
  struct _KPRCB *v82; // rcx
  __int64 ExtensionTable; // rax
  int v84; // eax
  struct _KPRCB *v85; // rcx
  int v86; // eax
  struct _KPRCB *v87; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-29h] BYREF
  __int64 v89; // [rsp+48h] [rbp-11h] BYREF
  volatile signed __int64 *v90; // [rsp+50h] [rbp-9h]
  __int64 v91; // [rsp+58h] [rbp-1h]
  __int64 v92; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v93; // [rsp+68h] [rbp+Fh]
  __int64 v94; // [rsp+70h] [rbp+17h]
  __int64 v95; // [rsp+78h] [rbp+1Fh]
  __int64 v96; // [rsp+80h] [rbp+27h] BYREF
  __int64 *v97; // [rsp+88h] [rbp+2Fh]
  void *retaddr; // [rsp+B8h] [rbp+5Fh]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  CurrentThread = (__int64)KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x638Cu);
  v8 = (volatile __int64 *)(a1 + 96);
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
      v69 = SchedulerAssist[5];
      SchedulerAssist[5] = v69 + 1;
      if ( v69 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        v13 = 1;
        v14 = *(_DWORD *)(a1 + 56) & 7;
        *(_QWORD *)(a1 + 48) = CurrentThread;
        *(_DWORD *)(a1 + 56) = v14 | 8;
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
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v86 = v17[5] - 1;
            v17[5] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v87 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v87->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v87);
        }
        __writecr8(OldIrql);
        __incgsdword(0x6394u);
        __incgsdword(0x6364u);
        if ( v7 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v13;
      }
      v20 = *(_WORD *)(a1 + 26) & 0x80;
      if ( v20 && *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v53 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v53;
        v54 = v53 >> 3;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_86;
        }
        _m_prefetchw(&LockHandle);
        v55 = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_86:
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            if ( v57 )
            {
              if ( v56->NestingLevel <= 1u )
              {
                v70 = v57[5] - 1;
                v57[5] = v70;
                if ( !v70 )
                  KiRemoveSystemWorkPriorityKick(v56);
              }
            }
            v58 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v71 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v71);
            }
            __writecr8(v58);
            __incgsdword(0x6390u);
            __incgsdword(0x6364u);
            if ( v7 )
              PerfLogExecutiveResourceAcquire(65585LL, a1, v54, *(unsigned int *)(a1 + 68));
            return 1;
          }
          v55 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&v55->Lock, 1uLL);
        goto LABEL_86;
      }
      if ( v20 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v12, 1LL);
      v12 = ExpFindCurrentThread(
              a1,
              CurrentThread,
              (__int64)&LockHandle,
              v22,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v12 )
        goto LABEL_18;
    }
    v59 = *(_QWORD *)(a1 + 16);
    if ( v59 )
      break;
LABEL_106:
    ExpExpandResourceOwnerTable(a1, &LockHandle, 1LL, a4);
  }
  v60 = (_QWORD *)(v59 + 16LL * *(unsigned int *)(v59 + 8));
  v12 = (_QWORD *)(v59 + 16);
  while ( *v12 )
  {
    v12 += 2;
    if ( v12 == v60 )
      goto LABEL_106;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(unsigned int)((_DWORD)v12 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_18:
  if ( *v12 == CurrentThread )
  {
    v61 = *((_DWORD *)v12 + 2) + 8;
    *((_DWORD *)v12 + 2) = v61;
    v62 = v61 >> 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v63 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_97;
        v63 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v63->Lock, 1uLL);
    }
LABEL_97:
    v64 = KeGetCurrentPrcb();
    v65 = v64->SchedulerAssist;
    if ( v65 )
    {
      if ( v64->NestingLevel <= 1u )
      {
        v72 = v65[5] - 1;
        v65[5] = v72;
        if ( !v72 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
    v66 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v73 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v73->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v73);
    }
    __writecr8(v66);
    __incgsdword(0x6398u);
    __incgsdword(0x6364u);
    if ( !v7 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v62, *(unsigned int *)(a1 + 68));
    return 1;
  }
  v23 = *(_DWORD *)(a1 + 64);
  if ( !v23 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
  {
    *(_WORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 64) = v23 + 1;
    v24 = v12[1] & 7;
    *v12 = CurrentThread;
    *((_DWORD *)v12 + 2) = v24 | 8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      v25 = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        v25 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&v25->Lock, 1uLL);
    }
LABEL_25:
    v26 = KeGetCurrentPrcb();
    v27 = v26->SchedulerAssist;
    if ( v27 )
    {
      if ( v26->NestingLevel <= 1u )
      {
        v84 = v27[5] - 1;
        v27[5] = v84;
        if ( !v84 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v85 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v85->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v85);
    }
    __writecr8(v28);
    __incgsdword(0x6394u);
    __incgsdword(0x6364u);
    if ( !v7 )
      return 1;
LABEL_194:
    PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( a2 )
  {
    v29 = *((_DWORD *)v12 + 2);
    *v12 = CurrentThread;
    *((_DWORD *)v12 + 2) = v29 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    v97 = &v96;
    v96 = (__int64)&v96;
    v30 = *(_QWORD *)(a1 + 32);
    v92 = 0LL;
    v93 = 0LL;
    v95 = 393217LL;
    v94 = CurrentThread;
    if ( v30 )
    {
      v67 = *(_QWORD **)(v30 + 8);
      if ( *v67 != v30 )
        __fastfail(3u);
      v93 = *(__int64 **)(v30 + 8);
      v92 = v30;
      *v67 = &v92;
      *(_QWORD *)(v30 + 8) = &v92;
    }
    else
    {
      v93 = &v92;
      v92 = (__int64)&v92;
    }
    *(_QWORD *)(a1 + 32) = &v92;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_35;
    }
    _m_prefetchw(&LockHandle);
    v31 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_35:
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v75 = v33[5] - 1;
            v33[5] = v75;
            if ( !v75 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        v34 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v76 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v76->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v76);
        }
        __writecr8(v34);
        __incgsdword(0x639Cu);
        if ( v7 )
          PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
        v35 = KeGetCurrentThread();
        v36 = 0;
        v37 = (*((_DWORD *)&v35[1].SwapListEntry + 2) >> 9) & 7;
        if ( (v35->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v37 = 0;
        }
        else if ( v37 >= 2 )
        {
          goto LABEL_41;
        }
        if ( v35 == KeGetCurrentThread() && v35[1].Timer.DueTime.LowPart )
        {
LABEL_42:
          if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
            v36 = 4;
        }
        else
        {
LABEL_41:
          if ( v37 > 1 )
            goto LABEL_42;
        }
        v38 = v36 | 2;
        if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
          v38 = v36;
        v39 = v38 | 0xFF00;
        if ( v35->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
          v39 = v38;
        if ( v39 )
          ExpApplyPriorityBoost(a1, v39, (__int64)v35);
        ExpWaitForResource(a1, &v92, 66116LL, ExpApplyRewaitBoost);
        if ( (CurrentThread & 3) != 0 )
          v40 = 0;
        else
          v40 = *(unsigned __int8 *)(CurrentThread + 649);
        v41 = *(_WORD *)(a1 + 26);
        v89 = 0LL;
        v90 = 0LL;
        v91 = 0LL;
        if ( (v41 & 8) == 0 )
        {
          v42 = 0;
          if ( (v41 & 4) != 0
            && ((*(_DWORD *)(*(_QWORD *)(CurrentThread + 544) + 780LL) & 0x100000) != 0
             || (*(_DWORD *)(CurrentThread + 1760) & 0xE00u) < 0x400) )
          {
            v42 = 4;
          }
          v43 = v42 | 2;
          if ( (v41 & 2) == 0 )
            v43 = v42;
          if ( v43 )
          {
            v90 = v8;
            v89 = 0LL;
            v44 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            LOBYTE(v91) = v44;
            v45 = KeGetCurrentPrcb();
            v46 = v45->SchedulerAssist;
            if ( v46 )
            {
              if ( v45->NestingLevel <= 1u )
              {
                v77 = v46[5];
                v46[5] = v77 + 1;
                if ( v77 == -1 )
                  KiRemoveSystemWorkPriorityKick(v45);
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v89, v8);
            }
            else if ( _InterlockedExchange64(v8, (__int64)&v89) )
            {
              KxWaitForLockOwnerShip(&v89);
            }
            v47 = ExpFindCurrentThread(a1, CurrentThread, (__int64)&v89, 0, 1, v40);
            v48 = v47;
            if ( (v43 & 4) != 0 )
            {
              if ( (v47[1] & 1) != 0 )
              {
                v43 &= ~4u;
              }
              else
              {
                PsBoostThreadIo(CurrentThread);
                *((_DWORD *)v48 + 2) |= 1u;
              }
            }
            if ( (v43 & 2) != 0 )
            {
              if ( (v48[1] & 4) != 0 )
              {
                v43 &= ~2u;
              }
              else
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(CurrentThread + 1820)) == 1
                  && *(_BYTE *)(CurrentThread + 793) )
                {
                  v78 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v78 < 2u )
                    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                  v79 = KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(
                                       CurrentThread,
                                       &v79->AbPropagateBoostsList,
                                       CurrentThread + 1376) )
                    KiAbQueueAutoBoostDpc(v79);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v78 < 2u )
                  {
                    v80 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v80);
                  }
                  __writecr8(v78);
                }
                *((_DWORD *)v48 + 2) |= 4u;
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(&v89, retaddr);
              goto LABEL_73;
            }
            _m_prefetchw(&v89);
            v49 = v89;
            if ( !v89 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v90, 0LL, (signed __int64)&v89) == &v89 )
              {
LABEL_73:
                v50 = KeGetCurrentPrcb();
                v51 = v50->SchedulerAssist;
                if ( v51 )
                {
                  if ( v50->NestingLevel <= 1u )
                  {
                    v81 = v51[5] - 1;
                    v51[5] = v81;
                    if ( !v81 )
                      KiRemoveSystemWorkPriorityKick(v50);
                  }
                }
                v52 = v91;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v91 < 2u )
                {
                  v82 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v82->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v82);
                }
                __writecr8(v52);
                if ( v43 )
                {
                  if ( (v43 & 4) != 0 )
                    IoBoostThreadIoPriority(CurrentThread, 2LL, 0LL);
                  if ( (v43 & 2) != 0 )
                  {
                    if ( *(_DWORD *)(CurrentThread + 1824) )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(CurrentThread);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                  }
                }
                goto LABEL_80;
              }
              v49 = KxWaitForLockChainValid(&v89);
            }
            v89 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v49 + 8), 1uLL);
            goto LABEL_73;
          }
        }
LABEL_80:
        __incgsdword(0x6394u);
        __incgsdword(0x6364u);
        if ( !v7 )
          return 1;
        goto LABEL_194;
      }
      v31 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v31->Lock, 1uLL);
    goto LABEL_35;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v68 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v74 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v74);
  }
  __writecr8(v68);
  __incgsdword(0x63A0u);
  return 0;
}
