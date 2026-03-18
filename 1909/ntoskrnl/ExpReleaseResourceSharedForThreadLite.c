/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0
 * Callers:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14003D5D0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceForThreadLite @ 0x140105AF0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     PsBoostThreadIo @ 0x14003DCF0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140331330 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 *a3)
{
  bool v5; // r12
  unsigned int v6; // ecx
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // r8d
  _QWORD *v15; // rax
  int v16; // edx
  bool v17; // zf
  int v18; // ebp
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 v22; // di
  int v23; // edi
  __int64 result; // rax
  char v25; // si
  unsigned int v26; // esi
  unsigned int v27; // edi
  ULONG_PTR v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  ULONG_PTR v31; // rbp
  unsigned __int64 v32; // r10
  ULONG_PTR v33; // rdi
  ULONG_PTR v34; // r11
  __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int8 v38; // bp
  _QWORD *v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rcx
  int v42; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v44; // r15
  _QWORD *v45; // rax
  _QWORD *v46; // r14
  struct _LIST_ENTRY *v47; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v49; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  char v51; // al
  char v52; // al
  int v53; // eax
  struct _KPRCB *v54; // rcx
  int v55; // eax
  struct _KPRCB *v56; // rcx
  unsigned __int8 v57; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v59; // rdx
  __int64 v60; // r9
  LIST_ENTRY *v61; // r10
  _DISPATCHER_HEADER *volatile v62; // rcx
  char v63; // al
  LONG SignalState; // r9d
  struct _LIST_ENTRY *v65; // r8
  _QWORD *v66; // [rsp+30h] [rbp-78h]
  __int64 v67; // [rsp+38h] [rbp-70h]
  LIST_ENTRY *p_WaitListHead; // [rsp+40h] [rbp-68h]
  struct _LIST_ENTRY *v69; // [rsp+48h] [rbp-60h]
  struct _KPRCB *v70; // [rsp+50h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  struct _LIST_ENTRY *v72; // [rsp+60h] [rbp-48h]
  char v73; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v75; // [rsp+B0h] [rbp+8h] BYREF
  _QWORD *v76; // [rsp+B8h] [rbp+10h]
  _DISPATCHER_HEADER *volatile v77; // [rsp+C8h] [rbp+20h]

  v76 = 0LL;
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v7 = *(_QWORD *)(BugCheckParameter1 + 48);
  v8 = BugCheckParameter1 + 48;
  if ( v7 != BugCheckParameter2 )
  {
    v28 = BugCheckParameter1 + 48;
    v29 = 0LL;
    if ( v7 )
      v28 = 0LL;
    LOBYTE(v29) = v7 != 0;
    if ( !v6
      || (v30 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v30 + 8)
      || (v8 = v30 + 16LL * v6, *(_QWORD *)v8 != BugCheckParameter2) )
    {
      v31 = *(_QWORD *)(BugCheckParameter1 + 16);
      v32 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v31 || (v8 = v31 + 16, v29 >= v32) )
LABEL_96:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v31, 2uLL);
      while ( 1 )
      {
        v33 = v28;
        v34 = v28;
        if ( *(_QWORD *)v8 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v8 )
        {
          if ( ++v29 == v32 )
            goto LABEL_96;
        }
        else
        {
          v28 = v8;
          if ( v34 )
            v28 = v33;
        }
        v8 += 16LL;
        if ( v8 == v31 + 16LL * *(unsigned int *)(v31 + 8) )
          goto LABEL_96;
      }
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v8 - v31) >> 4;
    }
  }
  v9 = *(_DWORD *)(v8 + 8) & 7 | (8 * (*(_DWORD *)(v8 + 8) >> 3) - 8);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 < 8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (v9 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
LABEL_14:
      *(_QWORD *)v8 = 0LL;
      v12 = 0LL;
      v13 = *(_DWORD *)(BugCheckParameter1 + 68);
      v67 = 0LL;
      if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
        goto LABEL_17;
      v14 = *(_DWORD *)(BugCheckParameter1 + 76);
      if ( v14 )
      {
        v39 = *(_QWORD **)(BugCheckParameter1 + 40);
        v76 = 0LL;
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
LABEL_69:
              __fastfail(3u);
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
          }
          v12 = v39[2];
          v39[1] = v39;
          *v39 = v39;
          v14 = *(_DWORD *)(BugCheckParameter1 + 76);
          v76 = v39;
        }
        v67 = v12;
        *(_DWORD *)(BugCheckParameter1 + 76) = v14 - 1;
        v16 = 1;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
LABEL_19:
        v17 = v16 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
        *(_DWORD *)(BugCheckParameter1 + 64) += v16 - 1;
        if ( v17 )
          *(_WORD *)(BugCheckParameter1 + 24) = 0;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( v12 )
        {
          v42 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v12;
          *(_DWORD *)(BugCheckParameter1 + 56) = v42 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_29;
        }
        _m_prefetchw(a3);
        v19 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3 )
        {
          if ( a3 == (unsigned __int8 *)_InterlockedCompareExchange64(
                                          *((volatile signed __int64 **)a3 + 1),
                                          0LL,
                                          (signed __int64)a3) )
          {
LABEL_29:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v55 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v55;
                if ( !v55 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            v22 = a3[16];
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
            {
              v56 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v56);
            }
            __writecr8(v22);
            v23 = 1;
            result = v67 != 0;
            v25 = 2 * result + 1;
            if ( !v76 )
              goto LABEL_32;
            CurrentIrql = KeGetCurrentIrql();
            v73 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v44 = KeGetCurrentPrcb();
            v45 = v76;
            while ( 1 )
            {
              v46 = v45;
              v75 = 0;
              v45 = (_QWORD *)*v45;
              v66 = v45;
              if ( _interlockedbittestandset((volatile signed __int32 *)v46 + 6, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v75);
                  while ( (*((_DWORD *)v46 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v46 + 6, 7u) );
                v45 = v66;
              }
              *((_DWORD *)v46 + 7) = 1;
              v47 = (struct _LIST_ENTRY *)v46[4];
              if ( v47 != (struct _LIST_ENTRY *)(v46 + 4) )
                break;
LABEL_77:
              _InterlockedAnd((volatile signed __int32 *)v46 + 6, 0xFFFFFF7F);
              if ( v45 == v76 )
              {
                v52 = KiRemoveBoostThread((__int64)v44, (__int64)v44->CurrentThread);
                if ( v18 )
                {
                  v23 = 2;
                  if ( v52 > (char)v18 )
                    v18 = v52;
                }
                if ( (v25 & 2) != 0 && v23 == 1 )
                  v18 = 1;
                result = KiExitDispatcher((_DWORD)v44, 0, v23, v18, v73);
LABEL_32:
                v26 = 65602;
                v27 = 0;
                goto LABEL_33;
              }
            }
            while ( 1 )
            {
              Flink = v47->Flink;
              v49 = v47;
              v69 = v47;
              Blink = v47->Blink;
              v72 = Flink;
              if ( Flink->Blink != v49 || Blink->Flink != v49 )
                goto LABEL_69;
              Blink->Flink = Flink;
              Flink->Blink = Blink;
              v51 = (char)v49[1].Flink;
              if ( v51 == 1 )
              {
                if ( (unsigned __int8)KiTryUnwaitThread(v44, v49, WORD1(v49[1].Flink), 0LL) )
                {
                  v17 = (*((_DWORD *)v46 + 7))-- == 1;
                  if ( v17 )
                  {
LABEL_76:
                    v45 = v66;
                    goto LABEL_77;
                  }
                }
              }
              else
              {
                if ( v51 == 2 )
                {
                  BYTE1(v49[1].Flink) = 5;
                  v77 = (_DISPATCHER_HEADER *volatile)v49[1].Blink;
                  p_WaitListHead = &v77->WaitListHead;
                  v49->Flink = 0LL;
                  v57 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 < 2u )
                    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                  v70 = KeGetCurrentPrcb();
                  CurrentThread = v70->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v70->CurrentThread);
                    EtwTraceEnqueueWork(v60, v59, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v77);
                  v61 = p_WaitListHead;
                  v62 = v77;
                  if ( v61->Flink == v61
                    || LODWORD(v77[1].WaitListHead.Blink) >= HIDWORD(v77[1].WaitListHead.Blink)
                    || CurrentThread->Queue == v77 && CurrentThread->WaitReason == 15 )
                  {
LABEL_130:
                    SignalState = v62->SignalState;
                    v62->SignalState = SignalState + 1;
                    v65 = v62[1].WaitListHead.Flink;
                    if ( (_DISPATCHER_HEADER *volatile)v65->Flink != &v62[1] )
                      goto LABEL_69;
                    v69->Flink = (struct _LIST_ENTRY *)&v62[1];
                    v69->Blink = v65;
                    v65->Flink = v69;
                    v62[1].WaitListHead.Flink = v69;
                    if ( !SignalState && v61->Flink != v61 )
                    {
                      KiWakeOtherQueueWaiters((__int64)v70, (__int64)v62);
                      v62 = v77;
                    }
                  }
                  else
                  {
                    v63 = KiWakeQueueWaiter((__int64)v70, v77, (__int64)v69);
                    v62 = v77;
                    if ( !v63 )
                    {
                      v61 = p_WaitListHead;
                      goto LABEL_130;
                    }
                  }
                  _InterlockedAnd(&v62->Lock, 0xFFFFFF7F);
                  v17 = (*((_DWORD *)v46 + 7))-- == 1;
                  if ( v17 )
                    goto LABEL_76;
                  goto LABEL_137;
                }
                KiTryUnwaitThread(v44, v49, 256LL, 0LL);
              }
LABEL_137:
              v47 = v72;
              if ( v72 == (struct _LIST_ENTRY *)(v46 + 4) )
                goto LABEL_76;
            }
          }
          v19 = KxWaitForLockChainValid(a3);
        }
        *(_QWORD *)a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
        goto LABEL_29;
      }
      if ( *(_DWORD *)(BugCheckParameter1 + 72) )
      {
        v15 = *(_QWORD **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        v16 = *(_DWORD *)(BugCheckParameter1 + 72);
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      }
      else
      {
LABEL_17:
        v15 = 0LL;
        v16 = 0;
      }
      v76 = v15;
      goto LABEL_19;
    }
    if ( v10 )
    {
      if ( (v9 & 1) != 0 )
      {
        PsBoostThreadIo(v10);
        *(_DWORD *)(v8 + 8) &= ~1u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        LOBYTE(v11) = v9;
      }
      if ( (v11 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1820));
        *(_DWORD *)(v8 + 8) &= ~4u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      if ( (v11 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v10);
        *(_DWORD *)(v8 + 8) &= ~2u;
      }
    }
    goto LABEL_14;
  }
  v13 = *(_DWORD *)(BugCheckParameter1 + 68);
  v26 = 65618;
  v27 = v9 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v35 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      if ( a3 == (unsigned __int8 *)_InterlockedCompareExchange64(
                                      *((volatile signed __int64 **)a3 + 1),
                                      0LL,
                                      (signed __int64)a3) )
        goto LABEL_54;
      v35 = KxWaitForLockChainValid(a3);
    }
    *(_QWORD *)a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v35 + 8), 1uLL);
  }
LABEL_54:
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v53 = v37[5] - 1;
      v37[5] = v53;
      if ( !v53 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  v38 = a3[16];
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v38 < 2u )
  {
    v54 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v54);
  }
  result = v38;
  __writecr8(v38);
LABEL_33:
  __incgsdword(0x6370u);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v26, BugCheckParameter1, v27, v13);
  return result;
}
