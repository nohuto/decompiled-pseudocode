/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x1402F0964
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1402F15D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1402F1BB0 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  unsigned int v8; // ecx
  int v9; // edx
  __int64 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rdx
  unsigned __int64 i; // rax
  __int64 *v17; // rax
  int v18; // ecx
  char v19; // al
  SIZE_T v20; // rdi
  SIZE_T v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // edx
  int v25; // edx
  __int64 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 j; // rax
  __int64 *v32; // rax
  int v33; // r8d
  char v34; // al
  SIZE_T v35; // rdi
  SIZE_T v36; // rax

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
        v9 = *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(a1 + 136);
        *(_DWORD *)(v7 + 8) = v9;
        if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
          RtlpAnalyzeHeapFailure(a1, v7);
      }
      v10 = *(__int64 **)(v7 + 24);
      v11 = v7 + 16;
      v12 = *(_QWORD *)(v7 + 16);
      v13 = *v10;
      v14 = *(_QWORD *)(v12 + 8);
      if ( *v10 == v14 && v13 == v11 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
        v15 = *(__int64 **)(a1 + 312);
        if ( v15 )
        {
          for ( i = *((unsigned int *)v15 + 2); ; i = *((unsigned int *)v17 + 2) )
          {
            if ( *(unsigned __int16 *)(v7 + 8) < i )
            {
              v18 = *(unsigned __int16 *)(v7 + 8);
              goto LABEL_14;
            }
            v17 = (__int64 *)*v15;
            if ( !*v15 )
              break;
            v15 = (__int64 *)*v15;
          }
          v18 = *((_DWORD *)v15 + 2) - 1;
LABEL_14:
          RtlpHeapRemoveListEntry(a1, (_DWORD)v15, v11, v7 + 16, v18, *(unsigned __int16 *)(v7 + 8));
        }
        *v10 = v12;
        *(_QWORD *)(v12 + 8) = v10;
        v19 = *(_BYTE *)(v7 + 10);
        if ( (v19 & 4) != 0 )
        {
          v20 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v19 & 2) != 0 && v20 > 4 )
            v20 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v21 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v20, 0xFEEEFEEE);
          if ( v21 != v20 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v21 + v7 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
        v22 = *(unsigned __int16 *)(v7 + 8);
        v4 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v22;
        *(_WORD *)(v7 + 8) = *a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v11, v14, v13, 0LL);
      }
    }
  }
  v23 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v24 = *(_DWORD *)(v23 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v23 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v24))) )
      RtlpLogHeapFailure(3, a1, v23, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v23 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v25 = *(_DWORD *)(v23 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v23 + 8) = v25;
      if ( HIBYTE(v25) != ((unsigned __int8)v25 ^ (unsigned __int8)(BYTE1(v25) ^ BYTE2(v25))) )
        RtlpAnalyzeHeapFailure(a1, v23);
    }
    v26 = *(__int64 **)(v23 + 24);
    v27 = *(_QWORD *)(v23 + 16);
    v28 = *v26;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v26 == v29 && v28 == v23 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v23 + 8);
      v30 = *(__int64 **)(a1 + 312);
      if ( v30 )
      {
        for ( j = *((unsigned int *)v30 + 2); ; j = *((unsigned int *)v32 + 2) )
        {
          if ( *(unsigned __int16 *)(v23 + 8) < j )
          {
            v33 = *(unsigned __int16 *)(v23 + 8);
            goto LABEL_41;
          }
          v32 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
        }
        v33 = *((_DWORD *)v30 + 2) - 1;
LABEL_41:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v33, v23 + 16, v33, *(unsigned __int16 *)(v23 + 8));
      }
      *v26 = v27;
      *(_QWORD *)(v27 + 8) = v26;
      v34 = *(_BYTE *)(v23 + 10);
      if ( (v34 & 4) != 0 )
      {
        v35 = 16LL * *(unsigned __int16 *)(v23 + 8) - 32;
        if ( (v34 & 2) != 0 && v35 > 4 )
          v35 = 16LL * *(unsigned __int16 *)(v23 + 8) - 36;
        v36 = RtlCompareMemoryUlong((PVOID)(v23 + 32), v35, 0xFEEEFEEE);
        if ( v36 != v35 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v23,
            (const void *)(v23 + 32 + v36));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v23 + 8);
      *(_WORD *)(v4 + 8) = *a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      return v4;
    }
    RtlpLogHeapFailure(13, a1, v23 + 16, v29, v28, 0LL);
  }
  return v4;
}
