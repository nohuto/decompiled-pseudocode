/*
 * XREFs of SmKmFreeMdlForLock @ 0x14015008C
 * Callers:
 *     SmFpCleanup @ 0x14011D6A0 (SmFpCleanup.c)
 *     SmFpFree @ 0x14014CA3C (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400E3D04 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
