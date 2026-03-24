/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FACB0
 * Callers:
 *     KeReleaseMutant @ 0x1400BFA10 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x1400FA9BC (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14029C100 (KeRundownPriQueue.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC660 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = &KiObjectRundownLocks[16 * ((a1 >> 4) & 0x3F)];
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
