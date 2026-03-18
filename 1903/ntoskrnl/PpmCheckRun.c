/*
 * XREFs of PpmCheckRun @ 0x140108FC0
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

char PpmCheckRun()
{
  int v0; // ecx
  char result; // al
  __int64 (*v2)(void); // r8
  __int64 v3; // rbx
  int v4; // edi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  LONG SignalState; // eax
  struct _KEVENT *Flink; // rsi
  REGHANDLE v9; // rbx
  struct _KEVENT *v10; // rax
  __int64 v11; // r15
  struct _KEVENT **v12; // rcx
  char v13; // al
  __int64 v14; // r13
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // rax
  _KTHREAD *CurrentThread; // r12
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v19; // rdx
  __int64 v20; // r12
  int v21; // r8d
  __int64 *v22; // rcx
  struct _KEVENT *v23; // r12
  __int64 v24; // rsi
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // r15
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // rax
  _KTHREAD *v30; // r13
  unsigned __int8 v31; // al
  _QWORD *v32; // rdx
  __int64 v33; // r13
  int v34; // r8d
  __int64 *v35; // rcx
  __int64 v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF

  v0 = PpmCheckPipelineIndex;
  result = PpmCheckPipeline;
  v2 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( !v2 )
  {
LABEL_4:
    v3 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    if ( (stru_1404437E8.Header.Type & 0x7F) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( stru_1404437E8.Header.SignalState == 1 )
        goto LABEL_11;
      v4 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&stru_1404437E8.Header.Lock);
    SignalState = stru_1404437E8.Header.SignalState;
    stru_1404437E8.Header.SignalState = 1;
    if ( SignalState )
    {
LABEL_10:
      _InterlockedAnd((volatile signed __int32 *)&stru_1404437E8, 0xFFFFFF7F);
      result = KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
LABEL_11:
      if ( v3 )
        result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( PpmEtwRegistered )
      {
        v9 = PpmEtwHandle;
        result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
        if ( result )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = (ULONGLONG)&PpmCheckTime;
          return EtwWriteEx(v9, &PPM_ETW_PERF_CHECK_STOP, 0LL, 0, 0LL, 0LL, 1u, &UserData);
        }
      }
      return result;
    }
    if ( !v4 )
    {
      Flink = (struct _KEVENT *)stru_1404437E8.Header.WaitListHead.Flink;
      if ( stru_1404437E8.Header.WaitListHead.Flink == &stru_1404437E8.Header.WaitListHead )
        goto LABEL_10;
      while ( 1 )
      {
        v10 = *(struct _KEVENT **)&Flink->Header.Lock;
        v11 = (__int64)Flink;
        Flink = v10;
        v12 = *(struct _KEVENT ***)(v11 + 8);
        if ( v10->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v11 || *v12 != (struct _KEVENT *)v11 )
          goto LABEL_18;
        *v12 = v10;
        v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v12;
        v13 = *(_BYTE *)(v11 + 16);
        if ( v13 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v11, *(unsigned __int16 *)(v11 + 18), 0LL) )
        {
          if ( !--stru_1404437E8.Header.SignalState )
            goto LABEL_10;
        }
LABEL_23:
        if ( Flink == (struct _KEVENT *)&stru_1404437E8.Header.WaitListHead )
          goto LABEL_10;
      }
      if ( v13 != 2 )
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v11, 256LL, 0LL);
        goto LABEL_23;
      }
      *(_BYTE *)(v11 + 17) = 5;
      v14 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)v11 = 0LL;
      v15 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v16 = KeGetCurrentPrcb();
      v36 = (__int64)v16;
      CurrentThread = v16->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v16->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v11, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v14);
      v19 = (_QWORD *)(v14 + 8);
      if ( (_QWORD *)*v19 == v19
        || *(_DWORD *)(v14 + 40) >= *(_DWORD *)(v14 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v14 && CurrentThread->WaitReason == 15 )
      {
        v20 = v36;
      }
      else
      {
        v20 = v36;
        if ( KiWakeQueueWaiter(v36, (_QWORD *)v14, v11) )
          goto LABEL_48;
        v19 = (_QWORD *)(v14 + 8);
      }
      v21 = *(_DWORD *)(v14 + 4);
      *(_DWORD *)(v14 + 4) = v21 + 1;
      v22 = *(__int64 **)(v14 + 32);
      if ( *v22 != v14 + 24 )
        goto LABEL_18;
      *(_QWORD *)v11 = v14 + 24;
      *(_QWORD *)(v11 + 8) = v22;
      *v22 = v11;
      *(_QWORD *)(v14 + 32) = v11;
      if ( !v21 && (_QWORD *)*v19 != v19 )
        KiWakeOtherQueueWaiters(v20, v14);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
      if ( !--stru_1404437E8.Header.SignalState )
        goto LABEL_10;
      goto LABEL_23;
    }
    v23 = (struct _KEVENT *)stru_1404437E8.Header.WaitListHead.Flink;
    if ( stru_1404437E8.Header.WaitListHead.Flink == &stru_1404437E8.Header.WaitListHead )
    {
LABEL_76:
      stru_1404437E8.Header.WaitListHead.Blink = &stru_1404437E8.Header.WaitListHead;
      stru_1404437E8.Header.WaitListHead.Flink = &stru_1404437E8.Header.WaitListHead;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v24 = (__int64)v23;
      v23 = *(struct _KEVENT **)&v23->Header.Lock;
      v25 = *(_BYTE *)(v24 + 16);
      if ( v25 == 1 )
      {
        v26 = *(unsigned __int16 *)(v24 + 18);
LABEL_74:
        KiTryUnwaitThread((__int64)CurrentPrcb, v24, v26, 0LL);
        goto LABEL_75;
      }
      if ( v25 != 2 )
      {
        v26 = 256LL;
        goto LABEL_74;
      }
      *(_BYTE *)(v24 + 17) = 5;
      v27 = *(_QWORD *)(v24 + 24);
      *(_QWORD *)v24 = 0LL;
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v29 = KeGetCurrentPrcb();
      v37 = (__int64)v29;
      v30 = v29->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v31 = KeIsThreadRunning(v29->CurrentThread);
        EtwTraceEnqueueWork(v30, v24, v31);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v27);
      v32 = (_QWORD *)(v27 + 8);
      if ( (_QWORD *)*v32 == v32
        || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
        || v30->Queue == (_DISPATCHER_HEADER *volatile)v27 && v30->WaitReason == 15 )
      {
        break;
      }
      v33 = v37;
      if ( !KiWakeQueueWaiter(v37, (_QWORD *)v27, v24) )
      {
        v32 = (_QWORD *)(v27 + 8);
LABEL_68:
        v34 = *(_DWORD *)(v27 + 4);
        *(_DWORD *)(v27 + 4) = v34 + 1;
        v35 = *(__int64 **)(v27 + 32);
        if ( *v35 != v27 + 24 )
LABEL_18:
          __fastfail(3u);
        *(_QWORD *)v24 = v27 + 24;
        *(_QWORD *)(v24 + 8) = v35;
        *v35 = v24;
        *(_QWORD *)(v27 + 32) = v24;
        if ( !v34 && (_QWORD *)*v32 != v32 )
          KiWakeOtherQueueWaiters(v33, v27);
      }
      _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
LABEL_75:
      if ( v23 == (struct _KEVENT *)&stru_1404437E8.Header.WaitListHead )
        goto LABEL_76;
    }
    v33 = v37;
    goto LABEL_68;
  }
  while ( 1 )
  {
    PpmCheckPipelineIndex = v0 + 1;
    result = v2();
    if ( !result )
      return result;
    v0 = PpmCheckPipelineIndex;
    result = PpmCheckPipeline;
    v2 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v2 )
      goto LABEL_4;
  }
}
