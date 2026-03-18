/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0
 * Callers:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14003D890 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceForThreadLite @ 0x140100560 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     PsBoostThreadIo @ 0x14003DFB0 (PsBoostThreadIo.c)
 *     KiRemoveBoostThread @ 0x140043940 (KiRemoveBoostThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1403318D0 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 *a3)
{
  bool v5; // r14
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  int v12; // r15d
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v16; // bl
  int v17; // ebx
  __int64 result; // rax
  char v19; // si
  unsigned int v20; // r15d
  unsigned int v21; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int8 v33; // si
  char v34; // al
  bool v35; // zf
  char v36; // al
  _QWORD *v37; // rax
  int v38; // edx
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  int v42; // eax
  int v43; // eax
  struct _KPRCB *v44; // rcx
  int v45; // eax
  struct _KPRCB *v46; // rcx
  unsigned __int8 v47; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v49; // rdx
  __int64 v50; // r9
  _QWORD *v51; // r10
  __int64 v52; // rcx
  char v53; // al
  int v54; // r9d
  _QWORD *v55; // r8
  __int64 v56; // [rsp+30h] [rbp-88h]
  _QWORD *v57; // [rsp+38h] [rbp-80h]
  _QWORD *v58; // [rsp+40h] [rbp-78h]
  __int64 v59; // [rsp+48h] [rbp-70h]
  _QWORD *v60; // [rsp+58h] [rbp-60h]
  struct _KPRCB *v61; // [rsp+60h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  _QWORD *v63; // [rsp+70h] [rbp-48h]
  char v64; // [rsp+78h] [rbp-40h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v66; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v67; // [rsp+D8h] [rbp+20h]

  v57 = 0LL;
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v6 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v6;
  v7 = v6 >> 3;
  if ( v6 < 8 )
  {
    v8 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( (v6 & 2) != 0 )
    {
      v8 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v8 & 3) != 0 )
    {
      goto LABEL_13;
    }
    if ( v8 )
    {
      if ( (v6 & 1) != 0 )
      {
        PsBoostThreadIo(v8);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v6 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v6 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 1820));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
        v6 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v6 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v8);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    v9 = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v67 = *(_DWORD *)(BugCheckParameter1 + 68);
    v59 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v37 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v38 = *(_DWORD *)(BugCheckParameter1 + 72);
      v57 = v37;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !v38 )
        goto LABEL_16;
    }
    else
    {
      v10 = *(_DWORD *)(BugCheckParameter1 + 76);
      if ( !v10 )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        v11 = 0;
LABEL_17:
        *(_DWORD *)(BugCheckParameter1 + 64) = v11;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v12 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( v9 )
        {
          v42 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v9;
          *(_DWORD *)(BugCheckParameter1 + 56) = v42 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_25;
        }
        _m_prefetchw(a3);
        v13 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3 )
        {
          if ( a3 == (unsigned __int8 *)_InterlockedCompareExchange64(
                                          *((volatile signed __int64 **)a3 + 1),
                                          0LL,
                                          (signed __int64)a3) )
          {
LABEL_25:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v45 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v45;
                if ( !v45 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            v16 = a3[16];
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
            {
              v46 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v46);
            }
            __writecr8(v16);
            v17 = 1;
            result = v59 != 0;
            v19 = 2 * result + 1;
            if ( !v57 )
              goto LABEL_28;
            CurrentIrql = KeGetCurrentIrql();
            v64 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v23 = KeGetCurrentPrcb();
            v24 = v57;
            while ( 1 )
            {
              v25 = v24;
              v66 = 0;
              v24 = (_QWORD *)*v24;
              v58 = v24;
              if ( _interlockedbittestandset((volatile signed __int32 *)v25 + 6, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v66);
                  while ( (*((_DWORD *)v25 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v25 + 6, 7u) );
                v24 = v58;
              }
              *((_DWORD *)v25 + 7) = 1;
              v26 = (_QWORD *)v25[4];
              if ( v26 != v25 + 4 )
                break;
LABEL_49:
              _InterlockedAnd((volatile signed __int32 *)v25 + 6, 0xFFFFFF7F);
              if ( v24 == v57 )
              {
                v36 = KiRemoveBoostThread(v23, v23->CurrentThread);
                if ( v12 )
                {
                  v17 = 2;
                  if ( v36 > (char)v12 )
                    v12 = v36;
                }
                if ( (v19 & 2) != 0 && v17 == 1 )
                  v12 = 1;
                result = KiExitDispatcher((_DWORD)v23, 0, v17, v12, v64);
LABEL_28:
                v20 = v67;
                v21 = 65570;
                v7 = 0;
                goto LABEL_29;
              }
            }
            while ( 1 )
            {
              v27 = *v26;
              v28 = v26;
              v60 = v26;
              v29 = (_QWORD *)v26[1];
              v63 = (_QWORD *)v27;
              if ( *(_QWORD **)(v27 + 8) != v28 || (_QWORD *)*v29 != v28 )
                goto LABEL_37;
              *v29 = v27;
              *(_QWORD *)(v27 + 8) = v29;
              v34 = *((_BYTE *)v28 + 16);
              if ( v34 != 1 )
                break;
              if ( (unsigned __int8)KiTryUnwaitThread(v23, v28, *((unsigned __int16 *)v28 + 9), 0LL) )
              {
                v35 = (*((_DWORD *)v25 + 7))-- == 1;
                if ( v35 )
                {
LABEL_48:
                  v24 = v58;
                  goto LABEL_49;
                }
              }
LABEL_76:
              v26 = v63;
              if ( v63 == v25 + 4 )
                goto LABEL_48;
            }
            if ( v34 != 2 )
            {
              KiTryUnwaitThread(v23, v28, 256LL, 0LL);
              goto LABEL_76;
            }
            *((_BYTE *)v28 + 17) = 5;
            v56 = v28[3];
            *v28 = 0LL;
            v47 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v61 = KeGetCurrentPrcb();
            CurrentThread = v61->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v61->CurrentThread);
              EtwTraceEnqueueWork(v50, v49, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v56);
            v51 = (_QWORD *)(v56 + 8);
            v52 = v56;
            if ( (_QWORD *)*v51 != v51
              && *(_DWORD *)(v56 + 40) < *(_DWORD *)(v56 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v56 || CurrentThread->WaitReason != 15) )
            {
              v53 = KiWakeQueueWaiter((__int64)v61, (_QWORD *)v56, (__int64)v60);
              v52 = v56;
              if ( v53 )
                goto LABEL_117;
              v51 = (_QWORD *)(v56 + 8);
            }
            v54 = *(_DWORD *)(v52 + 4);
            *(_DWORD *)(v52 + 4) = v54 + 1;
            v55 = *(_QWORD **)(v52 + 32);
            if ( *v55 != v52 + 24 )
              goto LABEL_37;
            *v60 = v52 + 24;
            v60[1] = v55;
            *v55 = v60;
            *(_QWORD *)(v52 + 32) = v60;
            if ( !v54 && (_QWORD *)*v51 != v51 )
            {
              KiWakeOtherQueueWaiters((__int64)v61, v52);
              v52 = v56;
            }
LABEL_117:
            _InterlockedAnd((volatile signed __int32 *)v52, 0xFFFFFF7F);
            v35 = (*((_DWORD *)v25 + 7))-- == 1;
            if ( v35 )
              goto LABEL_48;
            goto LABEL_76;
          }
          v13 = KxWaitForLockChainValid(a3);
        }
        *(_QWORD *)a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
        goto LABEL_25;
      }
      v39 = *(_QWORD **)(BugCheckParameter1 + 40);
      if ( v39 )
      {
        if ( (_QWORD *)*v39 == v39 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *v39;
          v40 = *v39;
          v41 = (_QWORD *)v39[1];
          if ( *(_QWORD **)(*v39 + 8LL) != v39 || (_QWORD *)*v41 != v39 )
LABEL_37:
            __fastfail(3u);
          *v41 = v40;
          *(_QWORD *)(v40 + 8) = v41;
        }
        v9 = v39[2];
        v39[1] = v39;
        *v39 = v39;
        v10 = *(_DWORD *)(BugCheckParameter1 + 76);
        v57 = v39;
      }
      v59 = v9;
      *(_DWORD *)(BugCheckParameter1 + 76) = v10 - 1;
      v38 = 1;
    }
    v11 = *(_DWORD *)(BugCheckParameter1 + 64) + v38 - 1;
    goto LABEL_17;
  }
  v21 = 65586;
  v20 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v30 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      if ( a3 == (unsigned __int8 *)_InterlockedCompareExchange64(
                                      *((volatile signed __int64 **)a3 + 1),
                                      0LL,
                                      (signed __int64)a3) )
        goto LABEL_41;
      v30 = KxWaitForLockChainValid(a3);
    }
    *(_QWORD *)a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
  }
LABEL_41:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v43 = v32[5] - 1;
      v32[5] = v43;
      if ( !v43 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  v33 = a3[16];
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v44 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v44);
  }
  result = v33;
  __writecr8(v33);
LABEL_29:
  __incgsdword(0x636Cu);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v21, BugCheckParameter1, v7, v20);
  return result;
}
