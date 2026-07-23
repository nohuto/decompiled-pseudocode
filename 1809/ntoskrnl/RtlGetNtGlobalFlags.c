/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140896B00
 * Callers:
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
