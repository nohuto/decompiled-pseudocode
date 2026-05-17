/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F40B0
 * Callers:
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     RtlComputeImportTableHash @ 0x1800DF5C0 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800F41D0 @ 0x1800F41D0 (sub_1800F41D0.c)
 */

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-2Ch]
  __int64 v5; // [rsp+40h] [rbp-28h]

  if ( off_18015FA78 != (_UNKNOWN *)&off_18015FA78 )
  {
    if ( a2 )
      return sub_1800F41D0(a1, a2);
    if ( (int)ZwQueryVirtualMemory() >= 0 && v4 != 0x10000 )
    {
      a2 = v5;
      return sub_1800F41D0(a1, a2);
    }
  }
  return 0;
}
