/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     IoSetIoCompletionEx2 @ 0x1400E3FB8 (IoSetIoCompletionEx2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     IoFreeMiniCompletionPacket @ 0x140697720 (IoFreeMiniCompletionPacket.c)
 */

__int64 __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v6; // rdx
  int v7; // esi
  __int64 v9; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  unsigned __int8 v12; // di
  __int64 result; // rax
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v18 = (volatile signed __int64 *)a2;
  v19 = 0LL;
  v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LOBYTE(v19) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = SchedulerAssist[5];
      SchedulerAssist[5] = v14 + 1;
      if ( v14 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v17, a2);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v17);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v17, v6);
  }
  v7 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v7 = 2;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_9;
    v7 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_10;
    }
    v7 = 1;
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v17);
  v9 = v17;
  if ( v17 )
    goto LABEL_18;
  if ( (__int64 *)_InterlockedCompareExchange64(v18, 0LL, (signed __int64)&v17) != &v17 )
  {
    v9 = KxWaitForLockChainValid(&v17);
LABEL_18:
    v17 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_13:
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v15 = v11[5] - 1;
      v11[5] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  v12 = v19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v19 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  result = v12;
  __writecr8(v12);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      return IoSetIoCompletionEx2(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      return ExFreeHeapPool(a2);
    }
  }
  return result;
}
