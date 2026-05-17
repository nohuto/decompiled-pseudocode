/*
 * XREFs of RtlpFindEntry @ 0x1800466AC
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18003F020 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlZeroHeap @ 0x1800F2A30 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180106A8C (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x180045AF0 (RtlpHeapFindListLookupEntry.c)
 */

__int64 *__fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  int v6; // r9d
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 312);
  if ( a2 < *(unsigned int *)(v2 + 8) )
  {
LABEL_4:
    v6 = a2;
  }
  else
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v2;
      if ( !*(_QWORD *)v2 )
        break;
      v2 = *(_QWORD *)v2;
      if ( a2 < *(unsigned int *)(v5 + 8) )
        goto LABEL_4;
    }
    v6 = *(_DWORD *)(v2 + 8) - 1;
  }
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(a1, v2, 1, v6, a2);
    if ( result )
      break;
    v2 = *(_QWORD *)v2;
    v6 = *(_DWORD *)(v2 + 24);
  }
  return result;
}
