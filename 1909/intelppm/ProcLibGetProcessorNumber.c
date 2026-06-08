/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0003770
 * Callers:
 *     ProcLibTraceEnergyCounterUpdate @ 0x1C0007C1C (ProcLibTraceEnergyCounterUpdate.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000805C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary2 @ 0x1C0022B5C (ProcLibTraceSummary2.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0029BD0 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0029E24 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002A0E4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C002A378 (ProcLibTraceCap.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C002AA74 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C002AC94 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C002B044 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C002B330 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C002B454 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceProcessorIds @ 0x1C002B854 (ProcLibTraceProcessorIds.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C002B958 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C002BC14 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C002BE50 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceSummary @ 0x1C002BFBC (ProcLibTraceSummary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C001B7D4 == 1 )
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
