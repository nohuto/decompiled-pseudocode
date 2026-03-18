/*
 * XREFs of MmGetNextSession @ 0x14008CB70
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14008CA14 (ExpHpCompactSessionPools.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BB8 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     ExGetSessionPoolTagInformation @ 0x1406A468C (ExGetSessionPoolTagInformation.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     PfpProcessScenarioPhase @ 0x140746420 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1408871F8 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x14088B3AC (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x1408B592C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408FB7DC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x14008CB84 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
