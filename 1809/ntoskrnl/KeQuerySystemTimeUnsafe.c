/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x14008A3C4
 * Callers:
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
