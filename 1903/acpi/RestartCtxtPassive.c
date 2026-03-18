/*
 * XREFs of RestartCtxtPassive @ 0x1C0029470
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(PSLIST_ENTRY ListEntry)
{
  byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(ListEntry, ((__int64)ListEntry[4].Next & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C0082700);
}
