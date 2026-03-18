/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14013C160
 * Callers:
 *     KeMaskInterrupt @ 0x14017C410 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x1402AA840 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004AD0 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 1280;
  return 0;
}
