/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x14015CDB0
 * Callers:
 *     KeSetIdealProcessorThread @ 0x14015CD60 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1400897F0 (KeGetProcessorNumberFromIndex.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A7450 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CE2C (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        struct _PROCESSOR_NUMBER *a2,
        struct _PROCESSOR_NUMBER *a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // eax
  ULONG IdealProcessor; // ecx
  unsigned int v8; // edi
  ULONG ProcIndex; // [rsp+48h] [rbp+20h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(a2);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v8 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v6 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber, &ProcIndex);
    IdealProcessor = ProcIndex;
    v8 = v6;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v8;
}
