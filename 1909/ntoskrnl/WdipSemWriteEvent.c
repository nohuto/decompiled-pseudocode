/*
 * XREFs of WdipSemWriteEvent @ 0x140718888
 * Callers:
 *     WdipSemWriteSemActionsEvent @ 0x14071864C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemSqmInit @ 0x14076E358 (WdipSemSqmInit.c)
 *     WdipSemWriteInflightLimitExceededEvent @ 0x1408EE354 (WdipSemWriteInflightLimitExceededEvent.c)
 *     WdipSemWriteMisconfigEvent @ 0x1408EE438 (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteProviderLimitExceededEvent @ 0x1408EE4C8 (WdipSemWriteProviderLimitExceededEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x1408EE530 (WdipSemWriteScenarioLimitExceededEvent.c)
 *     WdipSemWriteSemFailureEvent @ 0x1408EE5B8 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemWriteTimeoutEvent @ 0x1408EE64C (WdipSemWriteTimeoutEvent.c)
 *     WdipSemSqmAddToStream @ 0x1408EE880 (WdipSemSqmAddToStream.c)
 *     WdipSemSqmIncrementDword @ 0x1408EEA34 (WdipSemSqmIncrementDword.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
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
