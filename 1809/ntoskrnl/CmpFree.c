/*
 * XREFs of CmpFree @ 0x1405FD200
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpReleaseGlobalQuota @ 0x1405FB668 (CmpReleaseGlobalQuota.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
