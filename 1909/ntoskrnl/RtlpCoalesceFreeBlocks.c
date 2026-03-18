/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x14030ED6C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14030F9C0 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14030FF98 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x140310478 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1401CCDF0 (RtlCompareMemoryUlong.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x140319C20 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x14031A6F0 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rdx
  unsigned __int64 i; // rax
  __int64 *v16; // rax
  int v17; // ecx
  char v18; // al
  SIZE_T v19; // rdi
  SIZE_T v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 *v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 *v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 j; // rax
  __int64 *v30; // rax
  int v31; // ecx
  char v32; // al
  SIZE_T v33; // rdi
  SIZE_T v34; // rax
  int v36; // [rsp+38h] [rbp-20h]

  v4 = a2;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  if ( a2 - v5 != a2 )
  {
    v8 = *(_DWORD *)(a1 + 124);
    if ( ((*(_BYTE *)(v7 + 10) ^ *(_BYTE *)(a1 + 138) & (v8 >> 20)) & 1) == 0 )
    {
      if ( v8 )
      {
        *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
          RtlpAnalyzeHeapFailure(a1, a2 - v5);
      }
      v9 = *(__int64 **)(v7 + 24);
      v10 = v7 + 16;
      v11 = *(_QWORD *)(v7 + 16);
      v12 = *v9;
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v9 == v13 && v12 == v10 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
        v14 = *(__int64 **)(a1 + 312);
        if ( v14 )
        {
          for ( i = *((unsigned int *)v14 + 2); ; i = *((unsigned int *)v16 + 2) )
          {
            if ( *(unsigned __int16 *)(v7 + 8) < i )
            {
              v17 = *(unsigned __int16 *)(v7 + 8);
              goto LABEL_14;
            }
            v16 = (__int64 *)*v14;
            if ( !*v14 )
              break;
            v14 = (__int64 *)*v14;
          }
          v17 = *((_DWORD *)v14 + 2) - 1;
LABEL_14:
          RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v10, v7 + 16, v17, *(unsigned __int16 *)(v7 + 8));
        }
        *v9 = v11;
        *(_QWORD *)(v11 + 8) = v9;
        v18 = *(_BYTE *)(v7 + 10);
        if ( (v18 & 4) != 0 )
        {
          v19 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v18 & 2) != 0 && v19 > 4 )
            v19 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v20 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v19, 0xFEEEFEEE);
          if ( v20 != v19 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v20 + v7 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
        v21 = *(unsigned __int16 *)(v7 + 8);
        v4 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v21;
        *(_WORD *)(v7 + 8) = *(_WORD *)a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v10, v13, v12, 0LL);
      }
    }
  }
  v22 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v36 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v22 + 8);
    if ( HIBYTE(v36) != ((unsigned __int8)v36 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v22 + 8)) >> 8) ^ BYTE2(v36))) )
      RtlpLogHeapFailure(3, a1, v22, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v22 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v22 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v22 + 11) != (*(_BYTE *)(v22 + 8) ^ (unsigned __int8)(*(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v22);
    }
    v23 = *(__int64 **)(v22 + 24);
    v24 = *(_QWORD *)(v22 + 16);
    v25 = *v23;
    v26 = *(_QWORD *)(v24 + 8);
    if ( *v23 == v26 && v25 == v22 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v22 + 8);
      v27 = *(__int64 **)(a1 + 312);
      if ( v27 )
      {
        v28 = *(unsigned __int16 *)(v22 + 8);
        for ( j = *((unsigned int *)v27 + 2); ; j = *((unsigned int *)v30 + 2) )
        {
          if ( v28 < j )
          {
            v31 = *(unsigned __int16 *)(v22 + 8);
            goto LABEL_41;
          }
          v30 = (__int64 *)*v27;
          if ( !*v27 )
            break;
          v27 = (__int64 *)*v27;
        }
        v31 = *((_DWORD *)v27 + 2) - 1;
LABEL_41:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v27, v28, v22 + 16, v31, *(unsigned __int16 *)(v22 + 8));
      }
      *v23 = v24;
      *(_QWORD *)(v24 + 8) = v23;
      v32 = *(_BYTE *)(v22 + 10);
      if ( (v32 & 4) != 0 )
      {
        v33 = 16LL * *(unsigned __int16 *)(v22 + 8) - 32;
        if ( (v32 & 2) != 0 && v33 > 4 )
          v33 = 16LL * *(unsigned __int16 *)(v22 + 8) - 36;
        v34 = RtlCompareMemoryUlong((PVOID)(v22 + 32), v33, 0xFEEEFEEE);
        if ( v34 != v33 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v22,
            (const void *)(v34 + v22 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v22 + 8);
      *(_WORD *)(v4 + 8) = *(_WORD *)a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      return v4;
    }
    RtlpLogHeapFailure(13, a1, v22 + 16, v26, v25, 0LL);
  }
  return v4;
}
