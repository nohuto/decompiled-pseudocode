/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1406DF660
 * Callers:
 *     RtlpCtContextFree @ 0x1408D7B68 (RtlpCtContextFree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x140652374 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
