/*
 * XREFs of ExWaitForCallBacks @ 0x1408CF788
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140283BA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14028EC50 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
