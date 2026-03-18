/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1408D37D0
 * Callers:
 *     RtlpAllocateHeap @ 0x14030E8E0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
