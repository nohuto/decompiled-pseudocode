/*
 * XREFs of MiFreeCombineBlock @ 0x14011FB14
 * Callers:
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rbp
  KIRQL v5; // r15
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 OldIrql; // bl
  _QWORD *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v4 = *(_QWORD *)(a1 + 24) & 0xFLL;
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(16LL * (unsigned int)v4 + v3 + 104));
    RtlAvlRemoveNode((unsigned __int64 *)(v3 + 16 * (v4 + 6)), (unsigned __int64 *)a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(16LL * (unsigned int)v4 + v3 + 104));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFE0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 88), &LockHandle);
  if ( (*(_DWORD *)(v1 + 8))-- == 1 )
  {
    v11 = (_QWORD *)(v1 + 64);
    for ( i = 0; i < 0x3F; ++i )
    {
      if ( v11 != (_QWORD *)a1 )
      {
        v13 = *v11;
        v14 = (_QWORD *)v11[1];
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v14 != v11 )
          goto LABEL_17;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
      }
      v11 += 8;
    }
    *(_QWORD *)v1 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 24) = v1;
    if ( !*(_QWORD *)v1 )
    {
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v3 + 56) = v3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v7 = (_QWORD *)(v3 + 72);
    v8 = *(_QWORD *)(v3 + 72);
    if ( *(_QWORD *)(v8 + 8) != v3 + 72 )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(v8 + 8) = a1;
    *v7 = a1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(OldIrql);
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 380), 0xFFFFFFFF);
}
