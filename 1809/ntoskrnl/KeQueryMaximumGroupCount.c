/*
 * XREFs of KeQueryMaximumGroupCount @ 0x14008A420
 * Callers:
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
