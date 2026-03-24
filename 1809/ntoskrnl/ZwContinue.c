/*
 * XREFs of ZwContinue @ 0x1401B89F0
 * Callers:
 *     RtlRestoreContext @ 0x1401C57A0 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1401C5A60 (RcFrameConsolidation.c)
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
