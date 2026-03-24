/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1408958A0
 * Callers:
 *     RtlpAllocateHeap @ 0x1402EFD30 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
