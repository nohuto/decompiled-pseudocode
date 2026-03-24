/*
 * XREFs of PiEventFreeVetoBuffer @ 0x1406F025C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PiEventFreeVetoBuffer(PVOID *P)
{
  ExFreePoolWithTag(P[2], 0x4D706E50u);
  P[2] = 0LL;
  ExFreePoolWithTag(P, 0x4D706E50u);
}
