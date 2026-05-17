/*
 * XREFs of RtlCSparseBitmapBitmaskRead @ 0x18005B4B8
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005B340 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpHeapWalk @ 0x18005B76C (RtlpHpHeapWalk.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapBitmaskRead(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( _bittest64((const signed __int64 *)a1, a2 >> 30) )
    v2 = (_bittest64(*(const signed __int64 **)(a1 + 8), a2 >> 15) != 0) + 1;
  if ( v2 == 2 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * (a2 >> 6)) >> (a2 & 0x3F)) & 3LL;
  else
    return 0LL;
}
