/*
 * XREFs of KiInsertQueueInternal @ 0x1400AA238
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rax
  int v9; // edx
  __int64 **v10; // rcx
  __int64 v11; // r8

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v11) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v11);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( (_QWORD *)*v2 == v2
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v8) = KiWakeQueueWaiter((__int64)CurrentPrcb, (_QWORD *)a1, (__int64)a2), !(_BYTE)v8) )
  {
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v9 + 1;
    v8 = a1 + 24;
    v10 = *(__int64 ***)(a1 + 32);
    if ( *v10 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *a2 = v8;
    a2[1] = (__int64)v10;
    *v10 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v9 && (_QWORD *)*v2 != v2 )
      LOBYTE(v8) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v8;
}
