/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14005FC30
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14010AF70 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010AFFC (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14010B20C (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(volatile signed __int32 *a1, int a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // di
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
  {
    a3[1] = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(a1, CurrentIrql);
    a3[2] = CurrentIrql;
  }
  else
  {
    *a3 = 0LL;
    a3[2] = 0LL;
    CurrentThread = KeGetCurrentThread();
    a3[1] = a1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
}
