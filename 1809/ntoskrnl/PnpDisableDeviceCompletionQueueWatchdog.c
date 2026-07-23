/*
 * XREFs of PnpDisableDeviceCompletionQueueWatchdog @ 0x140159DD0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x140159D80 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     PnpDisableWatchdog @ 0x140005B60 (PnpDisableWatchdog.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 */

void __fastcall PnpDisableDeviceCompletionQueueWatchdog(__int64 a1)
{
  char v2; // bl

  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 64));
  v2 = PnpDisableWatchdog(*(_QWORD *)(a1 + 120));
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 64));
  if ( v2 )
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 120) + 144LL), Executive, 0, 0, 0LL);
}
