/*
 * XREFs of SmKmFreeMdlForLock @ 0x14014CCA4
 * Callers:
 *     SmFpCleanup @ 0x140106120 (SmFpCleanup.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140107B54 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
