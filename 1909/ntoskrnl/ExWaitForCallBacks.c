/*
 * XREFs of ExWaitForCallBacks @ 0x14090C98C
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140298D00 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1402A54A0 (KeDeregisterBoundCallback.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
