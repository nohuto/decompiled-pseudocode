/*
 * XREFs of KeRundownQueueCommon @ 0x1400FAB20
 * Callers:
 *     KeRundownQueueEx @ 0x1400FAA3C (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14029C2F0 (KeRundownPriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, __int64 **a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v5; // rbp
  _DWORD *v6; // rsi
  __int64 *v9; // rax
  __int64 v10; // rax
  struct _KPRCB *v11; // r12
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rsi
  _QWORD *v17; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v19; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // rcx
  volatile signed __int32 *v24; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v27; // ecx
  __int64 *v28; // rdx
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v5 = a4;
  v6 = (_DWORD *)a3;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == (__int64 *)a2 )
        break;
      v22 = *v9;
      v23 = (__int64 *)v9[1];
      if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v23 != v9 )
LABEL_46:
        __fastfail(3u);
      *v23 = v22;
      v24 = (volatile signed __int32 *)(v9 - 65);
      *(_QWORD *)(v22 + 8) = v23;
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[5];
            SchedulerAssist[5] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64(v24 + 16, 0LL) )
          break;
        v29 = CurrentPrcb->SchedulerAssist;
        if ( v29 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v31 = v29[5] - 1;
            v29[5] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v34, v22, a3);
        while ( *((_QWORD *)v24 + 8) );
      }
      *((_QWORD *)v24 + 29) = 0LL;
      KiReleaseThreadLockSafe(v24);
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      do
      {
        *v6++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  while ( v13 != v12 )
  {
    v14 = (__int64)v13;
    v13 = (_QWORD *)*v13;
    v15 = *(_BYTE *)(v14 + 16);
    if ( v15 == 1 )
    {
      v32 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_45;
    }
    if ( v15 == 2 )
    {
      *(_BYTE *)(v14 + 17) = 5;
      v16 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)v14 = 0LL;
      v17 = (_QWORD *)(v16 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v19 = KeGetCurrentPrcb();
      CurrentThread = v19->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v33) = KeIsThreadRunning(v19->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v14, v33);
      }
      KiAcquireKobjectLockSafe(v16);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v19, v16, v14) )
      {
        v27 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v27 + 1;
        v28 = *(__int64 **)(v16 + 32);
        if ( *v28 != v16 + 24 )
          goto LABEL_46;
        *(_QWORD *)v14 = v16 + 24;
        *(_QWORD *)(v14 + 8) = v28;
        *v28 = v14;
        *(_QWORD *)(v16 + 32) = v14;
        if ( !v27 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters((__int64)v19, v16, v21);
      }
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    }
    else
    {
      v32 = 256LL;
LABEL_45:
      KiTryUnwaitThread((__int64)v11, v14, v32, 0LL);
    }
  }
  v12[1] = v12;
  *v12 = v12;
}
