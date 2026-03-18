/*
 * XREFs of IoReleaseCancelSpinLock @ 0x140103EE0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140102780 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1401038C8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x140103A40 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140283498 (FsRtlpCancelExclusiveIrp.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  volatile signed __int64 **v2; // rbx
  __int64 v3; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // eax
  struct _KPRCB *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v2);
  v3 = (__int64)*v2;
  if ( *v2 )
    goto LABEL_8;
  if ( v2 != (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
  {
    v3 = KxWaitForLockChainValid((__int64 *)v2);
LABEL_8:
    *v2 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v3 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v6;
      if ( !v6 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && Irql < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v7);
  }
  __writecr8(Irql);
}
