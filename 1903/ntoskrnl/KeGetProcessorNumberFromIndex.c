/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1400159B0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x140126A54 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x14017BD20 (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x14019AA80 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x1405AA190 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x1405E7130 (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x14086EEA0 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1408FC38C (EtwpProcessorRundown.c)
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
