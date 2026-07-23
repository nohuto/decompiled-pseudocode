/*
 * XREFs of RtlpAllocateDebugInfo @ 0x180061BF8
 * Callers:
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3DB0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY RtlpAllocateDebugInfo()
{
  PSLIST_ENTRY result; // rax
  void *ProcessHeap; // rcx

  result = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !result )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( ProcessHeap )
      return (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  return result;
}
