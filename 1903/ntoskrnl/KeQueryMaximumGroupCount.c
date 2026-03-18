/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140082030
 * Callers:
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
