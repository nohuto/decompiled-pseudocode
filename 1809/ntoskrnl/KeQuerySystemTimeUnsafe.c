/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x14008A3B4
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
