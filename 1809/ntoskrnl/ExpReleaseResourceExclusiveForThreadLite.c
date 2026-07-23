/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14004F450 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400AAC70 (ExpReleaseResourceForThreadLite.c)
 *     ExReleaseResourceForThreadLite @ 0x140111420 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiUpdateThreadPriority @ 0x1400D0DC0 (KiUpdateThreadPriority.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiComputePriorityFloor @ 0x14011F940 (KiComputePriorityFloor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140313828 (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        PKLOCK_QUEUE_HANDLE LockHandle)
{
  int v4; // r15d
  ULONG_PTR v5; // rbp
  bool v6; // zf
  unsigned int v7; // eax
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  volatile signed __int32 *v13; // rbx
  int v14; // ecx
  int v15; // edx
  volatile signed __int32 *v16; // rax
  __int64 v17; // rdx
  volatile signed __int32 **v18; // rcx
  int v19; // edx
  int v20; // eax
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  volatile signed __int32 *v23; // rax
  volatile signed __int32 *v24; // r15
  volatile signed __int32 *v25; // rax
  signed __int8 v26; // cf
  volatile signed __int32 *v27; // r12
  volatile signed __int32 *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 **v30; // rcx
  char v31; // al
  struct _KPRCB *v32; // rbx
  char v33; // di
  __int64 v34; // rbp
  __int64 v35; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v37; // eax
  _DWORD *v38; // rcx
  int v39; // eax
  char v40; // al
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rdi
  struct _KPRCB *v44; // rbx
  _DWORD *v45; // rcx
  int v46; // eax
  _DWORD *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // eax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  __int64 v57; // rbx
  _QWORD *v58; // rsi
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // rbp
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v63; // r8d
  volatile signed __int32 **v64; // rdx
  _KTHREAD *v65; // rdi
  struct _KPRCB *v66; // rbx
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  unsigned __int8 PriorityDecrement; // r8
  char Priority; // cl
  char v73; // dl
  char v74; // si
  char v75; // r8
  char v76; // r14
  struct _KPRCB *v77; // rbx
  unsigned __int8 v78; // bp
  _DWORD *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  __int64 ready; // rax
  struct _KPRCB *v84; // rcx
  _DWORD *v85; // rdx
  int v86; // eax
  int v87; // eax
  int v88; // ecx
  volatile signed __int32 *v89; // [rsp+30h] [rbp-88h]
  struct _KPRCB *i; // [rsp+38h] [rbp-80h]
  int v91; // [rsp+40h] [rbp-78h] BYREF
  int v92; // [rsp+44h] [rbp-74h] BYREF
  int v93; // [rsp+48h] [rbp-70h] BYREF
  int v94; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v95; // [rsp+50h] [rbp-68h] BYREF
  int v96; // [rsp+54h] [rbp-64h]
  int v97; // [rsp+58h] [rbp-60h]
  int v98; // [rsp+5Ch] [rbp-5Ch]
  int v99; // [rsp+60h] [rbp-58h]
  unsigned int v100; // [rsp+64h] [rbp-54h]
  __int64 v101; // [rsp+68h] [rbp-50h]
  volatile signed __int32 *v102; // [rsp+70h] [rbp-48h]
  __int64 v103; // [rsp+78h] [rbp-40h]
  int v105; // [rsp+D8h] [rbp+20h]

  v4 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  v5 = BugCheckParameter1;
  v6 = (*(_BYTE *)(BugCheckParameter1 + 26) & 1) == 0;
  v99 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  if ( (!v6 || ExpResourceEnforceOwnerTransfer) && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  v7 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v7;
  v8 = v7 >> 3;
  if ( v7 >= 8 )
  {
    v9 = *(_DWORD *)(BugCheckParameter1 + 68);
    v10 = 65586;
    KeReleaseInStackQueuedSpinLock(LockHandle);
    goto LABEL_180;
  }
  v11 = *(_QWORD *)(BugCheckParameter1 + 48);
  if ( (v7 & 2) != 0 )
  {
    v11 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v11 & 3) != 0 )
  {
    goto LABEL_16;
  }
  if ( v11 )
  {
    if ( (v7 & 1) != 0 )
    {
      LOBYTE(BugCheckParameter2) = 1;
      PsBoostThreadIo(v11, BugCheckParameter2);
      *(_DWORD *)(v5 + 56) &= ~1u;
      v7 = *(_DWORD *)(v5 + 56);
    }
    if ( (v7 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 1804));
      *(_DWORD *)(v5 + 56) &= ~4u;
      v7 = *(_DWORD *)(v5 + 56);
    }
    if ( (v7 & 2) != 0 )
    {
      ObDereferenceObjectDeferDelete((PVOID)v11);
      *(_DWORD *)(v5 + 56) &= ~2u;
    }
  }
LABEL_16:
  v8 = 0;
  *(_QWORD *)(v5 + 48) = 0LL;
  v12 = 0LL;
  v9 = *(_DWORD *)(v5 + 68);
  v100 = v9;
  v101 = 0LL;
  if ( *(_DWORD *)(v5 + 72) )
  {
    v13 = *(volatile signed __int32 **)(v5 + 32);
    *(_QWORD *)(v5 + 32) = 0LL;
    v14 = *(_DWORD *)(v5 + 72);
    *(_WORD *)(v5 + 26) &= ~0x80u;
    v89 = v13;
    *(_DWORD *)(v5 + 72) = 0;
    if ( !v14 )
      goto LABEL_31;
LABEL_29:
    v19 = v14 + *(_DWORD *)(v5 + 64) - 1;
    goto LABEL_32;
  }
  v15 = *(_DWORD *)(v5 + 76);
  v13 = 0LL;
  v89 = 0LL;
  if ( v15 )
  {
    v16 = *(volatile signed __int32 **)(v5 + 40);
    if ( v16 )
    {
      if ( *(volatile signed __int32 **)v16 == v16 )
      {
        *(_QWORD *)(v5 + 40) = 0LL;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = *(_QWORD *)v16;
        v17 = *(_QWORD *)v16;
        v18 = (volatile signed __int32 **)*((_QWORD *)v16 + 1);
        if ( *(volatile signed __int32 **)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
          __fastfail(3u);
        *v18 = (volatile signed __int32 *)v17;
        *(_QWORD *)(v17 + 8) = v18;
      }
      v12 = *((_QWORD *)v16 + 2);
      v13 = v16;
      *((_QWORD *)v16 + 1) = v16;
      *(_QWORD *)v16 = v16;
      v15 = *(_DWORD *)(v5 + 76);
      v89 = v16;
    }
    v101 = v12;
    *(_DWORD *)(v5 + 76) = v15 - 1;
    v14 = 1;
    goto LABEL_29;
  }
  *(_WORD *)(v5 + 26) &= ~0x80u;
LABEL_31:
  *(_WORD *)(v5 + 24) = 0;
  v19 = 0;
LABEL_32:
  *(_DWORD *)(v5 + 64) = v19;
  if ( !*(_DWORD *)(v5 + 76) && !*(_DWORD *)(v5 + 72) )
    *(_WORD *)(v5 + 26) &= 0xF9u;
  v96 = *(unsigned __int8 *)(v5 + 27);
  if ( v12 )
  {
    v20 = *(_DWORD *)(v5 + 56) & 7;
    *(_QWORD *)(v5 + 48) = v12;
    *(_DWORD *)(v5 + 56) = v20 | 8;
  }
  KeReleaseInStackQueuedSpinLock(LockHandle);
  v97 = 1;
  v105 = 0;
  v98 = 2 * (v12 != 0) + 1;
  if ( !v13 )
    goto LABEL_179;
  CurrentIrql = KeGetCurrentIrql();
  v103 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = v89;
  for ( i = CurrentPrcb; ; CurrentPrcb = i )
  {
    v24 = v23;
    v91 = 0;
    v25 = *(volatile signed __int32 **)v23;
    v26 = _interlockedbittestandset(v24 + 6, 7u);
    v102 = v25;
    if ( v26 )
    {
      do
      {
        do
          KeYieldProcessorEx(&v91);
        while ( (*((_DWORD *)v24 + 6) & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset(v24 + 6, 7u) );
      CurrentPrcb = i;
    }
    *((_DWORD *)v24 + 7) = 1;
    v27 = (volatile signed __int32 *)*((_QWORD *)v24 + 4);
    if ( v27 != v24 + 8 )
    {
      while ( 1 )
      {
        v28 = *(volatile signed __int32 **)v27;
        v29 = v27;
        v27 = v28;
        v30 = (volatile signed __int32 **)*((_QWORD *)v29 + 1);
        if ( *((volatile signed __int32 **)v28 + 1) != v29 || *v30 != v29 )
LABEL_130:
          __fastfail(3u);
        *v30 = v28;
        *((_QWORD *)v28 + 1) = v30;
        v31 = *((_BYTE *)v29 + 16);
        if ( v31 == 1 )
          break;
        if ( v31 == 2 )
        {
          *((_BYTE *)v29 + 17) = 5;
          v57 = *((_QWORD *)v29 + 3);
          *(_QWORD *)v29 = 0LL;
          v58 = (_QWORD *)(v57 + 8);
          v59 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v59 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v60 = KeGetCurrentPrcb();
          CurrentThread = v60->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v60->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v29, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v57);
          if ( (_QWORD *)*v58 == v58
            || *(_DWORD *)(v57 + 40) >= *(_DWORD *)(v57 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v57 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v60, v57, v29) )
          {
            v63 = *(_DWORD *)(v57 + 4);
            *(_DWORD *)(v57 + 4) = v63 + 1;
            v64 = *(volatile signed __int32 ***)(v57 + 32);
            if ( *v64 != (volatile signed __int32 *)(v57 + 24) )
              goto LABEL_130;
            *(_QWORD *)v29 = v57 + 24;
            *((_QWORD *)v29 + 1) = v64;
            *v64 = v29;
            *(_QWORD *)(v57 + 32) = v29;
            if ( !v63 && (_QWORD *)*v58 != v58 )
              KiWakeOtherQueueWaiters(v60, v57);
          }
          _InterlockedAnd((volatile signed __int32 *)v57, 0xFFFFFF7F);
          v6 = (*((_DWORD *)v24 + 7))-- == 1;
          if ( v6 )
            goto LABEL_128;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v29, 256LL, 0LL);
        }
LABEL_127:
        CurrentPrcb = i;
        if ( v27 == v24 + 8 )
          goto LABEL_128;
      }
      v32 = KeGetCurrentPrcb();
      v33 = 0;
      v34 = *((unsigned __int16 *)v29 + 9);
      v35 = *((_QWORD *)v29 + 3);
      v92 = 0;
      while ( 1 )
      {
        SchedulerAssist = v32->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v37 = SchedulerAssist[5];
            SchedulerAssist[5] = v37 + 1;
            if ( v37 == -1 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v35 + 64), 0LL) )
          break;
        v38 = v32->SchedulerAssist;
        if ( v38 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v39 = v38[5] - 1;
            v38[5] = v39;
            if ( !v39 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        do
          KeYieldProcessorEx(&v92);
        while ( *(_QWORD *)(v35 + 64) );
      }
      if ( *(_BYTE *)(v35 + 388) == 5 )
      {
        v40 = *(_BYTE *)(v35 + 112);
        v33 = 0;
        v41 = v40 & 7;
        if ( v41 == 1 || v41 == 4 )
        {
          v42 = *(_QWORD *)(v35 + 232);
          if ( v42 )
          {
            if ( (*(_BYTE *)v42 & 0x7F) == 0x15 )
            {
              *(_DWORD *)(v35 + 540) = (unsigned __int8)*(_DWORD *)(v35 + 540);
              _InterlockedIncrement((volatile signed __int32 *)(v42 + 4LL * *(unsigned int *)(v35 + 540) + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v42 + 40));
            }
          }
          v43 = *(_QWORD *)(v35 + 712);
          if ( v43 )
          {
            v44 = KeGetCurrentPrcb();
            v93 = 0;
            while ( 1 )
            {
              v45 = v44->SchedulerAssist;
              if ( v45 )
              {
                if ( v44->NestingLevel <= 1u )
                {
                  v46 = v45[5];
                  v45[5] = v46 + 1;
                  if ( v46 == -1 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v43 + 22800), 0LL) )
                break;
              v47 = v44->SchedulerAssist;
              if ( v47 )
              {
                if ( v44->NestingLevel <= 1u )
                {
                  v48 = v47[5] - 1;
                  v47[5] = v48;
                  if ( !v48 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
              do
                KeYieldProcessorEx(&v93);
              while ( *(_QWORD *)(v43 + 22800) );
            }
            if ( *(_QWORD *)(v35 + 712) )
            {
              v49 = *(_QWORD *)(v35 + 216);
              v50 = *(_QWORD **)(v35 + 224);
              if ( *(_QWORD *)(v49 + 8) != v35 + 216 || *v50 != v35 + 216 )
                goto LABEL_130;
              *v50 = v49;
              *(_QWORD *)(v49 + 8) = v50;
              *(_QWORD *)(v35 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 22800), 0LL);
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            if ( v52 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v53 = v52[5] - 1;
                v52[5] = v53;
                if ( !v53 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
          }
          if ( *(_BYTE *)(v35 + 388) == 1 )
            *(_DWORD *)(v35 + 116) |= 2u;
          KiSetThreadState(v35, 7LL);
          *(_QWORD *)(v35 + 216) = i->DeferredReadyListHead.Next;
          i->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v35 + 216);
          *(_QWORD *)(v35 + 200) = v34;
          goto LABEL_100;
        }
        if ( (*(_BYTE *)(v35 + 112) & 7) == 0 )
        {
          *(_BYTE *)(v35 + 112) = v40 & 0xF8 | 2;
          *(_QWORD *)(v35 + 200) = v34;
          *((_BYTE *)v29 + 17) = 0;
LABEL_100:
          v33 = 1;
          goto LABEL_101;
        }
        if ( v41 == 5 )
        {
          *(_BYTE *)(v35 + 112) = v40 & 0xF8 | 6;
        }
        else if ( v41 == 3 )
        {
          *((_BYTE *)v29 + 17) = 2;
        }
      }
LABEL_101:
      *(_QWORD *)(v35 + 64) = 0LL;
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v56 = v55[5] - 1;
          v55[5] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      ++*((_BYTE *)v29 + 17);
      if ( v33 )
      {
        v6 = (*((_DWORD *)v24 + 7))-- == 1;
        if ( v6 )
          goto LABEL_128;
      }
      goto LABEL_127;
    }
LABEL_128:
    _InterlockedAnd(v24 + 6, 0xFFFFFF7F);
    ++v105;
    v23 = v102;
    if ( v102 == v89 )
      break;
  }
  v65 = i->CurrentThread;
  if ( v65->PriorityDecrement )
  {
    v66 = KeGetCurrentPrcb();
    v94 = 0;
    while ( 1 )
    {
      v67 = v66->SchedulerAssist;
      if ( v67 )
      {
        if ( v66->NestingLevel <= 1u )
        {
          v68 = v67[5];
          v67[5] = v68 + 1;
          if ( v68 == -1 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&v65->ThreadLock, 0LL) )
        break;
      v69 = v66->SchedulerAssist;
      if ( v69 )
      {
        if ( v66->NestingLevel <= 1u )
        {
          v70 = v69[5] - 1;
          v69[5] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
      do
        KeYieldProcessorEx(&v94);
      while ( v65->ThreadLock );
    }
    PriorityDecrement = v65->PriorityDecrement;
    Priority = v65->Priority;
    v73 = PriorityDecrement & 0xF;
    v74 = Priority - (PriorityDecrement & 0xF);
    if ( (PriorityDecrement & 0xF) == 0 )
      v74 = v65->Priority;
    v75 = PriorityDecrement >> 4;
    if ( v75 )
    {
      v65->PriorityDecrement = v73;
      v76 = KiComputePriorityFloor(v65, (unsigned __int8)(Priority - v75));
      if ( v76 != v65->Priority )
      {
        v77 = KeGetCurrentPrcb();
        v78 = 0;
        v95 = 0;
        while ( 1 )
        {
          v79 = v77->SchedulerAssist;
          if ( v79 )
          {
            if ( v77->NestingLevel <= 1u )
            {
              v80 = v79[5];
              v79[5] = v80 + 1;
              if ( v80 == -1 )
                KiRemoveSystemWorkPriorityKick(v77);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&i->PrcbLock, 0LL) )
            break;
          v81 = v77->SchedulerAssist;
          if ( v81 )
          {
            if ( v77->NestingLevel <= 1u )
            {
              v82 = v81[5] - 1;
              v81[5] = v82;
              if ( !v82 )
                KiRemoveSystemWorkPriorityKick(v77);
            }
          }
          do
            KeYieldProcessorEx(&v95);
          while ( i->PrcbLock );
        }
        if ( !i->NextThread )
        {
          ready = KiSelectReadyThreadEx(i, v65, 1LL);
          if ( ready )
            KiUpdatePriorityMatrixThreadState(i, ready, 2LL, 3LL);
          else
            v78 = 1;
        }
        KiUpdateThreadPriority(i, v65, (unsigned int)v76, v78);
        _InterlockedAnd64((volatile signed __int64 *)&i->PrcbLock, 0LL);
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        if ( v85 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v86 = v85[5] - 1;
            v85[5] = v86;
            if ( !v86 )
            {
              KiRemoveSystemWorkPriorityKick(v84);
              KiReleaseThreadLockSafe(v65);
              goto LABEL_171;
            }
          }
        }
      }
    }
    else
    {
      ++v74;
    }
    KiReleaseThreadLockSafe(v65);
  }
  else
  {
    v74 = v65->Priority + 1;
  }
LABEL_171:
  v87 = v96;
  if ( v96 )
  {
    v88 = 2;
    if ( v74 > (char)v96 )
      v87 = v74;
  }
  else
  {
    v88 = v97;
  }
  if ( (v98 & 2) != 0 && v88 == 1 )
    v87 = 1;
  KiExitDispatcher((_DWORD)i, 0, v88, v87, v103);
  v5 = BugCheckParameter1;
  v4 = v99;
  v9 = v100;
LABEL_179:
  v10 = 65570;
LABEL_180:
  __incgsdword(0x636Cu);
  if ( v4 )
    PerfLogExecutiveResourceRelease(v10, v5, v8, v9);
}
