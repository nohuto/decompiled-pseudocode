/*
 * XREFs of PnpFreeWatchdog @ 0x140005AF8
 * Callers:
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE840 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x1408282A0 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
