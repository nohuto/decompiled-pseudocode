/*
 * XREFs of ZwContinue @ 0x1401C14B0
 * Callers:
 *     RtlRestoreContext @ 0x1401CC940 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401CCC00 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
