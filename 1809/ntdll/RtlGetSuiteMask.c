/*
 * XREFs of RtlGetSuiteMask @ 0x180062DA0
 * Callers:
 *     RtlGetVersion @ 0x180028110 (RtlGetVersion.c)
 *     LdrpEnableParallelLoading @ 0x180031760 (LdrpEnableParallelLoading.c)
 *     RtlQueryResourcePolicy @ 0x180062630 (RtlQueryResourcePolicy.c)
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180062E38 (RtlpActivateLowFragmentationHeap.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088F24 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x18010C6E0 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x18010C8E4 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
