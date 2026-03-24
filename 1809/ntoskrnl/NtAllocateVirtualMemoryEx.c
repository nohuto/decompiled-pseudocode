/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x140675B40
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateVirtualMemory @ 0x140675BA0 (MmAllocateVirtualMemory.c)
 */

__int64 __fastcall NtAllocateVirtualMemoryEx(int a1, int a2, int a3, int a4, int a5, volatile void *Address, int a7)
{
  return MmAllocateVirtualMemory(a1, a2, a3, a4, a5, Address, a7, KeGetCurrentThread()->PreviousMode, 0, 0, 0LL);
}
