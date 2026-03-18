/*
 * XREFs of MmAllocateUserStack @ 0x14067749C
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1408C8E8C (PspReserveAndCommitUserShadowStack.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140677740 (MiAllocateVirtualMemoryCommon.c)
 */

__int64 __fastcall MmAllocateUserStack(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v6; // ecx
  _DWORD v8[16]; // [rsp+60h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[8] = a4;
  v6 = a5 != 0 ? -1073741824 : 0x80000000;
  if ( (v6 & 0x40000000) == 0 || (MiFlags & 0x2000000) != 0 )
    return MiAllocateVirtualMemoryCommon(-1, 0x2000, a5 != 0 ? 2 : 4, (__int64)v8, 0, v6, 0, 0LL);
  else
    return 3221225659LL;
}
