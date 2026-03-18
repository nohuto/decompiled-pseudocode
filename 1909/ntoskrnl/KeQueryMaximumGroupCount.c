/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140082430
 * Callers:
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
