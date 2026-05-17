/*
 * XREFs of RtlpBreakPointHeap @ 0x1801062C8
 * Callers:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004622C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapEntry @ 0x1800706F4 (RtlpValidateHeapEntry.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F2FB4 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x1801046F0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180104BF8 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x1801050F0 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
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
