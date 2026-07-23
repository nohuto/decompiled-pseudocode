/*
 * XREFs of KiRundownMutants @ 0x1400898AC
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  char CurrentIrql; // r15
  __int64 v6; // rdx
  int v7; // r13d
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v9; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v11; // rdi
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  volatile signed __int32 **v14; // rcx
  volatile signed __int32 *v15; // r12
  bool v16; // cf
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  volatile signed __int32 *v25; // rax
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 **v27; // rcx
  char v28; // al
  bool v29; // zf
  __int64 v30; // rsi
  _QWORD *v31; // r15
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v35; // r8
  volatile signed __int32 **v36; // rdx
  unsigned __int8 v37; // cl
  char v38; // [rsp+30h] [rbp-58h]
  char v39[80]; // [rsp+38h] [rbp-50h] BYREF
  int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+98h] [rbp+10h] BYREF
  int v42; // [rsp+A0h] [rbp+18h] BYREF
  struct _KPRCB *v43; // [rsp+A8h] [rbp+20h]

  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 != v3 )
  {
    v40 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v38 = CurrentIrql;
    v6 = 2LL;
    __writecr8(2uLL);
    v7 = (unsigned __int8)v40 + 1;
    if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 )
    {
      v16 = (unsigned __int8)CurrentIrql < 2u;
LABEL_19:
      if ( v16 )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
LABEL_3:
    CurrentPrcb = KeGetCurrentPrcb();
    v43 = CurrentPrcb;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = KeGetCurrentPrcb();
        v41 = 0;
        while ( 1 )
        {
          SchedulerAssist = v9->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v9->NestingLevel <= (unsigned __int8)v7 )
            {
              v17 = SchedulerAssist[5];
              SchedulerAssist[5] = v7 + v17;
              if ( !(v7 + v17) )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          v18 = v9->SchedulerAssist;
          if ( v18 )
          {
            if ( v9->NestingLevel <= (unsigned __int8)v7 )
            {
              v19 = v18[5] - v7;
              v18[5] = v19;
              if ( !v19 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v41, v6, a3);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v11 = (_QWORD *)*v3;
        if ( (_QWORD *)*v3 == v3 )
        {
          KiReleaseThreadLockSafe(BugCheckParameter1);
          KiExitDispatcher((_DWORD)CurrentPrcb, 0, v7, v7, CurrentIrql);
          return;
        }
        v12 = (volatile signed __int32 *)(v11 - 3);
        if ( *((_BYTE *)v11 + 25) )
          KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v11 - 3), 0LL, 0LL);
        if ( _interlockedbittestandset(v12, 7u) )
          break;
LABEL_10:
        v13 = *((_QWORD *)v12 + 3);
        v14 = (volatile signed __int32 **)*((_QWORD *)v12 + 4);
        if ( *(volatile signed __int32 **)(v13 + 8) != v12 + 6 || *v14 != v12 + 6 )
LABEL_16:
          __fastfail(3u);
        *v14 = (volatile signed __int32 *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        KiReleaseThreadLockSafe(BugCheckParameter1);
        *((_QWORD *)v12 + 5) = 0LL;
        v15 = (volatile signed __int32 *)*((_QWORD *)v12 + 1);
        *((_DWORD *)v12 + 1) = v7;
        *((_BYTE *)v12 + 48) = v7;
        if ( v15 != v12 + 2 )
        {
          while ( 1 )
          {
            v25 = *(volatile signed __int32 **)v15;
            v26 = v15;
            v15 = v25;
            v27 = (volatile signed __int32 **)*((_QWORD *)v26 + 1);
            if ( *((volatile signed __int32 **)v25 + 1) != v26 || *v27 != v26 )
              goto LABEL_16;
            *v27 = v25;
            *((_QWORD *)v25 + 1) = v27;
            v28 = *((_BYTE *)v26 + 16);
            if ( v28 == (_BYTE)v7 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v26, *((unsigned __int16 *)v26 + 9), v39) )
              {
                v29 = (*((_DWORD *)v12 + 1))-- == 1;
                if ( v29 )
                  goto LABEL_74;
              }
            }
            else if ( v28 == 2 )
            {
              *((_BYTE *)v26 + 17) = 5;
              v30 = *((_QWORD *)v26 + 3);
              *(_QWORD *)v26 = 0LL;
              v31 = (_QWORD *)(v30 + 8);
              v32 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 && v32 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v33 = KeGetCurrentPrcb();
              CurrentThread = v33->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                LOBYTE(v35) = KeIsThreadRunning(v33->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v26, v35);
              }
              KiAcquireKobjectLockSafe(v30);
              if ( (_QWORD *)*v31 == v31
                || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v30 && CurrentThread->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(v33, v30, v26) )
              {
                a3 = *(unsigned int *)(v30 + 4);
                *(_DWORD *)(v30 + 4) = a3 + 1;
                v36 = *(volatile signed __int32 ***)(v30 + 32);
                if ( *v36 != (volatile signed __int32 *)(v30 + 24) )
                  goto LABEL_16;
                *(_QWORD *)v26 = v30 + 24;
                *((_QWORD *)v26 + 1) = v36;
                *v36 = v26;
                *(_QWORD *)(v30 + 32) = v26;
                if ( !(_DWORD)a3 && (_QWORD *)*v31 != v31 )
                  KiWakeOtherQueueWaiters(v33, v30);
              }
              _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
              v29 = (*((_DWORD *)v12 + 1))-- == 1;
              v7 = 1;
              if ( v29 )
              {
LABEL_74:
                CurrentIrql = v38;
                v3 = (_QWORD *)(BugCheckParameter1 + 776);
                break;
              }
              CurrentPrcb = v43;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v26, 256LL, 0LL);
            }
            if ( v15 == v12 + 2 )
              goto LABEL_74;
          }
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
        CurrentPrcb = v43;
        v6 = (unsigned int)(v7 + v40);
        v40 = v6;
        if ( (_DWORD)v6 == 32 )
        {
          KiExitDispatcher((_DWORD)v43, 0, v7, v7, CurrentIrql);
          v40 = 0;
          v37 = KeGetCurrentIrql();
          v6 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 )
          {
            v16 = v37 < 2u;
            goto LABEL_19;
          }
          goto LABEL_3;
        }
      }
      KiReleaseThreadLockSafe(BugCheckParameter1);
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v12 >> 4) & 0x3F)]);
      if ( v11 != (_QWORD *)*v3 )
        goto LABEL_33;
      KiAcquireKobjectLockSafe(v11 - 3);
      if ( *((_QWORD *)v12 + 5) != BugCheckParameter1 )
        break;
LABEL_34:
      ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v12 >> 4) & 0x3F)]);
      CurrentPrcb = v43;
      if ( v11 )
      {
        v20 = KeGetCurrentPrcb();
        v42 = 0;
        while ( 1 )
        {
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= (unsigned __int8)v7 )
            {
              v22 = v21[5];
              v21[5] = v7 + v22;
              if ( !(v7 + v22) )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          v23 = v20->SchedulerAssist;
          if ( v23 )
          {
            if ( v20->NestingLevel <= (unsigned __int8)v7 )
            {
              v24 = v23[5] - v7;
              v23[5] = v24;
              if ( !v24 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          do
            KeYieldProcessorEx(&v42, v6, a3);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        goto LABEL_10;
      }
    }
    _InterlockedAnd(v12, 0xFFFFFF7F);
LABEL_33:
    v11 = 0LL;
    goto LABEL_34;
  }
}
