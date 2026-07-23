/*
 * XREFs of RtlpCreateSplitBlock @ 0x1402F0D54
 * Callers:
 *     RtlpAllocateHeap @ 0x1402EFF20 (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402FC158 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1402FC27C (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // edx
  __int64 *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 i; // rax
  __int64 *v21; // rax
  int v22; // ecx
  char v23; // al
  SIZE_T v24; // rbp
  SIZE_T v25; // rax
  unsigned __int64 v26; // r15
  _QWORD *v27; // rdi
  _QWORD *v28; // r8
  int v29; // ecx
  int v30; // eax
  unsigned __int16 v31; // ax
  __int64 *v32; // rax
  _QWORD *v33; // rdi
  __int64 *v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 k; // rax
  __int64 *v37; // rax
  int v38; // r8d
  _DWORD *v39; // r8
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rdi
  _QWORD *Entry; // r8
  int v43; // ecx
  int v44; // eax
  unsigned __int16 v45; // ax
  __int64 *v46; // rax
  unsigned __int64 j; // rax
  __int64 *v48; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // r8
  int v52; // ecx
  int v53; // eax
  unsigned __int16 v54; // ax
  __int64 *v55; // rax
  unsigned __int64 m; // rax
  __int64 *v57; // rax
  _DWORD *v58; // r8
  unsigned __int64 v59; // rdx
  _QWORD *v60; // rdi
  _QWORD *v61; // r8
  int v62; // ecx
  int v63; // eax
  unsigned __int16 v64; // ax
  __int64 *v65; // rax
  _QWORD *v66; // rdi
  __int64 *v67; // rdx
  unsigned __int64 n; // rax
  __int64 *v69; // rax
  int v70; // r8d
  int v71; // [rsp+38h] [rbp-30h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v11;
  *(_BYTE *)(a3 + 11) = 0;
  v12 = a3 + 16 * a7;
  *(_WORD *)(a3 + 8) = a7;
  while ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v13 = *(_DWORD *)(v12 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v12 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v14 = *(__int64 **)(v12 + 24);
    v15 = *(_QWORD *)(v12 + 16);
    v16 = *v14;
    v17 = *(_QWORD *)(v15 + 8);
    if ( *v14 == v17 && v16 == v12 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v18 = *(__int64 **)(a1 + 312);
      if ( v18 )
      {
        v19 = *(unsigned __int16 *)(v12 + 8);
        for ( i = *((unsigned int *)v18 + 2); ; i = *((unsigned int *)v21 + 2) )
        {
          if ( v19 < i )
          {
            v22 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_20;
          }
          v21 = (__int64 *)*v18;
          if ( !*v18 )
            break;
          v18 = (__int64 *)*v18;
        }
        v22 = *((_DWORD *)v18 + 2) - 1;
LABEL_20:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v18, v19, v12 + 16, v22, *(unsigned __int16 *)(v12 + 8));
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( a5 )
      {
        v23 = *(_BYTE *)(v12 + 10);
        if ( (v23 & 4) != 0 )
        {
          v24 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v23 & 2) != 0 && v24 > 4 )
            v24 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v25 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v24, 0xFEEEFEEE);
          if ( v25 != v24 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(a3 + 16 * a7),
              (const void *)(v25 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(a3 + 10) = *(_BYTE *)(v12 + 10);
      v26 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v26 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, a3, v26);
        return 1;
      }
      *(_WORD *)(a3 + 8) = v26;
      *(_WORD *)(a3 + 16 * v26 + 12) = *(_WORD *)(a1 + 140) ^ v26;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v39 = (_DWORD *)(a3 + 32);
          v40 = (16 * (unsigned __int64)(unsigned __int16)v26 - 32) >> 2;
          if ( v40 )
          {
            if ( ((unsigned __int8)v39 & 4) != 0 )
            {
              --v40;
              *v39 = -17891602;
              v39 = (_DWORD *)(a3 + 36);
            }
            memset64(v39, 0xFEEEFEEEFEEEFEEEuLL, v40 >> 1);
            if ( (v40 & 1) != 0 )
              v39[v40 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v41 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v26);
        else
          Entry = (_QWORD *)*v41;
        if ( v41 != Entry )
        {
          v43 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v43 )
            {
              v44 = *((_DWORD *)Entry - 2);
              v43 = *(_DWORD *)(a1 + 124);
              LOWORD(v72) = v44;
              if ( (v43 & v44) != 0 )
                v72 = *(_DWORD *)(a1 + 136) ^ v44;
              v45 = v72;
            }
            else
            {
              v45 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v26 <= (unsigned __int64)v45 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v41 != Entry );
        }
        v46 = (__int64 *)Entry[1];
        v33 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v46 == Entry )
        {
          *v33 = Entry;
          *(_QWORD *)(a3 + 24) = v46;
          *v46 = (__int64)v33;
          Entry[1] = v33;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v46, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v34 = *(__int64 **)(a1 + 312);
        if ( v34 )
        {
          v35 = *(unsigned __int16 *)(a3 + 8);
          for ( j = *((unsigned int *)v34 + 2); v35 >= j; j = *((unsigned int *)v48 + 2) )
          {
            v48 = (__int64 *)*v34;
            if ( !*v34 )
              goto LABEL_84;
            v34 = (__int64 *)*v34;
          }
          goto LABEL_52;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v27 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v28 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v26);
        else
          v28 = (_QWORD *)*v27;
        if ( v27 != v28 )
        {
          v29 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v29 )
            {
              v30 = *((_DWORD *)v28 - 2);
              v29 = *(_DWORD *)(a1 + 124);
              LOWORD(v71) = v30;
              if ( (v29 & v30) != 0 )
                v71 = *(_DWORD *)(a1 + 136) ^ v30;
              v31 = v71;
            }
            else
            {
              v31 = *((_WORD *)v28 - 4);
            }
            if ( (unsigned __int16)v26 <= (unsigned __int64)v31 )
              break;
            v28 = (_QWORD *)*v28;
          }
          while ( v27 != v28 );
        }
        v32 = (__int64 *)v28[1];
        v33 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v32 == v28 )
        {
          *v33 = v28;
          *(_QWORD *)(a3 + 24) = v32;
          *v32 = (__int64)v33;
          v28[1] = v33;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v28, 0, *v32, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v34 = *(__int64 **)(a1 + 312);
        if ( v34 )
        {
          v35 = *(unsigned __int16 *)(a3 + 8);
          for ( k = *((unsigned int *)v34 + 2); v35 >= k; k = *((unsigned int *)v37 + 2) )
          {
            v37 = (__int64 *)*v34;
            if ( !*v34 )
              goto LABEL_84;
            v34 = (__int64 *)*v34;
          }
          goto LABEL_52;
        }
      }
      goto LABEL_54;
    }
    RtlpLogHeapFailure(13, a1, v12 + 16, v17, v16, 0LL);
    if ( v7 )
      return 0;
    v7 = 1;
  }
  *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v50 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v51 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
    else
      v51 = (_QWORD *)*v50;
    if ( v50 != v51 )
    {
      v52 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v52 )
        {
          v53 = *((_DWORD *)v51 - 2);
          v52 = *(_DWORD *)(a1 + 124);
          LOWORD(v73) = v53;
          if ( (v52 & v53) != 0 )
            v73 = *(_DWORD *)(a1 + 136) ^ v53;
          v54 = v73;
        }
        else
        {
          v54 = *((_WORD *)v51 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v54 )
          break;
        v51 = (_QWORD *)*v51;
      }
      while ( v50 != v51 );
    }
    v55 = (__int64 *)v51[1];
    v33 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v55 == v51 )
    {
      *v33 = v51;
      *(_QWORD *)(a3 + 24) = v55;
      *v55 = (__int64)v33;
      v51[1] = v33;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v51, 0, *v55, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
    v34 = *(__int64 **)(a1 + 312);
    if ( v34 )
    {
      v35 = *(unsigned __int16 *)(a3 + 8);
      for ( m = *((unsigned int *)v34 + 2); v35 >= m; m = *((unsigned int *)v57 + 2) )
      {
        v57 = (__int64 *)*v34;
        if ( !*v34 )
        {
LABEL_84:
          v38 = *((_DWORD *)v34 + 2) - 1;
          goto LABEL_53;
        }
        v34 = (__int64 *)*v34;
      }
LABEL_52:
      v38 = v35;
LABEL_53:
      RtlpHeapAddListEntry(a1, (_DWORD)v34, v38, (_DWORD)v33, v38, v35);
    }
LABEL_54:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 1;
  }
  *(_BYTE *)(a3 + 10) &= 0xF0u;
  if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
  {
    v58 = (_DWORD *)(a3 + 32);
    v59 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v59 )
    {
      if ( ((unsigned __int8)v58 & 4) != 0 )
      {
        --v59;
        *v58 = -17891602;
        v58 = (_DWORD *)(a3 + 36);
      }
      memset64(v58, 0xFEEEFEEEFEEEFEEEuLL, v59 >> 1);
      if ( (v59 & 1) != 0 )
        v58[v59 - 1] = -17891602;
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v60 = (_QWORD *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v61 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
  else
    v61 = (_QWORD *)*v60;
  if ( v60 != v61 )
  {
    v62 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v62 )
      {
        v63 = *((_DWORD *)v61 - 2);
        v62 = *(_DWORD *)(a1 + 124);
        LOWORD(v74) = v63;
        if ( (v62 & v63) != 0 )
          v74 = *(_DWORD *)(a1 + 136) ^ v63;
        v64 = v74;
      }
      else
      {
        v64 = *((_WORD *)v61 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v64 )
        break;
      v61 = (_QWORD *)*v61;
    }
    while ( v60 != v61 );
  }
  v65 = (__int64 *)v61[1];
  v66 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v65 == v61 )
  {
    *v66 = v61;
    *(_QWORD *)(a3 + 24) = v65;
    *v65 = (__int64)v66;
    v61[1] = v66;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v61, 0, *v65, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
  v67 = *(__int64 **)(a1 + 312);
  if ( v67 )
  {
    for ( n = *((unsigned int *)v67 + 2); ; n = *((unsigned int *)v69 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 8) < n )
      {
        v70 = *(unsigned __int16 *)(a3 + 8);
        goto LABEL_137;
      }
      v69 = (__int64 *)*v67;
      if ( !*v67 )
        break;
      v67 = (__int64 *)*v67;
    }
    v70 = *((_DWORD *)v67 + 2) - 1;
LABEL_137:
    RtlpHeapAddListEntry(a1, (_DWORD)v67, v70, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
