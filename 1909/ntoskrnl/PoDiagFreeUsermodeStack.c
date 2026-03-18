/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1406F17F0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14013D618 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
