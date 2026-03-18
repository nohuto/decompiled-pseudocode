/*
 * XREFs of WdipSemWriteEvent @ 0x140716BB4
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x140716978 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x1407435CC (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1408B15B0 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1408B1694 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408B1724 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1408B178C (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1408B1814 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1408B18A8 (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1408B1ADC (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1408B1C90 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
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
