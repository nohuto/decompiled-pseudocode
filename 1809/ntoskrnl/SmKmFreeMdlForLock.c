/*
 * XREFs of SmKmFreeMdlForLock @ 0x14015018C
 * Callers:
 *     SmFpCleanup @ 0x14011D710 (SmFpCleanup.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400E3D84 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
