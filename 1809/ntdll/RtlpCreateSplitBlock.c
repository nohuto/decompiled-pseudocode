/*
 * XREFs of RtlpCreateSplitBlock @ 0x180020328
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCreateSplitBlock(
        _WORD *BaseAddress,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  int v7; // r13d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 *v12; // rdi
  __int64 *v13; // r8
  int v14; // ecx
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 *v17; // rax
  __int64 **v18; // rdi
  __int64 *v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 j; // rax
  int v22; // r8d
  int v24; // edx
  __int64 *v25; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 k; // rax
  __int64 v32; // rax
  __int64 *v33; // rax
  unsigned int v34; // ecx
  unsigned __int64 v35; // r15
  __int64 *v36; // rdi
  __int64 *v37; // r8
  int v38; // ecx
  int v39; // eax
  unsigned __int16 v40; // ax
  __int64 *v41; // rax
  unsigned __int64 m; // rax
  __int64 *v43; // rax
  char v44; // al
  SIZE_T v45; // rbp
  SIZE_T v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 n; // rax
  __int64 *v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  __int64 *v59; // rdi
  __int64 *Entry; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  __int64 **v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 i; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+20h] [rbp-48h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]
  int v75; // [rsp+38h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = BaseAddress[70] ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((a3 - a2) >> 16) + 1;
    if ( v10 >= 0xFE )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  *(_BYTE *)(a3 + 11) = 0;
  v11 = a3 + 16 * a7;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = BaseAddress[70] ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (BaseAddress[56] & 0x40) != 0 )
        {
          v57 = (_DWORD *)(a3 + 32);
          v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v58 )
          {
            if ( ((unsigned __int8)v57 & 4) != 0 )
            {
              --v58;
              *v57 = -17891602;
              v57 = (_DWORD *)(a3 + 36);
            }
            memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
            if ( (v58 & 1) != 0 )
              v57[v58 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v59 = (__int64 *)(BaseAddress + 168);
        if ( *((_QWORD *)BaseAddress + 39) )
          Entry = RtlpFindEntry((__int64)BaseAddress, (unsigned __int16)a7);
        else
          Entry = (__int64 *)*v59;
        if ( v59 != Entry )
        {
          v61 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)Entry - 2);
              v61 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v75) = v62;
              if ( (v61 & v62) != 0 )
                v75 = *((_DWORD *)BaseAddress + 34) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            Entry = (__int64 *)*Entry;
          }
          while ( v59 != Entry );
        }
        v64 = (__int64 *)Entry[1];
        v65 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v64 == Entry )
        {
          *v65 = Entry;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          Entry[1] = (__int64)v65;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v64, 0LL);
        }
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v66 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( v66 )
        {
          for ( i = *((unsigned int *)v66 + 2); ; i = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_146;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_146:
          v71 = v69;
          LOBYTE(v69) = 1;
          RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) = 0;
      v12 = (__int64 *)(BaseAddress + 168);
      if ( *((_QWORD *)BaseAddress + 39) )
        v13 = RtlpFindEntry((__int64)BaseAddress, (unsigned __int16)a7);
      else
        v13 = (__int64 *)*v12;
      if ( v12 != v13 )
      {
        v14 = *((_DWORD *)BaseAddress + 31);
        do
        {
          if ( v14 )
          {
            v15 = *((_DWORD *)v13 - 2);
            v14 = *((_DWORD *)BaseAddress + 31);
            LOWORD(v72) = v15;
            if ( (v14 & v15) != 0 )
              v72 = *((_DWORD *)BaseAddress + 34) ^ v15;
            v16 = v72;
          }
          else
          {
            v16 = *((_WORD *)v13 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned __int64)v16 )
            break;
          v13 = (__int64 *)*v13;
        }
        while ( v12 != v13 );
      }
      v17 = (__int64 *)v13[1];
      v18 = (__int64 **)(a3 + 16);
      if ( (__int64 *)*v17 == v13 )
      {
        *v18 = v13;
        *(_QWORD *)(a3 + 24) = v17;
        *v17 = (__int64)v18;
        v13[1] = (__int64)v18;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v13, 0, *v17, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
      v19 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( !v19 )
        goto LABEL_22;
      v20 = *(unsigned __int16 *)(a3 + 8);
      for ( j = *((unsigned int *)v19 + 2); v20 >= j; j = *((unsigned int *)v33 + 2) )
      {
        v33 = (__int64 *)*v19;
        if ( !*v19 )
          goto LABEL_61;
        v19 = (__int64 *)*v19;
      }
      goto LABEL_20;
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v24 = *(_DWORD *)(v11 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v11 + 8) = v24;
      if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
        RtlpAnalyzeHeapFailure(BaseAddress, a3 + 16 * a7);
    }
    v25 = *(__int64 **)(v11 + 24);
    v26 = v11 + 16;
    v27 = *(_QWORD *)(v11 + 16);
    v28 = *v25;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v25 == v29 && v28 == v26 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v11 + 8);
      v30 = *((_QWORD *)BaseAddress + 39);
      if ( v30 )
      {
        for ( k = *(unsigned int *)(v30 + 8); ; k = *(unsigned int *)(v32 + 8) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v34 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_40;
          }
          v32 = *(_QWORD *)v30;
          if ( !*(_QWORD *)v30 )
            break;
          v30 = *(_QWORD *)v30;
        }
        v34 = *(_DWORD *)(v30 + 8) - 1;
LABEL_40:
        RtlpHeapRemoveListEntry(
          (__int64)BaseAddress,
          v30,
          1,
          (__int64 *)(v11 + 16),
          v34,
          *(unsigned __int16 *)(v11 + 8));
      }
      *v25 = v27;
      *(_QWORD *)(v27 + 8) = v25;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v45, 0xFEEEFEEE);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v35 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v35 > 0xFF00 )
        {
          RtlpInsertFreeBlock((unsigned __int64)BaseAddress, a3, v35);
          return 1;
        }
        *(_WORD *)(a3 + 8) = v35;
        *(_WORD *)(a3 + 16 * v35 + 12) = BaseAddress[70] ^ v35;
        *(_BYTE *)(a3 + 15) = 0;
        if ( !a5 )
        {
          *(_BYTE *)(a3 + 10) = 0;
          v36 = (__int64 *)(BaseAddress + 168);
          if ( *((_QWORD *)BaseAddress + 39) )
            v37 = RtlpFindEntry((__int64)BaseAddress, (unsigned __int16)v35);
          else
            v37 = (__int64 *)*v36;
          if ( v36 != v37 )
          {
            v38 = *((_DWORD *)BaseAddress + 31);
            do
            {
              if ( v38 )
              {
                v39 = *((_DWORD *)v37 - 2);
                v38 = *((_DWORD *)BaseAddress + 31);
                LOWORD(v73) = v39;
                if ( (v38 & v39) != 0 )
                  v73 = *((_DWORD *)BaseAddress + 34) ^ v39;
                v40 = v73;
              }
              else
              {
                v40 = *((_WORD *)v37 - 4);
              }
              if ( (unsigned __int16)v35 <= (unsigned __int64)v40 )
                break;
              v37 = (__int64 *)*v37;
            }
            while ( v36 != v37 );
          }
          v41 = (__int64 *)v37[1];
          v18 = (__int64 **)(a3 + 16);
          if ( (__int64 *)*v41 == v37 )
          {
            *v18 = v37;
            *(_QWORD *)(a3 + 24) = v41;
            *v41 = (__int64)v18;
            v37[1] = (__int64)v18;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)v37, 0, *v41, 0LL);
          }
          *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
          v19 = (__int64 *)*((_QWORD *)BaseAddress + 39);
          if ( v19 )
          {
            v20 = *(unsigned __int16 *)(a3 + 8);
            for ( m = *((unsigned int *)v19 + 2); v20 >= m; m = *((unsigned int *)v43 + 2) )
            {
              v43 = (__int64 *)*v19;
              if ( !*v19 )
                goto LABEL_61;
              v19 = (__int64 *)*v19;
            }
            goto LABEL_20;
          }
LABEL_22:
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
            *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
          }
          return 1;
        }
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (BaseAddress[56] & 0x40) != 0 )
        {
          v47 = (_DWORD *)(a3 + 32);
          v48 = (16 * (unsigned __int64)(unsigned __int16)v35 - 32) >> 2;
          if ( v48 )
          {
            if ( ((unsigned __int8)v47 & 4) != 0 )
            {
              --v48;
              *v47 = -17891602;
              v47 = (_DWORD *)(a3 + 36);
            }
            memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
            if ( (v48 & 1) != 0 )
              v47[v48 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v49 = (__int64 *)(BaseAddress + 168);
        if ( *((_QWORD *)BaseAddress + 39) )
          v50 = RtlpFindEntry((__int64)BaseAddress, (unsigned __int16)v35);
        else
          v50 = (__int64 *)*v49;
        if ( v49 != v50 )
        {
          v51 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v51 )
            {
              v52 = *((_DWORD *)v50 - 2);
              v51 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v74) = v52;
              if ( (v51 & v52) != 0 )
                v74 = *((_DWORD *)BaseAddress + 34) ^ v52;
              v53 = v74;
            }
            else
            {
              v53 = *((_WORD *)v50 - 4);
            }
            if ( (unsigned __int16)v35 <= (unsigned __int64)v53 )
              break;
            v50 = (__int64 *)*v50;
          }
          while ( v49 != v50 );
        }
        v54 = (__int64 *)v50[1];
        v18 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v54 == v50 )
        {
          *v18 = v50;
          *(_QWORD *)(a3 + 24) = v54;
          *v54 = (__int64)v18;
          v50[1] = (__int64)v18;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v50, 0, *v54, 0LL);
        }
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v19 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( !v19 )
          goto LABEL_22;
        v20 = *(unsigned __int16 *)(a3 + 8);
        for ( n = *((unsigned int *)v19 + 2); v20 >= n; n = *((unsigned int *)v56 + 2) )
        {
          v56 = (__int64 *)*v19;
          if ( !*v19 )
          {
LABEL_61:
            v22 = *((_DWORD *)v19 + 2) - 1;
            goto LABEL_21;
          }
          v19 = (__int64 *)*v19;
        }
LABEL_20:
        v22 = v20;
LABEL_21:
        v70 = v22;
        LOBYTE(v22) = 1;
        RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v19, v22, (_DWORD)v18, v70, v20);
        goto LABEL_22;
      }
      RtlpDeCommitFreeBlock(BaseAddress, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(13, (_DWORD)BaseAddress, v26, v29, v28, 0LL);
    }
    if ( v7 )
      return 0;
    v7 = 1;
  }
}
