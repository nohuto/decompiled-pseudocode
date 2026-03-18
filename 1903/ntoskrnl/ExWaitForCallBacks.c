/*
 * XREFs of ExWaitForCallBacks @ 0x14090CF2C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140298FA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1402A5740 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
