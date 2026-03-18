/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1400897F0
 * Callers:
 *     KeSetIdealProcessorThreadByNumber @ 0x14015CDB0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeMaskInterrupt @ 0x14016D528 (KeMaskInterrupt.c)
 *     IoGetAffinityInterrupt @ 0x140190B30 (IoGetAffinityInterrupt.c)
 *     PnprQuiesceProcessorDpc @ 0x14057A350 (PnprQuiesceProcessorDpc.c)
 *     PspWriteTebIdealProcessor @ 0x1405F72AC (PspWriteTebIdealProcessor.c)
 *     PnprAddProcessorResources @ 0x140834540 (PnprAddProcessorResources.c)
 *     EtwpProcessorRundown @ 0x1408BF5C0 (EtwpProcessorRundown.c)
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
