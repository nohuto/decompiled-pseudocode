/*
 * XREFs of RtlpHeapAddListEntry @ 0x18002070C
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCreateUCREntry @ 0x18001D2C4 (RtlpCreateUCREntry.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x18006161C (RtlpPopulateListIndex.c)
 *     RtlpInitializeUCRIndex @ 0x180066B94 (RtlpInitializeUCRIndex.c)
 *     RtlpUpdateUCRIndexInsert @ 0x1800864AC (RtlpUpdateUCRIndexInsert.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x180021A60 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v7 = a4;
  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v9;
  v11 = *(_QWORD *)(v6 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v11 || (LOBYTE(a4) = a3, result = RtlpHeapListCompare(a1, v11, a6, a4), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = v7;
  }
  if ( !v11 )
  {
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (v9 & 0x1F);
  }
  return result;
}
