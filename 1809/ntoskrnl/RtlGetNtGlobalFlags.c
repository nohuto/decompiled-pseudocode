/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1408958C0
 * Callers:
 *     RtlpAllocateHeap @ 0x1402EFC30 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
