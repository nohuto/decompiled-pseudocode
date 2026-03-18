/*
 * XREFs of PfFbBufferListShutdown @ 0x1402ED660
 * Callers:
 *     PfTCleanup @ 0x1408A0F20 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
