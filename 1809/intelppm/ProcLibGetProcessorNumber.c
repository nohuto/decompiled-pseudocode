/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0001CE0
 * Callers:
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0007D1C (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00080E4 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C001FECC (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0027C30 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0027E80 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0028138 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C00283C8 (ProcLibTraceCap.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0028ABC (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0028CD8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C0029084 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0029364 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C0029484 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C0029880 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C0029980 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0029C38 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0029E70 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C0029FD8 (ProcLibTraceSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C001A7C4 == 1 )
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
