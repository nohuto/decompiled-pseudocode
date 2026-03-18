/*
 * XREFs of PnpWatchdogWorkItem @ 0x1402A01D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PnpProcessWatchdogWorkItem @ 0x14029FD18 (PnpProcessWatchdogWorkItem.c)
 */

void __fastcall PnpWatchdogWorkItem(__int64 a1)
{
  struct _FAST_MUTEX *v1; // rdi

  v1 = (struct _FAST_MUTEX *)(a1 + 208);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 208));
  PnpProcessWatchdogWorkItem(a1);
  KeReleaseGuardedMutex(v1);
}
