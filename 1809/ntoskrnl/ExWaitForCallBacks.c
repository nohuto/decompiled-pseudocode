/*
 * XREFs of ExWaitForCallBacks @ 0x1408CF7A8
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140283AA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14028EB50 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
