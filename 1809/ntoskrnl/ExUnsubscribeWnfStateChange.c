/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140607B80
 * Callers:
 *     RtlpCtContextFree @ 0x14089A98C (RtlpCtContextFree.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfDeleteSubscription @ 0x140608CA4 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
