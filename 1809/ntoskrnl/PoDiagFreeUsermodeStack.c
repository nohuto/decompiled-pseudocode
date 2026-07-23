/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1406D7E10
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013F958 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
