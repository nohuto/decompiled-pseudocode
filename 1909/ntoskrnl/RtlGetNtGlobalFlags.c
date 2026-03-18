/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1408D30D0
 * Callers:
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
