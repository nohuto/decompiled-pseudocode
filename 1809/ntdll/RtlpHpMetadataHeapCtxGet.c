/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x180063D68
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpTaggableHeap @ 0x180064740 (RtlpHpTaggableHeap.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
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
  return (char *)&unk_180169990 + 16 * v2;
}
