/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14013BB40
 * Callers:
 *     KeMaskInterrupt @ 0x14017BD20 (KeMaskInterrupt.c)
 *     KeSetTargetProcessorDpc @ 0x1402AAAE0 (KeSetTargetProcessorDpc.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004A40 (KeGetProcessorIndexFromNumber.c)
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
