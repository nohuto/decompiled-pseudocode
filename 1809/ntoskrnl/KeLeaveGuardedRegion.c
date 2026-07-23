/*
 * XREFs of KeLeaveGuardedRegion @ 0x1400167C0
 * Callers:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  __int64 v0; // rcx
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v0);
  }
}
