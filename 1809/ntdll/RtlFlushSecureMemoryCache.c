/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F6D90
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F6EB0 (RtlpCallSecureMemoryCallbacks.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+3Ch] [rbp-1Ch]
  SIZE_T v6; // [rsp+40h] [rbp-18h]

  if ( RtlpSecMemListHead != &RtlpSecMemListHead )
  {
    if ( MemoryLength )
      return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           MemoryInformation,
           0x20uLL,
           0LL) >= 0
      && v5 != 0x10000 )
    {
      MemoryLength = v6;
      return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
    }
  }
  return 0;
}
