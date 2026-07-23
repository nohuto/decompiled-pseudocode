/*
 * XREFs of RtlGetNonVolatileToken @ 0x1800F60A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 */

DWORD __cdecl RtlGetNonVolatileToken(PVOID NvBuffer, SIZE_T Size, PVOID *NvToken)
{
  __int64 v4; // rbx
  DWORD result; // eax
  _BYTE v6[56]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v7; // [rsp+88h] [rbp+20h] BYREF

  v4 = 1LL;
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, NvBuffer, MemoryRegionInformationEx, v6, 0x28uLL, &v7);
  if ( (result & 0x80000000) == 0 )
  {
    if ( (v6[12] & 0x20) != 0 )
    {
      if ( RtlpIsFlushRequired )
        v4 = 3LL;
      result = 0;
      *NvToken = (PVOID)v4;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
