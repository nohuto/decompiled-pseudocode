/*
 * XREFs of SmStoreExistsForProcess @ 0x140011FA4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1405B1B60 (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x1408B0798 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140011FDC (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_14055B188) != 0;
}
