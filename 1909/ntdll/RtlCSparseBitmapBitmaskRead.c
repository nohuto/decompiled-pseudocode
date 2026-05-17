/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x180051688
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSizeHeap @ 0x180040320 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpReallocComputeSizes @ 0x180044B94 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x180046C60 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x180046E04 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpMetadataCommit @ 0x18004F044 (RtlpHpMetadataCommit.c)
 *     RtlpHpHeapWalk @ 0x18005103C (RtlpHpHeapWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)a1, a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
