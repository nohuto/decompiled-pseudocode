/*
 * XREFs of PspFreeCurrentThreadUserShadowStack @ 0x1408C9A98
 * Callers:
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401C0530 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 */

NTSTATUS PspFreeCurrentThreadUserShadowStack()
{
  NTSTATUS result; // eax
  _QWORD MemoryInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v2; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+78h] [rbp+10h] BYREF

  memset(MemoryInformation, 0, 0x28uLL);
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)__readmsr(0x6A7u),
             MemoryRegionInformation,
             MemoryInformation,
             0x28uLL,
             0LL);
  if ( result >= 0 )
  {
    v2 = 0LL;
    v3 = MemoryInformation[0];
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v3, &v2, 0x8000u, 0, 0x40000000);
  }
  return result;
}
