/*
 * XREFs of ZwContinue @ 0x1401C0930
 * Callers:
 *     RtlRestoreContext @ 0x1401CBDC0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401CC080 (RcFrameConsolidation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Context, TestAlert, v2);
}
