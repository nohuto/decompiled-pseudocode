/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x140015DA0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140127554 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x14017C410 (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x14019B0E0 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA170 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7900 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x14086E5A0 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v2; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x500 )
  {
    v2 = KiProcessorIndexToNumberMappingTable[ProcIndex];
    if ( v2 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v2 >> 6;
      ProcNumber->Number = v2 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
