/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A720
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14068FA10 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v7; // rdx
  int v8; // esi
  __int64 v10; // rax
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  unsigned __int8 v13; // di
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v18; // [rsp+48h] [rbp-20h]
  unsigned __int8 v19; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v18 = (volatile signed __int64 *)a2;
  v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v19 = CurrentIrql;
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
    v7 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v17);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&v17, v7, a3);
  }
  v8 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v8 = 2;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_9;
    v8 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_10;
    }
    v8 = 1;
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v17);
  v10 = v17;
  if ( v17 )
    goto LABEL_18;
  if ( (__int64 *)_InterlockedCompareExchange64(v18, 0LL, (signed __int64)&v17) != &v17 )
  {
    v10 = KxWaitForLockChainValid(&v17);
LABEL_18:
    v17 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_13:
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v15 = v12[5] - 1;
      v12[5] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  v13 = v19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(v13);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      IoSetIoCompletionEx2(*(_QWORD *)(a2 + 8), 0LL, 0LL, 0LL, 0LL, 0, *(_QWORD *)(a2 + 16), 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
