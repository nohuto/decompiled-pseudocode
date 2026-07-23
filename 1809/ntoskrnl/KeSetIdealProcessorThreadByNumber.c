/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x14015CED0
 * Callers:
 *     KeSetIdealProcessorThread @ 0x14015CE80 (KeSetIdealProcessorThread.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1400897E0 (KeGetProcessorNumberFromIndex.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
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
