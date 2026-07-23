/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x1800141C0
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpPopulateListIndex @ 0x18006161C (RtlpPopulateListIndex.c)
 *     RtlpUpdateUCRIndexRemove @ 0x180081F60 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned int v11; // r14d
  __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 *v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // [rsp+38h] [rbp-10h]

  v9 = a5 - *(_DWORD *)(a2 + 24);
  result = *(_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v12 = v9;
  v13 = v11 - 1;
  v14 = *(__int64 **)(result + 8 * v12);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == v11 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( v14 == a4 )
  {
    v15 = *a4;
    if ( *(_QWORD *)a2 )
      v13 = v11;
    if ( a5 < v13 )
    {
      if ( v15 == *(_QWORD *)(a2 + 32) )
        goto LABEL_19;
      if ( a3 )
      {
        v17 = *(_DWORD *)(v15 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v17 = *(_DWORD *)(v15 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
            RtlpLogHeapFailure(3, a1, v15 - 16, 0, 0LL, 0LL);
        }
        v16 = a6 - (unsigned __int16)v17;
      }
      else
      {
        v16 = a6 - *(_DWORD *)(v15 + 40);
      }
      if ( v16 )
      {
LABEL_19:
        result = *(_QWORD *)(a2 + 48);
        goto LABEL_10;
      }
      result = *(_QWORD *)(a2 + 48);
    }
    else if ( v15 == *(_QWORD *)(a2 + 32) )
    {
LABEL_10:
      *(_QWORD *)(result + 8 * v12) = 0LL;
      result = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) &= ~(1 << (v9 & 0x1F));
      return result;
    }
    *(_QWORD *)(result + 8 * v12) = v15;
  }
  return result;
}
