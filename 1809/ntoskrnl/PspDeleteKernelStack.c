/*
 * XREFs of PspDeleteKernelStack @ 0x14012F170
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1400CA480 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  return MmDeleteKernelStack(*a2, 2);
}
