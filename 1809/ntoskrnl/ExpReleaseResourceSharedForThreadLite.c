/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14004F450 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400AAC70 (ExpReleaseResourceForThreadLite.c)
 *     ExReleaseResourceForThreadLite @ 0x140111420 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140313828 (PerfLogExecutiveResourceRelease.c)
 */

void __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        PKLOCK_QUEUE_HANDLE LockHandle)
{
  bool v5; // r14
  unsigned int v6; // ecx
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  _QWORD *v14; // rbx
  int v15; // ecx
  bool v16; // zf
  int v17; // r13d
  bool v18; // al
  int v19; // esi
  char v20; // bp
  unsigned int v21; // ebp
  unsigned int v22; // esi
  unsigned int v23; // ebx
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  ULONG_PTR v27; // r11
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // rbp
  ULONG_PTR v30; // rbx
  _QWORD *v31; // rcx
  int v32; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v35; // rax
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // r12
  _QWORD *v40; // rcx
  char v41; // al
  char v42; // al
  __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int8 v45; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v47; // r9
  _QWORD *v48; // r9
  __int64 v49; // rcx
  char v50; // al
  int v51; // r8d
  _QWORD *v52; // rdx
  _QWORD *v53; // [rsp+30h] [rbp-78h]
  _QWORD *v54; // [rsp+38h] [rbp-70h]
  _QWORD *v55; // [rsp+40h] [rbp-68h]
  struct _KPRCB *v56; // [rsp+48h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  _QWORD *v58; // [rsp+60h] [rbp-48h]
  char v59; // [rsp+68h] [rbp-40h]
  int v60; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v61; // [rsp+B8h] [rbp+10h]
  __int64 v62; // [rsp+C8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v6 = 0;
  else
    v6 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v7 = *(_QWORD *)(BugCheckParameter1 + 48);
  v8 = BugCheckParameter1 + 48;
  if ( v7 != BugCheckParameter2 )
  {
    v24 = BugCheckParameter1 + 48;
    v25 = 0LL;
    if ( v7 )
      v24 = 0LL;
    LOBYTE(v25) = v7 != 0;
    if ( !v6
      || (v26 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v6 >= *(_DWORD *)(v26 + 8)
      || (v8 = v26 + 16LL * v6, *(_QWORD *)v8 != BugCheckParameter2) )
    {
      v27 = *(_QWORD *)(BugCheckParameter1 + 16);
      v28 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v27 || (v8 = v27 + 16, v25 >= v28) )
LABEL_82:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v27, 2uLL);
      while ( 1 )
      {
        v29 = v24;
        v30 = v24;
        if ( *(_QWORD *)v8 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v8 )
        {
          if ( ++v25 == v28 )
            goto LABEL_82;
        }
        else
        {
          v24 = v8;
          if ( v30 )
            v24 = v29;
        }
        v8 += 16LL;
        if ( v8 == v27 + 16LL * *(unsigned int *)(v27 + 8) )
          goto LABEL_82;
      }
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v8 - v27) >> 4;
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
      v61 = *(_DWORD *)(BugCheckParameter1 + 68);
      if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
        goto LABEL_17;
      v13 = *(_DWORD *)(BugCheckParameter1 + 76);
      if ( v13 )
      {
        v31 = *(_QWORD **)(BugCheckParameter1 + 40);
        v14 = 0LL;
        v53 = 0LL;
        if ( v31 )
        {
          if ( (_QWORD *)*v31 == v31 )
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = *v31;
            v43 = *v31;
            v44 = (_QWORD *)v31[1];
            if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v44 != v31 )
LABEL_81:
              __fastfail(3u);
            *v44 = v43;
            *(_QWORD *)(v43 + 8) = v44;
          }
          v12 = v31[2];
          v14 = v31;
          v31[1] = v31;
          *v31 = v31;
          v13 = *(_DWORD *)(BugCheckParameter1 + 76);
          v53 = v31;
        }
        *(_DWORD *)(BugCheckParameter1 + 76) = v13 - 1;
        v15 = 1;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
LABEL_19:
        v16 = v15 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
        *(_DWORD *)(BugCheckParameter1 + 64) += v15 - 1;
        if ( v16 )
          *(_WORD *)(BugCheckParameter1 + 24) = 0;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v17 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        if ( v12 )
        {
          v32 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v12;
          *(_DWORD *)(BugCheckParameter1 + 56) = v32 | 8;
        }
        KeReleaseInStackQueuedSpinLock(LockHandle);
        v18 = v12 != 0;
        v19 = 1;
        v20 = 2 * v18 + 1;
        if ( !v14 )
          goto LABEL_27;
        CurrentIrql = KeGetCurrentIrql();
        v59 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = v53;
        while ( 1 )
        {
          v36 = v35;
          v60 = 0;
          v35 = (_QWORD *)*v35;
          v54 = v35;
          if ( _interlockedbittestandset((volatile signed __int32 *)v36 + 6, 7u) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v60);
              while ( (*((_DWORD *)v36 + 6) & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset((volatile signed __int32 *)v36 + 6, 7u) );
            v35 = v54;
          }
          *((_DWORD *)v36 + 7) = 1;
          v37 = (_QWORD *)v36[4];
          if ( v37 != v36 + 4 )
            break;
LABEL_61:
          _InterlockedAnd((volatile signed __int32 *)v36 + 6, 0xFFFFFF7F);
          if ( v35 == v53 )
          {
            v42 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
            if ( v17 )
            {
              v19 = 2;
              if ( v42 > (char)v17 )
                v17 = v42;
            }
            if ( (v20 & 2) != 0 && v19 == 1 )
              v17 = 1;
            KiExitDispatcher((_DWORD)CurrentPrcb, 0, v19, v17, v59);
LABEL_27:
            v21 = v61;
            v22 = 65602;
            v23 = 0;
            goto LABEL_28;
          }
        }
        while ( 1 )
        {
          v38 = *v37;
          v39 = v37;
          v40 = (_QWORD *)v37[1];
          v58 = (_QWORD *)v38;
          if ( *(_QWORD **)(v38 + 8) != v39 || (_QWORD *)*v40 != v39 )
            goto LABEL_81;
          *v40 = v38;
          *(_QWORD *)(v38 + 8) = v40;
          v41 = *((_BYTE *)v39 + 16);
          if ( v41 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v39, *((unsigned __int16 *)v39 + 9), 0LL) )
            {
              v16 = (*((_DWORD *)v36 + 7))-- == 1;
              if ( v16 )
              {
LABEL_60:
                v35 = v54;
                goto LABEL_61;
              }
            }
          }
          else
          {
            if ( v41 == 2 )
            {
              *((_BYTE *)v39 + 17) = 5;
              v62 = v39[3];
              v55 = (_QWORD *)(v62 + 8);
              *v39 = 0LL;
              v45 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v56 = KeGetCurrentPrcb();
              CurrentThread = v56->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v56->CurrentThread);
                EtwTraceEnqueueWork(v47, v39, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v62);
              v48 = v55;
              v49 = v62;
              if ( (_QWORD *)*v48 == v48
                || *(_DWORD *)(v62 + 40) >= *(_DWORD *)(v62 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v62 && CurrentThread->WaitReason == 15 )
              {
LABEL_100:
                v51 = *(_DWORD *)(v49 + 4);
                *(_DWORD *)(v49 + 4) = v51 + 1;
                v52 = *(_QWORD **)(v49 + 32);
                if ( *v52 != v49 + 24 )
                  goto LABEL_81;
                *v39 = v49 + 24;
                v39[1] = v52;
                *v52 = v39;
                *(_QWORD *)(v49 + 32) = v39;
                if ( !v51 && (_QWORD *)*v48 != v48 )
                {
                  KiWakeOtherQueueWaiters(v56, v49);
                  v49 = v62;
                }
              }
              else
              {
                v50 = KiWakeQueueWaiter(v56, v62, v39);
                v49 = v62;
                if ( !v50 )
                {
                  v48 = v55;
                  goto LABEL_100;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v49, 0xFFFFFF7F);
              v16 = (*((_DWORD *)v36 + 7))-- == 1;
              if ( v16 )
                goto LABEL_60;
              goto LABEL_107;
            }
            KiTryUnwaitThread(CurrentPrcb, v39, 256LL, 0LL);
          }
LABEL_107:
          v37 = v58;
          if ( v58 == v36 + 4 )
            goto LABEL_60;
        }
      }
      if ( *(_DWORD *)(BugCheckParameter1 + 72) )
      {
        v14 = *(_QWORD **)(BugCheckParameter1 + 32);
        *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
        v15 = *(_DWORD *)(BugCheckParameter1 + 72);
        *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      }
      else
      {
LABEL_17:
        v14 = 0LL;
        v15 = 0;
      }
      v53 = v14;
      goto LABEL_19;
    }
    if ( v10 )
    {
      if ( (v9 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIo(v10, BugCheckParameter2);
        *(_DWORD *)(v8 + 8) &= ~1u;
        v11 = *(_DWORD *)(v8 + 8);
      }
      else
      {
        LOBYTE(v11) = v9;
      }
      if ( (v11 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1804));
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
  v21 = *(_DWORD *)(BugCheckParameter1 + 68);
  v23 = v9 >> 3;
  v22 = 65618;
  KeReleaseInStackQueuedSpinLock(LockHandle);
LABEL_28:
  __incgsdword(0x6370u);
  if ( v5 )
    PerfLogExecutiveResourceRelease(v22, BugCheckParameter1, v23, v21);
}
