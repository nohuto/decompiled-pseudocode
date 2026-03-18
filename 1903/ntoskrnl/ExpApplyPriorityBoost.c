/*
 * XREFs of ExpApplyPriorityBoost @ 0x14000EA10
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1400EED48 (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyPrewaitBoost @ 0x140121E54 (ExpApplyPrewaitBoost.c)
 *     ExpApplyRewaitBoost @ 0x14015B710 (ExpApplyRewaitBoost.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KiInsertDeferredReadyList @ 0x14000D220 (KiInsertDeferredReadyList.c)
 *     KiReleaseThreadStateLock @ 0x14000FA70 (KiReleaseThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14000FAD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14000FB30 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14000FC20 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x14000FF70 (KiSelectReadyThreadEx.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010048 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsBoostThreadIo @ 0x14003DFB0 (PsBoostThreadIo.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     ObpIncrPointerCount @ 0x1400476A0 (ObpIncrPointerCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400E4D24 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400E4F6C (KiRemoveThreadFromAnyReadyQueue.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiSendSoftwareInterrupt @ 0x14012C798 (KiSendSoftwareInterrupt.c)
 *     KiAbThreadInsertList @ 0x140133348 (KiAbThreadInsertList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IoBoostThreadOutstandingIo @ 0x14029BE84 (IoBoostThreadOutstandingIo.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // zf
  unsigned int v7; // edi
  bool v8; // cc
  volatile __int64 *v9; // r12
  int v10; // r14d
  int v11; // r15d
  int v12; // r13d
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  ULONG_PTR v19; // rsi
  signed __int64 v20; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int8 OldIrql; // r14
  unsigned __int8 v25; // dl
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _KSPIN_LOCK_QUEUE *volatile v28; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int8 v31; // bl
  int v32; // r14d
  __int64 v33; // r13
  char v34; // al
  struct _KPRCB *v35; // r13
  _DWORD *v36; // rcx
  char v37; // al
  int v38; // edx
  char v39; // r8
  char v40; // cl
  unsigned int v41; // eax
  int v42; // edx
  __int64 v43; // r9
  unsigned int v44; // ecx
  __int64 v45; // r13
  bool v46; // cc
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  struct _KPRCB *v50; // rcx
  _QWORD *v51; // r14
  _KTHREAD *CurrentThread; // r14
  __int64 *v53; // rsi
  int v54; // r12d
  int v55; // edx
  __int64 v56; // r14
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int8 v61; // cl
  unsigned __int8 v62; // r8
  __int64 v63; // rcx
  int v64; // edx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  int v67; // ecx
  struct _KPRCB *v68; // r12
  _QWORD *v69; // rdx
  __int64 v70; // rdx
  struct _KPRCB *v71; // r13
  _DWORD *v72; // rcx
  struct _KPRCB *v73; // r12
  _KTHREAD *NextThread; // r13
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // rcx
  unsigned __int8 v77; // cl
  __int64 v78; // rdx
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rcx
  _DWORD *v82; // rcx
  unsigned __int8 v83; // cl
  __int64 v84; // rdx
  unsigned __int8 v85; // al
  int v86; // eax
  unsigned __int8 v87; // al
  bool v88; // cf
  struct _KPRCB *v89; // rcx
  int v90; // eax
  struct _KPRCB *v91; // rcx
  __int64 ExtensionTable; // rax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // r14
  char v98; // cl
  char v99; // al
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 ready; // rax
  __int64 v103; // r14
  char v104; // dl
  char IsThreadRankNonZero; // al
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  struct _KPRCB *v113; // rcx
  struct _KPRCB *v114; // rcx
  int v115; // eax
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // rcx
  struct _KPRCB *v118; // rcx
  int v119; // eax
  struct _KPRCB *v120; // rcx
  int v121; // [rsp+3Ch] [rbp-55h]
  __int64 v122; // [rsp+40h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-49h] BYREF
  __int64 v124; // [rsp+60h] [rbp-31h]
  int v125; // [rsp+68h] [rbp-29h]
  struct _KPRCB *v126; // [rsp+70h] [rbp-21h]
  int v127; // [rsp+78h] [rbp-19h] BYREF
  int v128; // [rsp+7Ch] [rbp-15h] BYREF
  int v129; // [rsp+80h] [rbp-11h]
  _QWORD *v130; // [rsp+88h] [rbp-9h] BYREF
  PVOID v131; // [rsp+90h] [rbp-1h]
  __int64 v132; // [rsp+98h] [rbp+7h]
  __int64 v133; // [rsp+A0h] [rbp+Fh] BYREF
  int v134; // [rsp+A8h] [rbp+17h]
  __int64 *v135; // [rsp+B0h] [rbp+1Fh]
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  char v137; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v138; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v139; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v140; // [rsp+F8h] [rbp+67h]
  char SystemArgument1; // [rsp+110h] [rbp+7Fh]
  unsigned int SystemArgument1a; // [rsp+110h] [rbp+7Fh]
  struct _KPRCB *SystemArgument1b; // [rsp+110h] [rbp+7Fh]

  result = 0LL;
  v5 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 )
    return result;
  v7 = (*(_DWORD *)(a3 + 1760) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 780LL) & 0x100000) != 0 )
    v7 = 0;
  v8 = v7 <= 2;
  if ( v7 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1816) )
      v7 = 2;
    v8 = v7 <= 2;
  }
  if ( v8 )
    v7 = 2;
  LockHandle.LockQueue.Next = 0LL;
  v9 = (volatile __int64 *)(a1 + 96);
  v10 = a2 & 0xFF00;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v129 = v10;
  v121 = a2 & 4;
  v11 = a2 & 2;
  v12 = 0;
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
      v86 = SchedulerAssist[5];
      SchedulerAssist[5] = v86 + 1;
      if ( v86 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else if ( _InterlockedExchange64(v9, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v16 = v121;
  if ( v121 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v11 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v10 )
  {
    v17 = *(char *)(a3 + 195);
    if ( v17 > *(unsigned __int8 *)(a1 + 27) )
    {
      if ( (unsigned __int8)v17 >= 0xFu )
        LOBYTE(v17) = 15;
      *(_BYTE *)(a1 + 27) = v17;
    }
  }
  v18 = *(_DWORD *)(a1 + 56);
  v19 = *(_QWORD *)(a1 + 48);
  if ( (v18 & 2) != 0 )
  {
    v19 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v19 & 3) != 0 )
  {
    goto LABEL_56;
  }
  if ( v19 )
  {
    if ( v121
      && (v18 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v19 + 544) + 780LL) & 0x100000) != 0 || (*(_DWORD *)(v19 + 1760) & 0xE00u) < 0x400) )
    {
      v12 = 4;
      PsBoostThreadIo(v19);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( !v11 || (*(_DWORD *)(a1 + 56) & 4) != 0 )
    {
LABEL_33:
      if ( v10 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v19 + 195) )
        v12 |= 0xFF00u;
      if ( !v12 )
        goto LABEL_55;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v19 - 48);
      v20 = _InterlockedIncrement64((volatile signed __int64 *)(v19 - 48));
      if ( v20 <= 1 )
        KeBugCheckEx(0x18u, 0LL, v19, 0x10uLL, v20);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_43;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_43:
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v90 = v23[5] - 1;
              v23[5] = v90;
              if ( !v90 )
                KiRemoveSystemWorkPriorityKick(v22, v23);
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v91 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v91, v23);
          }
          __writecr8(OldIrql);
          if ( (v12 & 4) != 0 )
          {
            ++ExpResourceIoBoosted;
            IoBoostThreadIoPriority(v19, v7, 0LL);
          }
          if ( (v12 & 2) != 0 )
          {
            if ( *(_DWORD *)(v19 + 1824) )
            {
              ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( ExtensionTable )
              {
                (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v19);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
            }
          }
          if ( (v12 & 0xFF00) == 0 )
            goto LABEL_50;
          __incgsdword(0x63E8u);
          v32 = *(unsigned __int8 *)(a1 + 27);
          v130 = 0LL;
          if ( *(_UNKNOWN **)(v19 + 544) == &KiInitialProcess )
            goto LABEL_50;
          v137 = 0;
          v33 = KeGetCurrentIrql();
          v124 = v33;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v33 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v126 = KeGetCurrentPrcb();
          v34 = *(_BYTE *)(v19 + 195);
          if ( v34 <= 0 || v34 >= v32 )
            goto LABEL_146;
          v35 = KeGetCurrentPrcb();
          v131 = *(PVOID *)(v19 + 72);
          v127 = 0;
          v36 = v35->SchedulerAssist;
          if ( v36 )
          {
            if ( v35->NestingLevel <= 1u )
            {
              v93 = v36[5];
              v36[5] = v93 + 1;
              if ( v93 == -1 )
LABEL_223:
                KiRemoveSystemWorkPriorityKick(v35, v23);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
          {
            v65 = v35->SchedulerAssist;
            if ( v65 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v94 = v65[5] - 1;
                v65[5] = v94;
                if ( !v94 )
                  KiRemoveSystemWorkPriorityKick(v35, v23);
              }
            }
            do
              KeYieldProcessorEx(&v127);
            while ( *(_QWORD *)(v19 + 64) );
            v66 = v35->SchedulerAssist;
            if ( v66 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v95 = v66[5];
                v66[5] = v95 + 1;
                if ( v95 == -1 )
                  goto LABEL_223;
              }
            }
          }
          v37 = *(_BYTE *)(v19 + 195);
          if ( v37 <= 0 || (v38 = v37, v37 >= v32) )
          {
            v39 = 0;
LABEL_86:
            *(_QWORD *)(v19 + 64) = 0LL;
            v50 = KeGetCurrentPrcb();
            v23 = v50->SchedulerAssist;
            if ( v23 )
            {
              if ( v50->NestingLevel <= 1u )
              {
                v109 = v23[5] - 1;
                v23[5] = v109;
                if ( !v109 )
                {
                  KiRemoveSystemWorkPriorityKick(v50, v23);
                  v39 = v137;
                }
              }
            }
            if ( v39 )
            {
              v51 = v130;
              if ( v130 )
              {
                v68 = v126;
                do
                {
                  v69 = v51 - 27;
                  v51 = (_QWORD *)*v51;
                  KiDeferredReadyThread(v68, v69);
                }
                while ( v51 );
                v9 = (volatile __int64 *)(a1 + 96);
              }
              LOBYTE(v33) = v124;
              if ( (unsigned __int8)v124 >= 2u )
              {
                if ( v126->NextThread && !v126->DpcRoutineActive )
                {
                  LOBYTE(v23) = 2;
                  KiRequestSoftwareInterrupt(v126, v23);
                }
                goto LABEL_50;
              }
              CurrentThread = v126->CurrentThread;
              if ( v126->NextThread )
              {
                KiAbProcessContextSwitch(v126->CurrentThread, 0LL);
                v71 = KeGetCurrentPrcb();
                v128 = 0;
                v72 = v71->SchedulerAssist;
                if ( v72 )
                {
                  if ( v71->NestingLevel <= 1u )
                  {
                    v110 = v72[5];
                    v72[5] = v110 + 1;
                    if ( v110 == -1 )
                      KiRemoveSystemWorkPriorityKick(v71, v70);
                  }
                }
                v73 = v126;
                while ( _interlockedbittestandset64((volatile signed __int32 *)&v73->PrcbLock, 0LL) )
                {
                  v81 = v71->SchedulerAssist;
                  if ( v81 )
                  {
                    if ( v71->NestingLevel <= 1u )
                    {
                      v111 = v81[5] - 1;
                      v81[5] = v111;
                      if ( !v111 )
                        KiRemoveSystemWorkPriorityKick(v71, v70);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v128);
                  while ( v73->PrcbLock );
                  v82 = v71->SchedulerAssist;
                  if ( v82 )
                  {
                    if ( v71->NestingLevel <= 1u )
                    {
                      v112 = v82[5];
                      v82[5] = v112 + 1;
                      if ( v112 == -1 )
                        KiRemoveSystemWorkPriorityKick(v71, v70);
                    }
                  }
                }
                NextThread = v73->NextThread;
                v73->NextThread = 0LL;
                _disable();
                KiEndThreadCycleAccumulation(v73, CurrentThread, 0LL);
                _enable();
                v73->CurrentThread = NextThread;
                v9 = (volatile __int64 *)(a1 + 96);
                if ( NextThread->WaitBlockFill6[68] == 1 )
                  NextThread->ReadyTime = NextThread->ReadyTime
                                        - NextThread->WaitBlock[2].SpareLong
                                        + MEMORY[0xFFFFF78000000320];
                v75 = v124;
                v76 = v126;
                NextThread->WaitBlockFill6[68] = 2;
                CurrentThread->WaitIrql = v75;
                CurrentThread->WaitReason = 32;
                KiQueueReadyThread(v76, CurrentThread);
                if ( (unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)v124) )
                {
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                  {
                    v113 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v113->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v113, v23);
                  }
                  __writecr8(1uLL);
                  CurrentThread->MiscFlags &= ~0x40u;
                  KiDeliverApc(0LL, 0LL, 0LL);
                }
                LOBYTE(v33) = v124;
              }
              else if ( (CurrentThread->MiscFlags & 0x40) != 0 )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
                {
                  v80 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v80, v23);
                }
                __writecr8(1uLL);
                CurrentThread->MiscFlags &= ~0x40u;
                KiDeliverApc(0LL, 0LL, 0LL);
              }
              if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
              {
LABEL_93:
                __writecr8((unsigned __int8)v33);
LABEL_50:
                v12 = 0;
                ObDereferenceObjectDeferDelete((PVOID)v19);
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v9;
                LockHandle.LockQueue.Next = 0LL;
                v25 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                LockHandle.OldIrql = v25;
                v26 = KeGetCurrentPrcb();
                v27 = v26->SchedulerAssist;
                if ( v27 )
                {
                  if ( v26->NestingLevel <= 1u )
                  {
                    v115 = v27[5];
                    v27[5] = v115 + 1;
                    if ( v115 == -1 )
                      KiRemoveSystemWorkPriorityKick(v26, v27);
                  }
                }
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  KiAcquireQueuedSpinLockInstrumented(&LockHandle, v9);
                }
                else if ( _InterlockedExchange64(v9, (__int64)&LockHandle) )
                {
                  KxWaitForLockOwnerShip(&LockHandle);
                }
LABEL_55:
                v16 = v121;
                goto LABEL_56;
              }
LABEL_289:
              v114 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v114->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v114, v23);
              goto LABEL_93;
            }
            LOBYTE(v33) = v124;
LABEL_146:
            if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || (unsigned __int8)v33 >= 2u )
              goto LABEL_93;
            goto LABEL_289;
          }
          v39 = 1;
          v40 = v32 - v37;
          v137 = 1;
          v41 = *(_DWORD *)(v19 + 1408);
          *(_BYTE *)(v19 + 564) += 16 * v40;
          if ( v41 )
          {
            _BitScanReverse((unsigned int *)&v67, v41);
            v134 = v67;
            if ( (char)v32 < v67 )
              LOBYTE(v32) = v67;
          }
          v32 = (char)v32;
          if ( v38 == (char)v32 )
          {
LABEL_83:
            v49 = *(_QWORD *)(v19 + 32);
            if ( (unsigned __int64)v131 > v49 || v49 - (unsigned __int64)v131 < (unsigned int)KiLockQuantumTarget )
              *(_QWORD *)(v19 + 32) = (char *)v131 + (unsigned int)KiLockQuantumTarget;
            goto LABEL_86;
          }
          v42 = (unsigned __int8)KiAcquireThreadStateLock(v19, &v122, &v133);
          v44 = *(char *)(v19 + 195);
          v125 = v44;
          SystemArgument1 = 0;
          if ( v42 == 2 )
          {
            v45 = v122;
            v135 = (__int64 *)(v122 + 16);
            v132 = *(_QWORD *)(v122 + 16);
            LOBYTE(v43) = v132 == 0;
            KiUpdateThreadPriority(v122, v19, (unsigned int)(char)v32, v43);
            v46 = (char)v32 <= v125;
            if ( (char)v32 >= v125 )
            {
LABEL_76:
              if ( !v46 && !v132 )
              {
                v45 = v122;
                if ( *(_BYTE *)(v19 + 388) == 2 )
                  goto LABEL_79;
              }
              goto LABEL_139;
            }
            if ( v132 )
            {
              v46 = (char)v32 <= v125;
              goto LABEL_76;
            }
            v45 = v122;
            if ( *(_BYTE *)(v19 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v122, v19, 0LL);
              v103 = ready;
              if ( ready )
              {
                if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
                {
                  IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v45);
                  v104 = 1;
                  if ( !IsThreadRankNonZero )
                    v104 = *(_BYTE *)(v103 + 195);
                }
                else
                {
                  v104 = *(_BYTE *)(ready + 195);
                }
                **(_BYTE **)(v45 + 56) = v104;
                v106 = *(_QWORD *)(v45 + 25016);
                if ( v106 )
                {
                  if ( v103 == *(_QWORD *)(v45 + 24) )
                    v107 = (unsigned int)KiVpThreadSystemWorkPriority;
                  else
                    v107 = (unsigned int)v104;
                  KiSetSchedulerAssistPriority(v106, v107, 0LL);
                  v106 = *(_QWORD *)(v45 + 25016);
                }
                *v135 = v103;
                if ( v106 )
                  *(_BYTE *)(v106 + 16) = v103 == *(_QWORD *)(v45 + 24);
                if ( *(_BYTE *)(v103 + 388) == 1 )
                  *(_DWORD *)(v103 + 132) = *(_DWORD *)(v103 + 132)
                                          - *(_DWORD *)(v103 + 436)
                                          + MEMORY[0xFFFFF78000000320];
                v45 = v122;
                *(_BYTE *)(v103 + 388) = 3;
                SystemArgument1 = 1;
              }
            }
            else if ( *(_DWORD *)(v122 + 22808) >> (v32 + 1) )
            {
              *(_BYTE *)(v19 + 112) |= 0x10u;
            }
LABEL_139:
            v32 = 0;
            goto LABEL_79;
          }
          v64 = v42 - 1;
          if ( v64 )
          {
            if ( v64 != 2 )
            {
              KiUpdateThreadPriority(0LL, v19, (unsigned int)(char)v32, 0LL);
              v45 = v122;
              goto LABEL_139;
            }
            v45 = v122;
            LOBYTE(v43) = 1;
            KiUpdateThreadPriority(v122, v19, (unsigned int)(char)v32, v43);
            if ( (char)v32 < v125 )
            {
              v96 = KiSelectReadyThreadEx(v45, v19, 0LL);
              v97 = v96;
              if ( v96 )
              {
                if ( (*(_BYTE *)(v96 + 2) & 4) != 0 )
                {
                  v99 = KiIsThreadRankNonZero(v96, v45);
                  v98 = 1;
                  if ( !v99 )
                    v98 = *(_BYTE *)(v97 + 195);
                }
                else
                {
                  v98 = *(_BYTE *)(v96 + 195);
                }
                **(_BYTE **)(v45 + 56) = v98;
                v100 = *(_QWORD *)(v45 + 25016);
                if ( v100 )
                {
                  v101 = (unsigned int)KiVpThreadSystemWorkPriority;
                  if ( v97 != *(_QWORD *)(v45 + 24) )
                    v101 = (unsigned int)v98;
                  KiSetSchedulerAssistPriority(*(_QWORD *)(v45 + 25016), v101, 0LL);
                  v100 = *(_QWORD *)(v45 + 25016);
                }
                *(_QWORD *)(v45 + 16) = v97;
                if ( v100 )
                  *(_BYTE *)(v100 + 16) = v97 == *(_QWORD *)(v45 + 24);
                if ( *(_BYTE *)(v97 + 388) == 1 )
                  *(_DWORD *)(v97 + 132) = *(_DWORD *)(v97 + 132) - *(_DWORD *)(v97 + 436) + MEMORY[0xFFFFF78000000320];
                *(_BYTE *)(v97 + 388) = 3;
                KiInsertDeferredReadyList((__int64 *)&v130, v19);
                v45 = v122;
              }
              goto LABEL_139;
            }
          }
          else
          {
            v45 = v122;
            KiRemoveThreadFromAnyReadyQueue(v122, v133, v19, v44);
            KiUpdateThreadPriority(0LL, v19, (unsigned int)(char)v32, 0LL);
            KiPrepareReadyThreadForRescheduling(v19, (unsigned int)(char)v32, &v130);
            v32 = 0;
          }
LABEL_79:
          KiUpdateSharedReadyQueueAffinityThread(0LL, v19);
          KiReleaseThreadStateLock(v47, v45, v133);
          if ( SystemArgument1 )
          {
            LODWORD(v48) = KeGetPcr()->Prcb.Number;
            v108 = *(unsigned int *)(v122 + 36);
            if ( (_DWORD)v48 != (_DWORD)v108 )
            {
              LOBYTE(v48) = 2;
              KiSendSoftwareInterrupt(v108, v48);
            }
          }
          if ( v32 > 0 )
            KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v122, (unsigned int)v32);
          v39 = 1;
          goto LABEL_83;
        }
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      goto LABEL_43;
    }
    v12 |= 2u;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 1820), 1u) || !*(_BYTE *)(v19 + 793) )
    {
LABEL_32:
      *(_DWORD *)(a1 + 56) |= 4u;
      goto LABEL_33;
    }
    v77 = KeGetCurrentIrql();
    v139 = v77;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v77 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    SystemArgument1b = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(v19, &SystemArgument1b->AbPropagateBoostsList, v19 + 1376) )
      KiAbQueueAutoBoostDpc(SystemArgument1b);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      v87 = KeGetCurrentIrql();
      v88 = v87 < 2u;
      v79 = v139;
      if ( v88 || v139 >= 2u )
        goto LABEL_177;
      v89 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v89, v78);
    }
    v79 = v139;
LABEL_177:
    __writecr8(v79);
    goto LABEL_32;
  }
LABEL_56:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v53 = *(__int64 **)(a1 + 16);
    if ( v53 )
    {
      v54 = 1;
      SystemArgument1a = *((_DWORD *)v53 + 2);
      if ( SystemArgument1a > 1 )
      {
        while ( 1 )
        {
          v55 = *((_DWORD *)v53 + 6);
          v53 += 2;
          v56 = *v53;
          if ( (v55 & 2) != 0 )
          {
            v56 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v56 & 3) != 0 )
          {
            goto LABEL_99;
          }
          if ( !v56 )
          {
LABEL_99:
            v57 = SystemArgument1a;
            goto LABEL_100;
          }
          LOBYTE(v58) = v55;
          if ( v16 )
          {
            if ( (v55 & 1) == 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v56 + 544) + 780LL) & 0x100000) != 0
                || (LOBYTE(v58) = v55, (*(_DWORD *)(v56 + 1760) & 0xE00u) < 0x400) )
              {
                v12 |= 4u;
                PsBoostThreadIo(v56);
                *((_DWORD *)v53 + 2) |= 1u;
                v58 = *((_DWORD *)v53 + 2);
              }
            }
          }
          if ( v11 && (v58 & 4) == 0 )
            break;
LABEL_111:
          if ( v129 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v56 + 195) )
            v12 |= 0xFF00u;
          if ( v12 )
          {
            v59 = v56 - 48;
            if ( ObpTraceFlags )
            {
              ObpPushStackInfo(v56 - 48);
              v59 = v56 - 48;
            }
            ObpIncrPointerCount(v59);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v61 = LockHandle.OldIrql;
            v138 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v118 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v118->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v118, v60);
              v61 = v138;
            }
            __writecr8(v61);
            if ( (v12 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v56, v7, 0LL);
            }
            if ( (v12 & 2) != 0 && *(_DWORD *)(v56 + 1824) )
              IoBoostThreadOutstandingIo(v56);
            if ( (v12 & 0xFF00) != 0 )
            {
              __incgsdword(0x63ECu);
              KeSetPriorityBoost(v56, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v56);
            v12 = 0;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
            LockHandle.LockQueue.Next = 0LL;
            v62 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            LockHandle.OldIrql = v62;
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 96));
            v63 = *(_QWORD *)(a1 + 16);
            if ( !v63 )
              goto LABEL_57;
            v57 = SystemArgument1a;
            if ( *(_DWORD *)(v63 + 8) != SystemArgument1a )
              goto LABEL_57;
          }
          else
          {
            v57 = SystemArgument1a;
          }
LABEL_100:
          v16 = v121;
          if ( ++v54 >= v57 )
            goto LABEL_57;
        }
        v12 |= 2u;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v56 + 1820)) != 1 || !*(_BYTE *)(v56 + 793) )
        {
LABEL_110:
          *((_DWORD *)v53 + 2) |= 4u;
          goto LABEL_111;
        }
        v83 = KeGetCurrentIrql();
        v140 = v83;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v83 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v131 = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v56, (char *)v131 + 25720, v56 + 1376) )
          KiAbQueueAutoBoostDpc(v131);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          v116 = KeGetCurrentIrql();
          v88 = v116 < 2u;
          v85 = v140;
          if ( v88 || v140 >= 2u )
            goto LABEL_192;
          v117 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v117->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v117, v84);
        }
        v85 = v140;
LABEL_192:
        __writecr8(v85);
        goto LABEL_110;
      }
    }
  }
LABEL_57:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    v28 = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_60;
      v28 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v28->Lock, 1uLL);
  }
LABEL_60:
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v119 = v30[5] - 1;
      v30[5] = v119;
      if ( !v119 )
        KiRemoveSystemWorkPriorityKick(v29, v30);
    }
  }
  v31 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v120 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v120->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v120, v30);
  }
  result = v31;
  __writecr8(v31);
  return result;
}
