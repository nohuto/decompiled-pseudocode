/*
 * XREFs of MmGetNextSession @ 0x140012740
 * Callers:
 *     ExpHpCompactSessionPools @ 0x1401B7628 (ExpHpCompactSessionPools.c)
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     PfpPrivSourceEnum @ 0x1405B1B60 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919C0 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14069E4B4 (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x14069E824 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x14071BBBC (PfpProcessScenarioPhase.c)
 *     MmEnumerateSystemImages @ 0x140726B6C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4A0 (MmGetSessionMappedViewInformation.c)
 *     MmPerfLogSessionRundown @ 0x1408520FC (MmPerfLogSessionRundown.c)
 *     PopInputDisabled @ 0x140878E78 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408BF034 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB33C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140936A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140936B30 (VfThunkApplyThunks.c)
 * Callees:
 *     MiGetNextSession @ 0x140012754 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
