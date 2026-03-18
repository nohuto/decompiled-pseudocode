/*
 * XREFs of KiRundownMutants @ 0x140080B0C
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // r15
  unsigned int v3; // ebp
  int v4; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v7; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdx
  volatile signed __int32 **v12; // rcx
  volatile signed __int32 *v13; // r12
  bool v14; // cf
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  struct _KPRCB *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  volatile signed __int32 *v23; // rax
  __int64 v24; // rdi
  volatile signed __int32 **v25; // rcx
  char v26; // al
  bool v27; // zf
  __int64 v28; // rsi
  _QWORD *v29; // r15
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v33; // r8
  int v34; // r8d
  __int64 *v35; // rdx
  __int64 v36; // rax
  ULONG_PTR *v37; // rbx
  __int64 v38; // rdi
  unsigned __int8 v39; // cl
  ULONG_PTR *v40; // rbx
  __int64 v41; // rdi
  int v42; // [rsp+30h] [rbp-168h]
  unsigned int v43; // [rsp+34h] [rbp-164h]
  __int64 v44; // [rsp+38h] [rbp-160h]
  int v45; // [rsp+40h] [rbp-158h] BYREF
  int v46; // [rsp+44h] [rbp-154h] BYREF
  __int64 v47; // [rsp+48h] [rbp-150h]
  __int64 v48; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v49[32]; // [rsp+60h] [rbp-138h] BYREF

  v1 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v1 == v1 )
    return;
  v3 = 0;
  v4 = 0;
  v43 = 0;
  v42 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
    v14 = (unsigned __int8)CurrentIrql < 2u;
LABEL_22:
    if ( v14 )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = (__int64)CurrentPrcb;
  while ( 1 )
  {
    v7 = KeGetCurrentPrcb();
    v45 = 0;
    while ( 1 )
    {
      SchedulerAssist = v7->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v15 = SchedulerAssist[5];
          SchedulerAssist[5] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v16 = v7->SchedulerAssist;
      if ( v16 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v17 = v16[5] - 1;
          v16[5] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v45);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v10 = (volatile signed __int32 *)(v9 - 3);
    if ( *((_BYTE *)v9 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v9 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset(v10, 7u) )
      goto LABEL_11;
    KiReleaseThreadLockSafe(BugCheckParameter1);
    ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    if ( v9 != (_QWORD *)*v1 )
      goto LABEL_36;
    KiAcquireKobjectLockSafe(v9 - 3);
    if ( *((_QWORD *)v10 + 5) != BugCheckParameter1 )
    {
      _InterlockedAnd(v10, 0xFFFFFF7F);
LABEL_36:
      v9 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    CurrentPrcb = (struct _KPRCB *)v44;
    if ( v9 )
    {
      v18 = KeGetCurrentPrcb();
      v46 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v20 = v19[5];
            v19[5] = v20 + 1;
            if ( v20 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          break;
        v21 = v18->SchedulerAssist;
        if ( v21 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v22 = v21[5] - 1;
            v21[5] = v22;
            if ( !v22 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v46);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_11:
      v11 = *((_QWORD *)v10 + 3);
      v12 = (volatile signed __int32 **)*((_QWORD *)v10 + 4);
      if ( *(volatile signed __int32 **)(v11 + 8) != v10 + 6 || *v12 != v10 + 6 )
LABEL_84:
        __fastfail(3u);
      *v12 = (volatile signed __int32 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      KiReleaseThreadLockSafe(BugCheckParameter1);
      *((_BYTE *)v10 + 48) |= 1u;
      v13 = (volatile signed __int32 *)*((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 5) = 0LL;
      *((_DWORD *)v10 + 1) = 1;
      if ( v13 != v10 + 2 )
      {
        while ( 1 )
        {
          v23 = *(volatile signed __int32 **)v13;
          v24 = (__int64)v13;
          v13 = v23;
          v25 = *(volatile signed __int32 ***)(v24 + 8);
          if ( *((_QWORD *)v23 + 1) != v24 || *v25 != (volatile signed __int32 *)v24 )
            goto LABEL_84;
          *v25 = v23;
          *((_QWORD *)v23 + 1) = v25;
          v26 = *(_BYTE *)(v24 + 16);
          if ( v26 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v24, *(unsigned __int16 *)(v24 + 18), &v48) )
            {
              v27 = (*((_DWORD *)v10 + 1))-- == 1;
              if ( v27 )
                goto LABEL_77;
            }
          }
          else if ( v26 == 2 )
          {
            *(_BYTE *)(v24 + 17) = 5;
            v28 = *(_QWORD *)(v24 + 24);
            *(_QWORD *)v24 = 0LL;
            v29 = (_QWORD *)(v28 + 8);
            v30 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v31 = KeGetCurrentPrcb();
            CurrentThread = v31->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v33) = KeIsThreadRunning(v31->CurrentThread);
              EtwTraceEnqueueWork(CurrentThread, v24, v33);
            }
            KiAcquireKobjectLockSafe(v28);
            if ( (_QWORD *)*v29 == v29
              || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v31, (_QWORD *)v28, v24) )
            {
              v34 = *(_DWORD *)(v28 + 4);
              *(_DWORD *)(v28 + 4) = v34 + 1;
              v35 = *(__int64 **)(v28 + 32);
              if ( *v35 != v28 + 24 )
                goto LABEL_84;
              *(_QWORD *)v24 = v28 + 24;
              *(_QWORD *)(v24 + 8) = v35;
              *v35 = v24;
              *(_QWORD *)(v28 + 32) = v24;
              if ( !v34 && (_QWORD *)*v29 != v29 )
                KiWakeOtherQueueWaiters((__int64)v31, v28);
            }
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            v27 = (*((_DWORD *)v10 + 1))-- == 1;
            if ( v27 )
            {
LABEL_77:
              v3 = v43;
              v1 = (_QWORD *)(BugCheckParameter1 + 776);
              v4 = v42;
              break;
            }
            CurrentPrcb = (struct _KPRCB *)v44;
          }
          else
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v24, 256LL, 0LL);
          }
          if ( v13 == v10 + 2 )
            goto LABEL_77;
        }
      }
      if ( (v10[12] & 2) != 0 )
      {
        v36 = v3++;
        v43 = v3;
        v49[v36] = v10;
      }
      _InterlockedAnd(v10, 0xFFFFFF7F);
      CurrentPrcb = (struct _KPRCB *)v44;
      ++v4;
      LOBYTE(CurrentIrql) = v47;
      v42 = v4;
      if ( v4 == 32 )
      {
        LOBYTE(CurrentIrql) = v47;
        KiExitDispatcher(v44, 0LL, 1u, 1u, v47);
        if ( v3 )
        {
          v37 = v49;
          v38 = v3;
          do
          {
            KeAbPostRelease(*v37++);
            --v38;
          }
          while ( v38 );
        }
        v4 = 0;
        v3 = 0;
        v42 = 0;
        v43 = 0;
        v39 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        {
          v14 = v39 < 2u;
          goto LABEL_22;
        }
        goto LABEL_4;
      }
    }
  }
  KiReleaseThreadLockSafe(BugCheckParameter1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( v3 )
  {
    v40 = v49;
    v41 = v3;
    do
    {
      KeAbPostRelease(*v40++);
      --v41;
    }
    while ( v41 );
  }
}
