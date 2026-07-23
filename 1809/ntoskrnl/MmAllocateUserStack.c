/*
 * XREFs of MmAllocateUserStack @ 0x140676C58
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140676EB0 (MiAllocateVirtualMemoryCommon.c)
 */

__int64 __fastcall MmAllocateUserStack(int a1, int a2, int a3, int a4)
{
  _DWORD v9[16]; // [rsp+60h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a4 )
    v9[8] = a4 - 1;
  return MiAllocateVirtualMemoryCommon(-1, a1, a2, a3, 0x2000, 4, (__int64)v9, 0, 0x80000000, 0, 0LL);
}
