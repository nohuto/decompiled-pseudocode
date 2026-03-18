/*
 * XREFs of WdipSemWriteEvent @ 0x140716A98
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14071685C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14076B504 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1408EEA44 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1408EEB28 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408EEBB8 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1408EEC20 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1408EECA8 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1408EED3C (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1408EEF70 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1408EF124 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 */

NTSTATUS __fastcall WdipSemWriteEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *UserData)
{
  REGHANDLE v5; // rdi

  v5 = WdipSemRegHandle;
  if ( !a2 )
    return -1073741811;
  if ( EtwEventEnabled(WdipSemRegHandle, a2) )
    return EtwWrite(v5, a2, a3, a4, UserData);
  return -1073741816;
}
