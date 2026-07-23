/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F40B0
 * Callers:
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800F41D0 @ 0x1800F41D0 (sub_1800F41D0.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+3Ch] [rbp-2Ch]
  SIZE_T v6; // [rsp+40h] [rbp-28h]

  if ( off_18015FA78 != &off_18015FA78 )
  {
    if ( MemoryLength )
      return sub_1800F41D0(MemoryCache, MemoryLength);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           MemoryInformation,
           0x28uLL,
           0LL) >= 0
      && v5 != 0x10000 )
    {
      MemoryLength = v6;
      return sub_1800F41D0(MemoryCache, MemoryLength);
    }
  }
  return 0;
}
