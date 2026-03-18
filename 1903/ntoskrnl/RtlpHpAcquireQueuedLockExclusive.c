/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14005FB90
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140061BE0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14010B3A0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14010B42C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14010B63C (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
