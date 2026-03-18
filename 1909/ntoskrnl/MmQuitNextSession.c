/*
 * XREFs of MmQuitNextSession @ 0x1406F04A0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x14019EA24 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x140301610 (PopWatchdogWorker.c)
 *     EtwpSendDataBlock @ 0x140693638 (EtwpSendDataBlock.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B64E0 (ObpProcessRemoveObjectQueue.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     PopLazySensorActiveInput @ 0x1408B59D4 (PopLazySensorActiveInput.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14097613C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
