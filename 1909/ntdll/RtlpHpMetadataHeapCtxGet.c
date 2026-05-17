/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x18004CD1C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpStackLoggingEnabled @ 0x180040750 (RtlpHpStackLoggingEnabled.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x18004CFA0 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTaggableHeap @ 0x18004DCEC (RtlpHpTaggableHeap.c)
 *     RtlpHpMetadataCommit @ 0x18004F044 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataFree @ 0x18004F730 (RtlpHpMetadataFree.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpHpMetadataHeapCtxGet(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *a1 >> 8;
  v2 = 2LL;
  if ( (unsigned __int8)v1 < 2u )
    v2 = (unsigned __int8)v1;
  return (char *)&unk_18016A2F8 + 16 * v2;
}
