/*
 * XREFs of RtlpCtAllocateMemory @ 0x140899708
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F56A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpCtAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67744364u);
}
