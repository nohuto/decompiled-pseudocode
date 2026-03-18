/*
 * XREFs of PspDeleteKernelStack @ 0x140130670
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1400A4B30 (MmDeleteKernelStack.c)
 */

signed __int64 __fastcall PspDeleteKernelStack(__int64 a1, unsigned __int64 *a2)
{
  return MmDeleteKernelStack(*a2, 2);
}
