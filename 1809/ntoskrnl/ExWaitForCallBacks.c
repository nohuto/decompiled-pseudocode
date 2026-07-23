/*
 * XREFs of ExWaitForCallBacks @ 0x1408D0A48
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140283D90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14028EE40 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
