/*
 * XREFs of RtlpCreateSplitBlock @ 0x180046728
 * Callers:
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004580C (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x1800466AC (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x180046B74 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A16B0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // rdi
  __int64 *v13; // r8
  int v14; // ecx
  unsigned __int16 v15; // ax
  __int64 *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 *v21; // rdx
  unsigned __int64 k; // rax
  __int64 *v23; // rax
  int v24; // ecx
  unsigned __int64 v25; // r15
  __int64 *v26; // rdi
  __int64 *v27; // r8
  int v28; // ecx
  unsigned __int16 v29; // ax
  __int64 *v30; // rax
  __int64 **v31; // rdi
  __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 m; // rax
  __int64 *v35; // rax
  int v36; // r8d
  __int64 *v38; // rax
  unsigned __int64 j; // rax
  __int64 *v40; // rax
  int v41; // eax
  int v42; // eax
  char v43; // al
  SIZE_T v44; // rbp
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 n; // rax
  __int64 *v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  __int64 *v58; // rdi
  __int64 *Entry; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  __int64 **v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 i; // rax
  __int64 *v67; // rax
  int v68; // r8d
  int v69; // [rsp+20h] [rbp-48h]
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+38h] [rbp-30h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v10 >= 0xFE )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  *(_BYTE *)(a3 + 11) = 0;
  v11 = a3 + 16 * a7;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v56 = (_DWORD *)(a3 + 32);
          v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v57 )
          {
            if ( ((unsigned __int8)v56 & 4) != 0 )
            {
              --v57;
              *v56 = -17891602;
              v56 = (_DWORD *)(a3 + 36);
            }
            memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
            if ( (v57 & 1) != 0 )
              v56[v57 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v58 = (__int64 *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (__int64 *)*v58;
        if ( v58 != Entry )
        {
          v60 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v60 )
            {
              v61 = *((_DWORD *)Entry - 2);
              v60 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v61;
              if ( (v60 & v61) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v61;
              v62 = v74;
            }
            else
            {
              v62 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
              break;
            Entry = (__int64 *)*Entry;
          }
          while ( v58 != Entry );
        }
        v63 = (__int64 *)Entry[1];
        v64 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v63 == Entry )
        {
          *v64 = Entry;
          *(_QWORD *)(a3 + 24) = v63;
          *v63 = (__int64)v64;
          Entry[1] = (__int64)v64;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v63, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v65 = *(__int64 **)(a1 + 312);
        if ( v65 )
        {
          for ( i = *((unsigned int *)v65 + 2); ; i = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_146;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_146:
          v70 = v68;
          LOBYTE(v68) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) = 0;
      v12 = (__int64 *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v13 = RtlpFindEntry(a1, (unsigned __int16)a7);
      else
        v13 = (__int64 *)*v12;
      if ( v12 != v13 )
      {
        v14 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v14 )
          {
            v41 = *((_DWORD *)v13 - 2);
            v14 = *(_DWORD *)(a1 + 124);
            LOWORD(v71) = v41;
            if ( (v14 & v41) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v41;
            v15 = v71;
          }
          else
          {
            v15 = *((_WORD *)v13 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned __int64)v15 )
            break;
          v13 = (__int64 *)*v13;
        }
        while ( v12 != v13 );
      }
      v38 = (__int64 *)v13[1];
      v31 = (__int64 **)(a3 + 16);
      if ( (__int64 *)*v38 == v13 )
      {
        *v31 = v13;
        *(_QWORD *)(a3 + 24) = v38;
        *v38 = (__int64)v31;
        v13[1] = (__int64)v31;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v13, 0, *v38, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
      v32 = *(__int64 **)(a1 + 312);
      if ( !v32 )
        goto LABEL_47;
      v33 = *(unsigned __int16 *)(a3 + 8);
      for ( j = *((unsigned int *)v32 + 2); v33 >= j; j = *((unsigned int *)v40 + 2) )
      {
        v40 = (__int64 *)*v32;
        if ( !*v32 )
          goto LABEL_65;
        v32 = (__int64 *)*v32;
      }
      goto LABEL_45;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v16 = *(__int64 **)(v11 + 24);
    v17 = v11 + 16;
    v18 = *(_QWORD *)(v11 + 16);
    v19 = *v16;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *v16 == v20 && v19 == v17 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v21 = *(__int64 **)(a1 + 312);
      if ( v21 )
      {
        for ( k = *((unsigned int *)v21 + 2); ; k = *((unsigned int *)v23 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v24 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_25;
          }
          v23 = (__int64 *)*v21;
          if ( !*v21 )
            break;
          v21 = (__int64 *)*v21;
        }
        v24 = *((_DWORD *)v21 + 2) - 1;
LABEL_25:
        LOBYTE(v17) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v21, v17, v11 + 16, v24, *(unsigned __int16 *)(v11 + 8));
      }
      *v16 = v18;
      *(_QWORD *)(v18 + 8) = v16;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        if ( a5 )
        {
          v43 = *(_BYTE *)(v11 + 10);
          if ( (v43 & 4) != 0 )
          {
            v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v43 & 2) != 0 && v44 > 4 )
              v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v45 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v44, 0xFEEEFEEE);
            if ( v45 != v44 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v45 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v25 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v25 > 0xFF00 )
        {
          RtlpInsertFreeBlock(a1, a3, v25);
          return 1;
        }
        *(_WORD *)(a3 + 8) = v25;
        *(_WORD *)(a3 + 16 * v25 + 12) = *(_WORD *)(a1 + 140) ^ v25;
        *(_BYTE *)(a3 + 15) = 0;
        if ( !a5 )
        {
          *(_BYTE *)(a3 + 10) = 0;
          v26 = (__int64 *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v27 = RtlpFindEntry(a1, (unsigned __int16)v25);
          else
            v27 = (__int64 *)*v26;
          if ( v26 != v27 )
          {
            v28 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v28 )
              {
                v42 = *((_DWORD *)v27 - 2);
                v28 = *(_DWORD *)(a1 + 124);
                LOWORD(v72) = v42;
                if ( (v28 & v42) != 0 )
                  v72 = *(_DWORD *)(a1 + 136) ^ v42;
                v29 = v72;
              }
              else
              {
                v29 = *((_WORD *)v27 - 4);
              }
              if ( (unsigned __int16)v25 <= (unsigned __int64)v29 )
                break;
              v27 = (__int64 *)*v27;
            }
            while ( v26 != v27 );
          }
          v30 = (__int64 *)v27[1];
          v31 = (__int64 **)(a3 + 16);
          if ( (__int64 *)*v30 == v27 )
          {
            *v31 = v27;
            *(_QWORD *)(a3 + 24) = v30;
            *v30 = (__int64)v31;
            v27[1] = (__int64)v31;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)v27, 0, *v30, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
          v32 = *(__int64 **)(a1 + 312);
          if ( v32 )
          {
            v33 = *(unsigned __int16 *)(a3 + 8);
            for ( m = *((unsigned int *)v32 + 2); v33 >= m; m = *((unsigned int *)v35 + 2) )
            {
              v35 = (__int64 *)*v32;
              if ( !*v32 )
                goto LABEL_65;
              v32 = (__int64 *)*v32;
            }
            goto LABEL_45;
          }
LABEL_47:
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
            *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          return 1;
        }
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v46 = (_DWORD *)(a3 + 32);
          v47 = (16 * (unsigned __int64)(unsigned __int16)v25 - 32) >> 2;
          if ( v47 )
          {
            if ( ((unsigned __int8)v46 & 4) != 0 )
            {
              --v47;
              *v46 = -17891602;
              v46 = (_DWORD *)(a3 + 36);
            }
            memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
            if ( (v47 & 1) != 0 )
              v46[v47 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v48 = (__int64 *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v49 = RtlpFindEntry(a1, (unsigned __int16)v25);
        else
          v49 = (__int64 *)*v48;
        if ( v48 != v49 )
        {
          v50 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v50 )
            {
              v51 = *((_DWORD *)v49 - 2);
              v50 = *(_DWORD *)(a1 + 124);
              LOWORD(v73) = v51;
              if ( (v51 & v50) != 0 )
                v73 = *(_DWORD *)(a1 + 136) ^ v51;
              v52 = v73;
            }
            else
            {
              v52 = *((_WORD *)v49 - 4);
            }
            if ( (unsigned __int16)v25 <= (unsigned __int64)v52 )
              break;
            v49 = (__int64 *)*v49;
          }
          while ( v48 != v49 );
        }
        v53 = (__int64 *)v49[1];
        v31 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v53 == v49 )
        {
          *v31 = v49;
          *(_QWORD *)(a3 + 24) = v53;
          *v53 = (__int64)v31;
          v49[1] = (__int64)v31;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v49, 0, *v53, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v32 = *(__int64 **)(a1 + 312);
        if ( !v32 )
          goto LABEL_47;
        v33 = *(unsigned __int16 *)(a3 + 8);
        for ( n = *((unsigned int *)v32 + 2); v33 >= n; n = *((unsigned int *)v55 + 2) )
        {
          v55 = (__int64 *)*v32;
          if ( !*v32 )
          {
LABEL_65:
            v36 = *((_DWORD *)v32 + 2) - 1;
            goto LABEL_46;
          }
          v32 = (__int64 *)*v32;
        }
LABEL_45:
        v36 = v33;
LABEL_46:
        v69 = v36;
        LOBYTE(v36) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v32, v36, (_DWORD)v31, v69, v33);
        goto LABEL_47;
      }
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v17, v20, v19, 0LL);
    }
    if ( v7 )
      return 0;
    v7 = 1;
  }
}
