/*
 * XREFs of SmStoreExistsForProcess @ 0x14008C204
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x1408ED540 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14008C23C (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14058C188) != 0;
}
