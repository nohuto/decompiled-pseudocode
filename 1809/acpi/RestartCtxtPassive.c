/*
 * XREFs of RestartCtxtPassive @ 0x1C0029CC0
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(__int64 a1)
{
  byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C0080710);
}
