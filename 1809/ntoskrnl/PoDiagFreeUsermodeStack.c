/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1406D6B90
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F838 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
