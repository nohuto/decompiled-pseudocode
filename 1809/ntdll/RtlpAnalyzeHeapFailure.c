/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x180103934
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlGetUserInfoHeap @ 0x18005AC60 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x18005AFE0 (RtlSetUserValueHeap.c)
 *     RtlpCollectFreeBlocks @ 0x180060F50 (RtlpCollectFreeBlocks.c)
 *     RtlpPopulateListIndex @ 0x18006161C (RtlpPopulateListIndex.c)
 *     RtlpCoalesceHeap @ 0x18008C1D4 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2680 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F5670 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F5EB4 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801095C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

_UNKNOWN **__fastcall RtlpAnalyzeHeapFailure(__int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // cx
  char v8; // al
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // di
  unsigned __int16 v14; // bx
  unsigned __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v5 = 0;
  if ( !byte_180165408 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    if ( (v6 & *(_DWORD *)(a1 + 124)) != 0 )
      goto LABEL_34;
    v5 = 10;
    v7 = v6;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 && HIBYTE(v6) != (BYTE1(v6) ^ (unsigned __int8)(v6 ^ BYTE2(v6))) )
      goto LABEL_34;
    v5 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v20 = v4;
    }
    else
    {
      v4 = a1;
      v20 = a1;
    }
    if ( *(_DWORD *)(v4 + 16) != -1114130 )
      goto LABEL_34;
    v8 = *(_BYTE *)(a2 + 15);
    if ( v8 != 4 )
    {
      v5 = 2;
      if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
        goto LABEL_34;
    }
    v5 = 3;
    if ( v8 == 3 )
    {
      v9 = a2 + 16;
      v10 = *(_QWORD *)(a2 + 48);
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v10 < *(_QWORD *)(v4 + 48) )
        goto LABEL_34;
      if ( *(_QWORD *)(a2 + 56) + v10 > *(_QWORD *)(v4 + 72) )
        goto LABEL_34;
      v5 = 4;
      v11 = **(_QWORD **)(a2 + 24);
      if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
        goto LABEL_34;
      if ( v11 != v9 )
        goto LABEL_34;
      v5 = 5;
      v12 = **(_QWORD **)(a2 + 40);
      if ( v12 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v12 != a2 + 32 )
        goto LABEL_34;
      v13 = *(_WORD *)(a1 + 140);
    }
    else
    {
      v5 = 6;
      v13 = *(_WORD *)(a1 + 140);
      if ( (v13 ^ *(_WORD *)(a2 + 16LL * v7 + 12)) != v7 )
        goto LABEL_34;
    }
    v5 = 7;
    v14 = *(_WORD *)(a2 + 12);
    if ( v13 == v14 )
      goto LABEL_30;
    v15 = a2 - 16 * (v13 ^ (unsigned __int64)v14);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v16 = *(_DWORD *)(v15 + 8);
      if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
        LOWORD(v16) = v16 ^ *(_WORD *)(a1 + 136);
      v13 = *(_WORD *)(a1 + 140);
      v14 = *(_WORD *)(a2 + 12);
      v4 = v20;
      v5 = 7;
    }
    else
    {
      LOWORD(v16) = *(_WORD *)(v15 + 8);
    }
    if ( (_WORD)v16 == (v13 ^ v14) )
    {
LABEL_30:
      v5 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
      {
        v5 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v5 > 5 )
    {
      if ( v5 <= 7 )
        goto LABEL_48;
      if ( v5 == 8 )
      {
        v18 = 8LL;
        v19 = 13;
        return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
      }
      if ( v5 == 10 )
        goto LABEL_48;
      v19 = 2;
    }
    else
    {
      if ( v5 < 4 )
      {
        if ( v5 > 1 )
        {
          if ( v5 == 2 )
          {
            v18 = *(_QWORD *)(v4 + 40);
            v19 = 12;
          }
          else
          {
            v18 = 3LL;
            v19 = 0;
          }
          return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
        }
LABEL_48:
        v19 = 3;
        goto LABEL_49;
      }
      v19 = 14;
    }
LABEL_49:
    v18 = v5;
    return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
  }
  return result;
}
