/*
 * XREFs of ZwContinue @ 0x1401B8B50
 * Callers:
 *     RtlRestoreContext @ 0x1401C5900 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401C5BC0 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Context);
}
