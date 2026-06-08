/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0009594
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000931C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary @ 0x1C00287F0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0028AFC (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C0029018 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C0029130 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00295B8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00298E0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0029B98 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029DE8 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002A2EC (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002A57C (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002A784 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002A9A0 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002ABB0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C002B100 (ProcLibTracePerfConstraintChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C0011814 == 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v2 = 0;
      a2->Reserved = 0;
      a2->Group = 0;
      a2->Number = *(_BYTE *)(a1 + 72);
    }
  }
  else
  {
    return (unsigned int)KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), a2);
  }
  return v2;
}
