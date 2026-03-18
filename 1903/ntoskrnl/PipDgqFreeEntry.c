/*
 * XREFs of PipDgqFreeEntry @ 0x14087C4EC
 * Callers:
 *     PiDmaGuardQueueRemoveEntry @ 0x1402A19E4 (PiDmaGuardQueueRemoveEntry.c)
 *     PipDmgFlushQueueAndRestartDevices @ 0x140874014 (PipDmgFlushQueueAndRestartDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PipDgqFreeEntry(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[2], 0x64706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x64706E50u);
}
