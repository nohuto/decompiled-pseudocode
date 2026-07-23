/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x140126A54
 * Callers:
 *     KeSetIdealProcessorThread @ 0x140126A00 (KeSetIdealProcessorThread.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004A40 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1400159B0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x140126AD0 (KeSetIdealProcessorThreadEx.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(struct _KTHREAD *a1, _PROCESSOR_NUMBER *a2, _PROCESSOR_NUMBER *a3)
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
