/*
 * XREFs of MmQuitNextSession @ 0x1406CF670
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     PsQueryCpuQuotaInformation @ 0x140193D84 (PsQueryCpuQuotaInformation.c)
 *     PopWatchdogWorker @ 0x1402E4E30 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406919E0 (ObpProcessRemoveObjectQueue.c)
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
