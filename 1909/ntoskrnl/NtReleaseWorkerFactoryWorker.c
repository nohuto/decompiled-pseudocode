/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x14005B710
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueEx @ 0x14000D0C0 (KeInsertQueueEx.c)
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140113E98 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068178C (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  _QWORD *v2; // rdi
  volatile signed __int64 *v3; // rbx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  int v10; // eax
  __int64 v11; // rax
  NTSTATUS v12; // r12d
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int8 v16; // si
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rsi
  char v21; // r15
  struct _KPRCB *v22; // rbp
  _KTHREAD *CurrentThread; // r14
  PVOID v24; // rbx
  int v25; // edx
  __int64 *v26; // rcx
  int v27; // eax
  int v28; // eax
  struct _KPRCB *v29; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v2 = Object;
  v3 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v33 = v3;
  v32 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LOBYTE(v34) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v32, v3);
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64(v3, (__int64)&v32);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&v32, v7);
  }
  v8 = v2[2];
  v9 = 0;
  if ( *(_BYTE *)(v8 + 33) )
  {
    v12 = 128;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 24);
    if ( v10 == -1 )
    {
      v12 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v8 + 24) = v10 + 1;
      v11 = v2[2];
      if ( !*(_BYTE *)(v11 + 32) )
      {
        *(_BYTE *)(v11 + 32) = 1;
        v9 = 1;
      }
      v12 = 0;
      if ( v9 && (*((_DWORD *)Object + 78) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode(Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v32, retaddr);
  }
  else
  {
    _m_prefetchw(&v32);
    v13 = v32;
    if ( !v32 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v33, 0LL, (signed __int64)&v32) == &v32 )
        goto LABEL_17;
      v13 = KxWaitForLockChainValid(&v32);
    }
    v32 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_17:
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v28 = v15[5] - 1;
      v15[5] = v28;
      if ( !v28 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  v16 = v34;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v34 < 2u )
  {
    v29 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v29);
  }
  __writecr8(v16);
  if ( v9 )
  {
    v17 = v2[2];
    v18 = *(_QWORD *)(v17 + 16);
    v19 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 24) = 0LL;
      v20 = (_QWORD *)(v19 + 8);
      *(_QWORD *)(v18 + 32) = 0LL;
      *(_DWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 48) = 0LL;
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v21 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v22 = KeGetCurrentPrcb();
      CurrentThread = v22->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v22->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v18, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v19);
      if ( (_QWORD *)*v20 == v20
        || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v22, (_QWORD *)v19, v18) )
      {
        v25 = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v19 + 4) = v25 + 1;
        v26 = *(__int64 **)(v19 + 32);
        if ( *v26 != v19 + 24 )
          __fastfail(3u);
        *(_QWORD *)v18 = v19 + 24;
        *(_QWORD *)(v18 + 8) = v26;
        *v26 = v18;
        *(_QWORD *)(v19 + 32) = v18;
        if ( !v25 && (_QWORD *)*v20 != v20 )
          KiWakeOtherQueueWaiters((__int64)v22, v19);
      }
      _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v22, 0, 1, 0, v21);
    }
    else
    {
      LOBYTE(v14) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v14, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v19, (_QWORD *)MiniCompletionPacket, 0, 0);
      }
    }
    v24 = Object;
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  else
  {
    v24 = Object;
  }
  ObfDereferenceObjectWithTag(v24, 0x746C6644u);
  return v12;
}
