/*
 * XREFs of SmStoreExistsForProcess @ 0x14008AF04
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC304 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x1408EDC30 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14058C188) != 0;
}
