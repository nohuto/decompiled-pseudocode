/*
 * XREFs of RtlGetSuiteMask @ 0x18002DCA0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18004B574 (RtlpActivateLowFragmentationHeap.c)
 *     LdrpEnableParallelLoading @ 0x180062C10 (LdrpEnableParallelLoading.c)
 *     SwitchedRtlGetVersion @ 0x18007332C (SwitchedRtlGetVersion.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180085658 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F0BD4 (RtlpHpOptIntoSegmentHeap.c)
 *     RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit @ 0x18010A820 (RtlpHpAppCompatEnablePaddingAndLFHSubsegmentCommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_DWORD *)NtCurrentPeb()->SharedData + 5);
  else
    return MEMORY[0x7FFE02D0];
}
