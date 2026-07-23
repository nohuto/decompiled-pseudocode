/*
 * XREFs of MmQuitNextSession @ 0x1406D08F0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x140193EE4 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1402E5120 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 *     VfThunkApplyMandatoryThunks @ 0x140937A5C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140937B30 (VfThunkApplyThunks.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 */

__int64 __fastcall MmQuitNextSession(void *a1)
{
  ObfDereferenceObject(a1);
  return 0LL;
}
