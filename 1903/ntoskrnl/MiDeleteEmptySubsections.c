/*
 * XREFs of MiDeleteEmptySubsections @ 0x1400E20C0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140191000 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400E0170 (MiUpdateSystemProtoPtesTree.c)
 *     MiReduceUnusedSubsectionCount @ 0x1400E0AD8 (MiReduceUnusedSubsectionCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // al
  _QWORD *v4; // r14
  KIRQL v5; // bl
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r15
  void *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v4 = (_QWORD *)(a1 + 1672);
  while ( 1 )
  {
    v5 = v3;
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = v6 - 10;
    v8 = *(v6 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
    {
      if ( (*((_BYTE *)v7 + 34) & 8) != 0 )
      {
        v9 = (void *)v7[1];
        MiUpdateSystemProtoPtesTree(v7 + 14, 0);
        v7[1] = 0LL;
        v10 = v7 + 10;
        v11 = v7[10];
        v12 = (_QWORD *)v7[11];
        if ( *(_QWORD **)(v11 + 8) != v7 + 10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *((_WORD *)v7 + 17) &= ~8u;
        v7[11] = v7 + 10;
        *v10 = v10;
        MiReduceUnusedSubsectionCount(v7);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v5);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(v5);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1360) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
