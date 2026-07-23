/*
 * XREFs of PspFreeCurrentThreadUserShadowStack @ 0x14088C820
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1401B8750 (ZwQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 */

NTSTATUS PspFreeCurrentThreadUserShadowStack()
{
  NTSTATUS result; // eax
  unsigned __int64 MemoryInformation[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+68h] [rbp+10h] BYREF

  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID)__readmsr(0x6A7u),
             MemoryRegionInformation,
             MemoryInformation,
             0x20uLL,
             0LL);
  if ( result >= 0 )
  {
    v2 = 0LL;
    v3 = MemoryInformation[0];
    return MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v3, &v2, 0x8000u, 0, 0x40000000);
  }
  return result;
}
