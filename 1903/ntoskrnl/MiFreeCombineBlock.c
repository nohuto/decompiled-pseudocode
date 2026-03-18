/*
 * XREFs of MiFreeCombineBlock @ 0x1401415B4
 * Callers:
 *     MiDecrementCombinedPte @ 0x140140850 (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiProcessCrcList @ 0x1406F3950 (MiProcessCrcList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r15
  KIRQL v6; // bp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v13; // rax
  unsigned int i; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  struct _KPRCB *v17; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v1 )
  {
    v5 = v1 & 0xF;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(16LL * (unsigned int)v5 + v4 + 104));
    RtlAvlRemoveNode((unsigned __int64 *)(v4 + 16 * (v5 + 6)), (unsigned __int64 *)a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(16LL * (unsigned int)v5 + v4 + 104));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFE0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  if ( (*(_DWORD *)(v2 + 8))-- == 1 )
  {
    v13 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v13 != (_QWORD *)a1 )
      {
        v15 = *v13;
        v16 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v16 != v13 )
          goto LABEL_21;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
      }
      v13 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v4 + 56) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 72);
    v9 = *(_QWORD *)(v4 + 72);
    if ( *(_QWORD *)(v9 + 8) != v4 + 72 )
LABEL_21:
      __fastfail(3u);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(v9 + 8) = a1;
    *v8 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v17);
  }
  __writecr8(OldIrql);
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 388), 0xFFFFFFFF);
}
