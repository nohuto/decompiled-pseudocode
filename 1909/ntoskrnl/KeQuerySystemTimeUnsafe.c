/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140082404
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
