/*
 * XREFs of NdisProcessorNumberToIndex @ 0x1C0081A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisProcessorNumberToIndex(PROCESSOR_NUMBER ProcNum)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = ProcNum;
  return KeGetProcessorIndexFromNumber(&ProcNumber);
}
