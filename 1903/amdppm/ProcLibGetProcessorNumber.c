/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C00028C0
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0002644 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0002910 (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceSummary @ 0x1C001C7F0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C001CB00 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C001D020 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001D5D0 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001D8FC (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001DBBC (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001DE10 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001E318 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001E5AC (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001E7B8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001E9D8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001EBEC (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001F148 (ProcLibTracePerfConstraintChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C0013854 == 1 )
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
