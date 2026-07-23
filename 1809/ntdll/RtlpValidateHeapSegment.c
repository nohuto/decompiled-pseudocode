/*
 * XREFs of RtlpValidateHeapSegment @ 0x1801095C0
 * Callers:
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F5BF8 (RtlpCheckBusyBlockTail.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpValidateHeapSegment(
        _DWORD *BaseAddress,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  _PEB_LDR_DATA *v8; // r10
  _DWORD *v9; // r14
  bool v10; // cf
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 i; // rbx
  int v17; // edx
  unsigned __int8 v18; // dl
  __int64 v19; // r15
  __int64 v20; // r8
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // cx
  char v23; // al
  bool v24; // zf
  SIZE_T v25; // rbp
  __int64 *v26; // r14
  __int64 **v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 j; // rax
  __int64 v33; // rax
  unsigned int v34; // ecx
  char v35; // al
  unsigned __int64 v36; // rbp
  __int64 **v37; // r14
  __int64 *Entry; // r8
  int v39; // ecx
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 k; // rax
  __int64 v45; // rax
  int v46; // r8d
  SIZE_T v47; // r14
  __int64 v48; // rax
  unsigned __int8 v49; // al
  _DWORD *v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edx
  unsigned __int16 v53; // cx
  __int64 v54; // rdx
  int v56; // [rsp+38h] [rbp-40h]
  unsigned int v57; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = a2 < *(_QWORD *)(a2 + 72);
  v11 = 0;
  v57 = 0;
  v12 = 0;
  LOWORD(v13) = 0;
  for ( i = a2; ; v10 = i < *(_QWORD *)(a2 + 72) )
  {
    if ( !v10 )
    {
      if ( *(_DWORD *)(a2 + 80) != v11 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 80),
          v11);
        return 0;
      }
      if ( *(_DWORD *)(a2 + 84) != v12 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 84),
          v12);
        return 0;
      }
      return 1;
    }
    *a6 = i;
    if ( BaseAddress[31] != (_DWORD)v8 )
    {
      v17 = *(_DWORD *)(i + 8) ^ BaseAddress[34];
      *(_DWORD *)(i + 8) = v17;
      if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
      {
        RtlpAnalyzeHeapFailure((__int64)BaseAddress, i);
        v8 = 0LL;
      }
    }
    if ( (_WORD)v13 != (*((_WORD *)BaseAddress + 70) ^ *(_WORD *)(i + 12)) )
      break;
    v13 = *(unsigned __int16 *)(i + 8);
    v18 = *(_BYTE *)(i + 10);
    v19 = 16 * v13;
    if ( (v18 & 1) != 0 )
    {
      v20 = a7;
      if ( a7 )
      {
        v21 = (v18 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(i) + 2) : *(unsigned __int8 *)(i + 11);
        if ( v21 )
        {
          if ( (v21 & 0x8000u) == 0 )
          {
            if ( (v21 & 0x800) == 0 && v21 < *((_WORD *)BaseAddress + 112) )
              *(_QWORD *)(v20 + 8LL * v21) += v13;
          }
          else
          {
            v22 = v21 & 0x7FFF;
            if ( v22 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v22) += v13;
          }
        }
      }
      if ( (*(_BYTE *)(i + 10) & 4) != 0 )
      {
        v23 = RtlpCheckBusyBlockTail((__int64)BaseAddress, i);
        v8 = 0LL;
        if ( !v23 )
        {
          v24 = BaseAddress[31] == 0;
          goto LABEL_118;
        }
      }
    }
    else
    {
      if ( ((v18 >> 2) & ((BaseAddress[28] & 0x40) != 0)) != 0 )
      {
        v25 = v19 - 32;
        if ( (v18 & 2) != 0 && v25 > 4 )
          v25 = v19 - 36;
        if ( (v18 & 8) != 0 )
        {
          v26 = *(__int64 **)(i + 24);
          v27 = (__int64 **)(i + 16);
          v28 = *(_QWORD *)(i + 16);
          v29 = *v26;
          v30 = *(_QWORD *)(v28 + 8);
          if ( *v26 == v30 && (__int64 **)v29 == v27 )
          {
            *((_QWORD *)BaseAddress + 24) -= v13;
            v31 = *((_QWORD *)BaseAddress + 39);
            if ( v31 )
            {
              for ( j = *(unsigned int *)(v31 + 8); ; j = *(unsigned int *)(v33 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < j )
                {
                  v34 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_35;
                }
                v33 = *(_QWORD *)v31;
                if ( !*(_QWORD *)v31 )
                  break;
                v31 = *(_QWORD *)v31;
              }
              v34 = *(_DWORD *)(v31 + 8) - 1;
LABEL_35:
              RtlpHeapRemoveListEntry(
                (__int64)BaseAddress,
                v31,
                1,
                (__int64 *)(i + 16),
                v34,
                *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            *v26 = v28;
            *(_QWORD *)(v28 + 8) = v26;
            if ( (*(_BYTE *)(i + 10) & 8) != 0 )
            {
              v35 = RtlpCommitBlock((char *)BaseAddress, i);
              v8 = 0LL;
              if ( !v35 )
              {
                RtlpDeCommitFreeBlock(BaseAddress, i, *(unsigned __int16 *)(i + 8), 1);
                goto LABEL_39;
              }
            }
            v36 = *(unsigned __int16 *)(i + 8);
            v37 = (__int64 **)(BaseAddress + 84);
            *(_BYTE *)(i + 10) = (_BYTE)v8;
            *(_BYTE *)(i + 15) = (_BYTE)v8;
            if ( *((_PEB_LDR_DATA **)BaseAddress + 39) == v8 )
            {
              Entry = *v37;
            }
            else
            {
              Entry = RtlpFindEntry((__int64)BaseAddress, (unsigned int)v36);
              v8 = 0LL;
            }
            if ( v37 != (__int64 **)Entry )
            {
              v39 = BaseAddress[31];
              do
              {
                if ( v39 )
                {
                  v40 = *((_DWORD *)Entry - 2);
                  v39 = BaseAddress[31];
                  LOWORD(v56) = v40;
                  if ( (v39 & v40) != 0 )
                    v56 = BaseAddress[34] ^ v40;
                  v41 = v56;
                }
                else
                {
                  v41 = *((_WORD *)Entry - 4);
                }
                if ( v36 <= v41 )
                  break;
                Entry = (__int64 *)*Entry;
              }
              while ( v37 != (__int64 **)Entry );
            }
            v42 = (__int64 *)Entry[1];
            if ( (__int64 *)*v42 == Entry )
            {
              *v27 = Entry;
              *(_QWORD *)(i + 24) = v42;
              *v42 = (__int64)v27;
              Entry[1] = (__int64)v27;
            }
            else
            {
              RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v42, (__int64)v8);
              v8 = 0LL;
            }
            *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(i + 8);
            v43 = *((_QWORD *)BaseAddress + 39);
            if ( v43 )
            {
              for ( k = *(unsigned int *)(v43 + 8); ; k = *(unsigned int *)(v45 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < k )
                {
                  v46 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_64;
                }
                v45 = *(_QWORD *)v43;
                if ( !*(_QWORD *)v43 )
                  break;
                v43 = *(_QWORD *)v43;
              }
              v46 = *(_DWORD *)(v43 + 8) - 1;
LABEL_64:
              RtlpHeapAddListEntry((__int64)BaseAddress, v43, 1, i + 16, v46, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            if ( BaseAddress[31] != (_DWORD)v8 )
            {
              *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
              *(_DWORD *)(i + 8) ^= BaseAddress[34];
            }
          }
          else
          {
            RtlpLogHeapFailure(13, (__int64)BaseAddress, i + 16, v30, v29, (__int64)v8);
LABEL_39:
            v8 = 0LL;
          }
          v9 = a4;
          goto LABEL_41;
        }
        v47 = RtlCompareMemoryUlong((PVOID)(i + 32), v25, 0xFEEEFEEE);
        if ( v47 != v25 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", i, v47 + i + 16);
          goto LABEL_117;
        }
        v11 = v57;
        v9 = a4;
      }
      v48 = *(unsigned __int16 *)(i + 8);
      ++*v9;
      *a5 += v48;
      v8 = 0LL;
    }
    v49 = *(_BYTE *)(i + 14);
    if ( v49 )
      v50 = (_DWORD *)((i & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v49 << 16) + 0x10000);
    else
      v50 = BaseAddress;
    if ( v50 != (_DWORD *)a2 )
    {
      if ( NtCurrentPeb()->Ldr == v8 )
        DbgPrint("HEAP: ");
      else
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", i, *(unsigned __int8 *)(i + 14));
      goto LABEL_117;
    }
    if ( *(_BYTE *)(i + 15) != 3 )
    {
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= BaseAddress[34];
      }
      i += v19;
      goto LABEL_41;
    }
    v51 = *(_QWORD *)(i + 56);
    if ( !v51 )
    {
      v53 = *(_WORD *)(i + 8);
      v54 = v53;
      if ( i + 16LL * v53 != *(_QWORD *)(a2 + 72) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
        {
          LOWORD(v54) = HIBYTE(v53);
          DbgPrint("HEAP: ", v54);
        }
        else
        {
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        }
        DbgPrint("Heap block at %p is not last block in segment (%p)\n", i, *(_QWORD *)(a2 + 72));
        goto LABEL_117;
      }
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = v53 ^ HIBYTE(v53) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= BaseAddress[34];
      }
      return 1;
    }
    ++v12;
    v57 = (v51 >> 12) + v11;
    if ( BaseAddress[31] != (_DWORD)v8 )
    {
      *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
      *(_DWORD *)(i + 8) ^= BaseAddress[34];
    }
    i += *(_QWORD *)(i + 56) + 64LL;
    if ( i != *(_QWORD *)(a2 + 72) )
    {
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        v52 = *(_DWORD *)(i + 8) ^ BaseAddress[34];
        *(_DWORD *)(i + 8) = v52;
        if ( HIBYTE(v52) != ((unsigned __int8)v52 ^ (unsigned __int8)(BYTE1(v52) ^ BYTE2(v52))) )
        {
          RtlpAnalyzeHeapFailure((__int64)BaseAddress, i);
          v8 = 0LL;
        }
      }
      if ( *((_WORD *)BaseAddress + 70) != *(_WORD *)(i + 12) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap block at %p has corrupted PreviousSize (%lx)\n",
          i,
          *((unsigned __int16 *)BaseAddress + 70) ^ (unsigned int)*(unsigned __int16 *)(i + 12));
        goto LABEL_117;
      }
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= BaseAddress[34];
      }
    }
    LOWORD(v13) = (_WORD)v8;
LABEL_41:
    v11 = v57;
  }
  if ( NtCurrentPeb()->Ldr == v8 )
    DbgPrint("HEAP: ");
  else
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  DbgPrint(
    "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
    (const void *)i,
    *((unsigned __int16 *)BaseAddress + 70) ^ *(unsigned __int16 *)(i + 12),
    (unsigned __int16)v13);
LABEL_117:
  v24 = BaseAddress[31] == 0;
LABEL_118:
  if ( !v24 )
  {
    *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
    *(_DWORD *)(i + 8) ^= BaseAddress[34];
  }
  return 0;
}
