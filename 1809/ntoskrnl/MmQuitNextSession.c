/*
 * XREFs of MmQuitNextSession @ 0x1406CF650
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x140193DA4 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1402E4F30 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919C0 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x140936A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140936B30 (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
