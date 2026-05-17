/*
 * XREFs of RtlComputeImportTableHash @ 0x1800DF5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     sub_1800DF2D0 @ 0x1800DF2D0 (sub_1800DF2D0.c)
 *     sub_1800DF390 @ 0x1800DF390 (sub_1800DF390.c)
 *     sub_1800DF454 @ 0x1800DF454 (sub_1800DF454.c)
 *     sub_1800DF53C @ 0x1800DF53C (sub_1800DF53C.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F40B0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+C8h] [rbp+48h]

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 == 1 )
  {
    ZwCreateSection();
    v3 = -1073741816;
    if ( v7
      && (unsigned int)ZwUnmapViewOfSection() == -1073741755
      && (unsigned __int8)RtlFlushSecureMemoryCache(v7, 0LL) )
    {
      ZwUnmapViewOfSection();
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return v3;
}
