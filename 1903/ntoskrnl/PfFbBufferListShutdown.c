/*
 * XREFs of PfFbBufferListShutdown @ 0x1402ED8FC
 * Callers:
 *     PfTCleanup @ 0x1408A16E0 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
