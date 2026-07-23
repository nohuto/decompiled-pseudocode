/*
 * XREFs of KiInsertQueueInternal @ 0x1400FAD6C
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // edx
  __int64 **v11; // rcx
  __int64 v12; // r8

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
    LOBYTE(v12) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v12);
  }
  KiAcquireKobjectLockSafe(a1);
  if ( (_QWORD *)*v2 == v2
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v9) = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2), !(_BYTE)v9) )
  {
    v10 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v10 + 1;
    v9 = a1 + 24;
    v11 = *(__int64 ***)(a1 + 32);
    if ( *v11 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = (__int64)v11;
    *v11 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v10 && (_QWORD *)*v2 != v2 )
      LOBYTE(v9) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1, v8);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v9;
}
