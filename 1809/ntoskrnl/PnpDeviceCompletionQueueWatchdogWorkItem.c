/*
 * XREFs of PnpDeviceCompletionQueueWatchdogWorkItem @ 0x140289C60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x140289D7C (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpDeviceCompletionQueueWatchdogWorkItem(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 208);
  ExAcquireFastMutex((PFAST_MUTEX)(v1 + 64));
  PnpProcessWatchdogWorkItem(a1, PnpDeviceCompletionQueueWatchdogWorkItem);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 64));
}
