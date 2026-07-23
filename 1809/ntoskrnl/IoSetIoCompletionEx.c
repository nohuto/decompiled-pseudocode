/*
 * XREFs of IoSetIoCompletionEx @ 0x1400C6270
 * Callers:
 *     NtSetIoCompletionEx @ 0x140647350 (NtSetIoCompletionEx.c)
 *     PspSendReliableJobNotification @ 0x1406BA958 (PspSendReliableJobNotification.c)
 *     PspNotificationPacketCallback @ 0x1406C3A60 (PspNotificationPacketCallback.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r15
  int v16; // edx
  _QWORD *v17; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al

  v7 = 0;
  v11 = a1;
  if ( a7 )
  {
    v12 = (_QWORD *)(a1 + 8);
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v11);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v11, a7) )
    {
      v16 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v16 + 1;
      v17 = *(_QWORD **)(v11 + 32);
      if ( *v17 != v11 + 24 )
        __fastfail(3u);
      *(_QWORD *)a7 = v11 + 24;
      *(_QWORD *)(a7 + 8) = v17;
      *v17 = a7;
      *(_QWORD *)(v11 + 32) = a7;
      if ( !v16 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v11);
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    if ( MiniCompletionPacket )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      KeInsertQueueEx(v11, MiniCompletionPacket, 0LL, 0LL);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
