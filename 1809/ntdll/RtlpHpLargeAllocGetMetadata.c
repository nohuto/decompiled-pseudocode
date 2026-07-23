/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x18006651C
 * Callers:
 *     RtlpHpLargeWalkHeap @ 0x18005B604 (RtlpHpLargeWalkHeap.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18007D330 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 *v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (unsigned __int64 *)(a1 + 72);
  result = *v3;
  if ( (v2 & 1) != 0 && result )
    result ^= (unsigned __int64)v3;
  while ( result )
  {
    v5 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v5 )
    {
      v6 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v5 )
        return result;
      v6 = *(_QWORD *)(result + 8);
    }
    if ( (v2 & 1) != 0 && v6 )
      result ^= v6;
    else
      result = v6;
  }
  return result;
}
