/*
 * XREFs of PiEventFreeVetoBuffer @ 0x1406F14FC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiEventFreeVetoBuffer(PVOID *P)
{
  ExFreePoolWithTag(P[2], 0x4D706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x4D706E50u);
}
