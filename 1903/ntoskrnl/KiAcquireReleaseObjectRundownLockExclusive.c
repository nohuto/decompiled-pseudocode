/*
 * XREFs of KiAcquireReleaseObjectRundownLockExclusive @ 0x1400AA810
 * Callers:
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KeRundownQueueEx @ 0x1400AA4CC (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x1402B3640 (KeRundownPriQueue.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall KiAcquireReleaseObjectRundownLockExclusive(unsigned __int64 a1)
{
  volatile LONG *v1; // rbx

  v1 = &KiObjectRundownLocks[16 * ((a1 >> 4) & 0x3F)];
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
}
