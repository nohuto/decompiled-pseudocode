/*
 * XREFs of CiSchedulerCommitPriority @ 0x1C0002380
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000A5B0 (CiThreadSetRelativePriority.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C0002540 (CiSchedulerSetPriority.c)
 */

void __fastcall CiSchedulerCommitPriority(__int64 a1)
{
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerSetPriority(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
