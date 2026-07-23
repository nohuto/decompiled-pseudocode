/*
 * XREFs of WdipSemWriteEvent @ 0x140717E34
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140717BF8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14074479C (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1408B27F0 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1408B28D4 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408B2964 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1408B29CC (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1408B2A54 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1408B2AE8 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1408B2D1C (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1408B2ED0 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
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
