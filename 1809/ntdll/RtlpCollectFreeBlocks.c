/*
 * XREFs of RtlpCollectFreeBlocks @ 0x180060F50
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpFlushHeap @ 0x18006896C (RtlpFlushHeap.c)
 * Callees:
 *     RtlpDecommitBlock @ 0x180061020 (RtlpDecommitBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 */

void __fastcall RtlpCollectFreeBlocks(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // rsi
  int v4; // edx
  unsigned __int16 v5; // cx
  char v6; // al

  v1 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); i != v1; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v4 = *(_DWORD *)(i - 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(i - 8) = v4;
      if ( HIBYTE(v4) != ((unsigned __int8)v4 ^ (unsigned __int8)(BYTE1(v4) ^ BYTE2(v4))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    v5 = *(_WORD *)(i - 8);
    if ( v5 <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = v5 ^ HIBYTE(v5) ^ *(_BYTE *)(i - 6);
        *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      }
      return;
    }
    v6 = *(_BYTE *)(i - 6);
    if ( (v6 & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = v5 ^ HIBYTE(v5) ^ v6;
        *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    else
    {
      RtlpDecommitBlock(a1);
    }
  }
}
