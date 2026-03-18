/*
 * XREFs of MmGetNextSession @ 0x14008B870
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14008B714 (ExpHpCompactSessionPools.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BA4 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406BAD50 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x1406BF68C (ExGetSessionPoolTagInformation.c)
 *     MmEnumerateSystemImages @ 0x140708430 (MmEnumerateSystemImages.c)
 *     PfpProcessScenarioPhase @ 0x140744520 (PfpProcessScenarioPhase.c)
 *     MmGetSessionMappedViewInformation @ 0x1408879CC (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x14088BB8C (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x1408B605C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408FBDFC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x14008B884 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
