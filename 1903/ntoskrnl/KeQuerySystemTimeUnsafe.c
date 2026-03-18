/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140082004
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
