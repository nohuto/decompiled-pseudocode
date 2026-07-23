/*
 * XREFs of ZwContinue @ 0x1401C0930
 * Callers:
 *     RtlRestoreContext @ 0x1401CBDC0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401CC080 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
