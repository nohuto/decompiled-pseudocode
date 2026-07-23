/*
 * XREFs of KeSetProcess @ 0x14008F630
 * Callers:
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  _QWORD *v7; // rbx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // r12
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r13
  _KTHREAD *CurrentThread; // r15
  int v15; // r8d
  _QWORD *v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v19; // [rsp+78h] [rbp+10h]
  char v20; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  v4 = (_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(a1 + 8);
  v18 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v5 != v4 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = *((_BYTE *)v7 + 16);
    if ( v8 == 1 )
    {
      v9 = *((unsigned __int16 *)v7 + 9);
      goto LABEL_7;
    }
    if ( v8 == 2 )
    {
      *((_BYTE *)v7 + 17) = 5;
      v10 = v7[3];
      *v7 = 0LL;
      v11 = (_QWORD *)(v10 + 8);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v13 = KeGetCurrentPrcb();
      CurrentThread = v13->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v17) = KeIsThreadRunning(v13->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v7, v17);
      }
      KiAcquireKobjectLockSafe(v10);
      if ( (_QWORD *)*v11 == v11
        || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v10 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v13, v10, v7) )
      {
        v15 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 4) = v15 + 1;
        v16 = *(_QWORD **)(v10 + 32);
        if ( *v16 != v10 + 24 )
          __fastfail(3u);
        *v7 = v10 + 24;
        v7[1] = v16;
        *v16 = v7;
        *(_QWORD *)(v10 + 32) = v7;
        if ( !v15 && (_QWORD *)*v11 != v11 )
          KiWakeOtherQueueWaiters(v13, v10);
      }
      _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      CurrentPrcb = v19;
    }
    else
    {
      v9 = 256LL;
LABEL_7:
      KiTryUnwaitThread(CurrentPrcb, v7, v9, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v4 = v4;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v20);
  return v18;
}
