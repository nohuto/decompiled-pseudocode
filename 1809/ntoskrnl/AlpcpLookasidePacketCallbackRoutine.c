/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x14010A8E0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AC1C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

LONG_PTR __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // ebp
  __int64 v7; // r15
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int8 v17; // di
  LONG_PTR result; // rax
  void *v19; // rdi
  int v20; // eax
  int v21; // eax
  struct _KPRCB *v22; // rcx
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int64 *v24; // [rsp+48h] [rbp-40h]
  unsigned __int8 v25; // [rsp+50h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a2[2];
  v6 = 0;
  do
  {
    v7 = 0LL;
    v24 = (volatile signed __int64 *)v3;
    v23 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v25 = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = SchedulerAssist[5];
        SchedulerAssist[5] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v23, v3);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v3, (__int64)&v23);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)&v23, v11, a3);
    }
    v12 = *(_DWORD *)(v3 + 16);
    if ( v12 )
    {
      *(_DWORD *)(v3 + 16) = v12 - 1;
    }
    else
    {
      v13 = *(_DWORD *)(v3 + 20);
      if ( v13 )
      {
        v7 = -1LL;
        *(_DWORD *)(v3 + 20) = v13 - 1;
      }
      else
      {
        --*(_DWORD *)(v3 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v3 + 32);
        *(_QWORD *)(v3 + 32) = a2;
        if ( !*(_DWORD *)(v3 + 12) && *(_DWORD *)(v3 + 24) )
          v6 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v23, retaddr);
      goto LABEL_15;
    }
    _m_prefetchw(&v23);
    v14 = v23;
    if ( v23 )
      goto LABEL_24;
    if ( (__int64 *)_InterlockedCompareExchange64(v24, 0LL, (signed __int64)&v23) != &v23 )
    {
      v14 = KxWaitForLockChainValid(&v23);
LABEL_24:
      v23 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    }
LABEL_15:
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v21 = v16[5] - 1;
        v16[5] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    v17 = v25;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    result = v17;
    __writecr8(v17);
    if ( !a1 )
      goto LABEL_18;
  }
  while ( !ObReferenceObjectSafeWithTag(*(_QWORD *)(v3 + 40)) );
  v19 = *(void **)(v3 + 40);
  IoSetIoCompletionEx2((__int64)v19, *(_QWORD *)(v3 + 48), v7, 0LL, 0LL, 0, a1, 0);
  result = ObfDereferenceObjectWithTag(v19, 0x746C6644u);
LABEL_18:
  if ( v6 )
    return AlpcpDeferredFreeCompletionPacketLookaside((PVOID)v3);
  return result;
}
