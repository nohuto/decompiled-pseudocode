/*
 * XREFs of PspDeleteKernelStack @ 0x14012FAE0
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  return MmDeleteKernelStack(*a2, 2);
}
