/*
 * XREFs of PfFbBufferListShutdown @ 0x1402D344C
 * Callers:
 *     PfTCleanup @ 0x14086643C (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
