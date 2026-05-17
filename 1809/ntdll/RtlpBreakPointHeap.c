/*
 * XREFs of RtlpBreakPointHeap @ 0x180108DD8
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlpValidateHeapEntry @ 0x18006D464 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F5BF8 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
