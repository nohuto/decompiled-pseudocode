/*
 * XREFs of KiResumeThread @ 0x1400817C8
 * Callers:
 *     KeForceResumeThread @ 0x140081704 (KeForceResumeThread.c)
 *     KiThawSingleThread @ 0x1400F1B9C (KiThawSingleThread.c)
 *     KeResumeThread @ 0x1401258B8 (KeResumeThread.c)
 *     KiAdjustThreadTimer @ 0x1402AED70 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x140042A10 (KiInsertTimerTable.c)
 *     KiSignalThread @ 0x14005BE90 (KiSignalThread.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiTestForAlertPending @ 0x14009A768 (KiTestForAlertPending.c)
 *     KiTimerWaitTest @ 0x1400A35B0 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1400E3100 (KiComputeDueTime.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThreadForApc @ 0x1400E5680 (KiSignalThreadForApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x1402B2BA0 (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  unsigned __int8 i; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rcx
  int v17; // edi
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  unsigned int v20; // edi
  char v21; // al
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // r8
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  _QWORD *v33; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v35; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v37; // r8
  int v38; // ecx
  __int64 *v39; // rdx
  unsigned int v41; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+80h] [rbp+18h] BYREF
  int v43; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  *(_DWORD *)(a1 + 740) = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = SchedulerAssist[5];
        SchedulerAssist[5] = v27 + 1;
        if ( v27 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v25[5] - 1;
        v25[5] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v42);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v12 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v12; ++i )
      {
        v14 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v14 + 17) == 6 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          *(_BYTE *)(v14 + 17) = 4;
          KiAcquireKobjectLockSafe(v15);
          if ( *(int *)(v15 + 4) > 0 || (*(_BYTE *)v15 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
            *(_BYTE *)(v14 + 17) = 5;
            v3 = 1;
            break;
          }
          v16 = *(__int64 **)(v15 + 16);
          if ( *v16 != v15 + 8 )
LABEL_84:
            __fastfail(3u);
          *(_QWORD *)v14 = v15 + 8;
          *(_QWORD *)(v14 + 8) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 16) = v14;
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        }
      }
      v17 = 0;
      if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v3 )
      {
        v26 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime(a1 + 256, v26, 0LL, &v41) )
        {
          if ( KiInsertTimerTable(a2, a1 + 256, 0LL, v41, 0LL) )
          {
            if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
            {
              LOBYTE(a3) = 1;
              KiTraceSetTimer(a1 + 256, 0LL, a3);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
            }
          }
          else
          {
            KiTimerWaitTest(a2, a1 + 256, 0LL);
          }
          v17 = 1;
        }
        else
        {
          v3 = 1;
          v17 = 0;
        }
      }
      v18 = KeGetCurrentPrcb();
      v43 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v29 = v19[5];
            v19[5] = v29 + 1;
            if ( v29 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v30 = v18->SchedulerAssist;
        if ( v30 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v31 = v30[5] - 1;
            v30[5] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v43);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v20 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v17 << 9) & 0xFFFDFFFF;
      v21 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v20;
      if ( v21 != 5
        || (LOBYTE(a3) = *(_BYTE *)(a1 + 391),
            LOBYTE(v11) = (v20 & 0x10) != 0,
            (unsigned int)KiTestForAlertPending(a1, v11, a3, 0LL)) )
      {
        v3 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v3 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      KiSignalThreadForApc(a2, a1 + 648, a3);
    }
  }
  LOBYTE(v8) = KiReleaseThreadLockSafe(a1);
  v9 = (_QWORD *)(a1 + 744);
  v10 = *(_QWORD **)(a1 + 744);
  if ( v10 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v22 = (__int64)v10;
      v10 = (_QWORD *)*v10;
      v23 = *(_BYTE *)(v22 + 16);
      if ( v23 == 1 )
        break;
      if ( v23 != 2 )
      {
        v24 = 256LL;
        goto LABEL_31;
      }
      *(_BYTE *)(v22 + 17) = 5;
      v32 = *(_QWORD *)(v22 + 24);
      *(_QWORD *)v22 = 0LL;
      v33 = (_QWORD *)(v32 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v35 = KeGetCurrentPrcb();
      CurrentThread = v35->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v37) = KeIsThreadRunning(v35->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v22, v37);
      }
      KiAcquireKobjectLockSafe(v32);
      if ( (_QWORD *)*v33 == v33
        || *(_DWORD *)(v32 + 40) >= *(_DWORD *)(v32 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v32 && CurrentThread->WaitReason == 15
        || (LOBYTE(v8) = KiWakeQueueWaiter((__int64)v35, (_QWORD *)v32, v22), !(_BYTE)v8) )
      {
        v38 = *(_DWORD *)(v32 + 4);
        *(_DWORD *)(v32 + 4) = v38 + 1;
        v8 = v32 + 24;
        v39 = *(__int64 **)(v32 + 32);
        if ( *v39 != v32 + 24 )
          goto LABEL_84;
        *(_QWORD *)v22 = v8;
        *(_QWORD *)(v22 + 8) = v39;
        *v39 = v22;
        *(_QWORD *)(v32 + 32) = v22;
        if ( !v38 && (_QWORD *)*v33 != v33 )
          LOBYTE(v8) = KiWakeOtherQueueWaiters((__int64)v35, v32);
      }
      _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
LABEL_32:
      if ( v10 == v9 )
        goto LABEL_9;
    }
    v24 = *(unsigned __int16 *)(v22 + 18);
LABEL_31:
    LOBYTE(v8) = KiTryUnwaitThread(a2, v22, v24, 0LL);
    goto LABEL_32;
  }
LABEL_9:
  v9[1] = v9;
  *v9 = v9;
  return v8;
}
