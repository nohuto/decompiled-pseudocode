/*
 * XREFs of SmKmFreeMdlForLock @ 0x14014D344
 * Callers:
 *     SmFpCleanup @ 0x14011B304 (SmFpCleanup.c)
 *     SmFpFree @ 0x14014A504 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400D7A30 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
