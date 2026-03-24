/*
 * XREFs of PfFbBufferListShutdown @ 0x1402D325C
 * Callers:
 *     PfTCleanup @ 0x1408651DC (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
