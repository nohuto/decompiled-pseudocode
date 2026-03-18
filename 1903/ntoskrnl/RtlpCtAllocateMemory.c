/*
 * XREFs of RtlpCtAllocateMemory @ 0x1408D8244
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpCtAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67744364u);
}
