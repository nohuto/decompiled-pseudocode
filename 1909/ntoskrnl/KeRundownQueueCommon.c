/*
 * XREFs of KeRundownQueueCommon @ 0x1400E35B0
 * Callers:
 *     KeRundownQueueEx @ 0x1400E34CC (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x1402B33A0 (KeRundownPriQueue.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, _QWORD **a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v5; // rbp
  _QWORD *v9; // rax
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
  int v21; // ecx
  __int64 *v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v5 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == a2 )
        break;
      v23 = *v9;
      v24 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v24 != v9 )
LABEL_20:
        __fastfail(3u);
      *v24 = v23;
      v25 = (__int64)(v9 - 65);
      *(_QWORD *)(v23 + 8) = v24;
      CurrentPrcb = KeGetCurrentPrcb();
      v33 = 0;
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
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
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
          KeYieldProcessorEx(&v33);
        while ( *(_QWORD *)(v25 + 64) );
      }
      *(_QWORD *)(v25 + 232) = 0LL;
      KiReleaseThreadLockSafe(v25);
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      do
      {
        *a3++ = 0;
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
        LOBYTE(v28) = KeIsThreadRunning(v19->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v14, v28);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v16);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v19, (_QWORD *)v16, v14) )
      {
        v21 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v21 + 1;
        v22 = *(__int64 **)(v16 + 32);
        if ( *v22 != v16 + 24 )
          goto LABEL_20;
        *(_QWORD *)v14 = v16 + 24;
        *(_QWORD *)(v14 + 8) = v22;
        *v22 = v14;
        *(_QWORD *)(v16 + 32) = v14;
        if ( !v21 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters((__int64)v19, v16);
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
