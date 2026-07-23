/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18004622C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x1800EFE6C (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A16B0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(unsigned __int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 j; // rax
  __int64 *v19; // rax
  int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  SIZE_T v23; // rbx
  SIZE_T v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 m; // rax
  char v32; // al
  __int64 *v33; // rax
  int v34; // ecx
  __int64 *v35; // r14
  __int64 v36; // r8
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 *v40; // rdx
  unsigned __int64 i; // rax
  __int64 *v42; // rax
  int v43; // r9d
  char v44; // al
  SIZE_T v45; // rbp
  SIZE_T v46; // r14
  __int64 *v47; // r14
  __int64 v48; // r8
  __int64 v49; // rbp
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 *v52; // rdx
  unsigned __int64 k; // rax
  __int64 *v54; // rax
  int v55; // ecx
  char v56; // al
  SIZE_T v57; // rbp
  SIZE_T v58; // r15
  SIZE_T v59; // rbp
  SIZE_T v60; // r15
  int v61; // [rsp+38h] [rbp-30h]

  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    if ( a4 )
    {
      v35 = *(__int64 **)(v8 + 24);
      v36 = v8 + 16;
      v37 = *(_QWORD *)(v8 + 16);
      v38 = *v35;
      v39 = *(_QWORD *)(v37 + 8);
      if ( *v35 == v39 && v38 == v36 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v40 = *(__int64 **)(a1 + 312);
        if ( v40 )
        {
          for ( i = *((unsigned int *)v40 + 2); ; i = *((unsigned int *)v42 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < i )
            {
              v43 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_62;
            }
            v42 = (__int64 *)*v40;
            if ( !*v40 )
              break;
            v40 = (__int64 *)*v40;
          }
          v43 = *((_DWORD *)v40 + 2) - 1;
LABEL_62:
          LOBYTE(v36) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v40, v36, v8 + 16, v43, *(unsigned __int16 *)(v8 + 8));
        }
        *v35 = v37;
        *(_QWORD *)(v37 + 8) = v35;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v44 = *(_BYTE *)(v8 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v46 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v45, 0xFEEEFEEE);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v46 + v8 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v36, v39, v38, 0LL);
      }
      a4 = 0;
    }
    v12 = *(__int64 **)(v7 + 24);
    v13 = v7 + 16;
    v14 = *(_QWORD *)(v7 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        for ( j = *((unsigned int *)v17 + 2); ; j = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v7 + 8) < j )
          {
            v20 = *(unsigned __int16 *)(v7 + 8);
            goto LABEL_20;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_20:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v13, v7 + 16, v20, *(unsigned __int16 *)(v7 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v21 = *(_BYTE *)(v7 + 10);
        if ( (v21 & 4) != 0 )
        {
          v23 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v21 & 2) != 0 && v23 > 4 )
            v23 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v24 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v23, 0xFEEEFEEE);
          if ( v24 != v23 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v24 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v22 = *(unsigned __int16 *)(v7 + 8);
        v8 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v22;
        *(_WORD *)(v7 + 8) = *(_WORD *)a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      }
      else
      {
        RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), 1);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v13, v16, v15, 0LL);
    }
  }
  v10 = v8 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v61 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
    if ( HIBYTE(v61) != ((unsigned __int8)v61 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v10 + 8)) >> 8) ^ BYTE2(v61))) )
      RtlpLogHeapFailure(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v10);
    }
    if ( a4 )
    {
      v47 = *(__int64 **)(v8 + 24);
      v48 = v8 + 16;
      v49 = *(_QWORD *)(v8 + 16);
      v50 = *v47;
      v51 = *(_QWORD *)(v49 + 8);
      if ( *v47 == v51 && v50 == v48 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v52 = *(__int64 **)(a1 + 312);
        if ( v52 )
        {
          for ( k = *((unsigned int *)v52 + 2); ; k = *((unsigned int *)v54 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < k )
            {
              v55 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_88;
            }
            v54 = (__int64 *)*v52;
            if ( !*v52 )
              break;
            v52 = (__int64 *)*v52;
          }
          v55 = *((_DWORD *)v52 + 2) - 1;
LABEL_88:
          LOBYTE(v48) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v52, v48, v8 + 16, v55, *(unsigned __int16 *)(v8 + 8));
        }
        *v47 = v49;
        *(_QWORD *)(v49 + 8) = v47;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v56 = *(_BYTE *)(v8 + 10);
          if ( (v56 & 4) != 0 )
          {
            v57 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v56 & 2) != 0 && v57 > 4 )
              v57 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v58 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v57, 0xFEEEFEEE);
            if ( v58 != v57 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v58 + v8 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v48, v51, v50, 0LL);
      }
      a4 = 0;
    }
    v25 = *(__int64 **)(v10 + 24);
    v26 = v10 + 16;
    v27 = *(_QWORD *)(v10 + 16);
    v28 = *v25;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v25 == v29 && v28 == v26 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v30 = *(__int64 **)(a1 + 312);
      if ( v30 )
      {
        for ( m = *((unsigned int *)v30 + 2); ; m = *((unsigned int *)v33 + 2) )
        {
          if ( *(unsigned __int16 *)(v10 + 8) < m )
          {
            v34 = *(unsigned __int16 *)(v10 + 8);
            goto LABEL_39;
          }
          v33 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
        }
        v34 = *((_DWORD *)v30 + 2) - 1;
LABEL_39:
        LOBYTE(v26) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v26, v10 + 16, v34, *(unsigned __int16 *)(v10 + 8));
      }
      *v25 = v27;
      *(_QWORD *)(v27 + 8) = v25;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v32 = *(_BYTE *)(v10 + 10);
        if ( (v32 & 4) != 0 )
        {
          v59 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v32 & 2) != 0 && v59 > 4 )
            v59 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v60 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v59, 0xFEEEFEEE);
          if ( v60 != v59 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v10 + 32 + v60));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v8 + 8) = *(_WORD *)a3;
        *(_WORD *)(v8 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v8;
      }
      RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v26, v29, v28, 0LL);
    }
  }
  return v8;
}
