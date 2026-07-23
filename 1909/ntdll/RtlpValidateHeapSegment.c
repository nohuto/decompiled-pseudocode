/*
 * XREFs of RtlpValidateHeapSegment @ 0x180106A8C
 * Callers:
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x1800466AC (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x180046B74 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     RtlCompareMemoryUlong @ 0x1800A16B0 (RtlCompareMemoryUlong.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F2FB4 (RtlpCheckBusyBlockTail.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpValidateHeapSegment(
        unsigned __int64 a1,
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
  unsigned __int8 v17; // dl
  __int64 v18; // r15
  __int64 v19; // r8
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // cx
  char v22; // al
  bool v23; // zf
  SIZE_T v24; // rbp
  __int64 *v25; // r14
  __int64 **v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 j; // rax
  __int64 v32; // rax
  unsigned int v33; // ecx
  char v34; // al
  unsigned __int64 v35; // rbp
  __int64 *v36; // r14
  __int64 *Entry; // r8
  int v38; // ecx
  int v39; // eax
  unsigned __int16 v40; // ax
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 k; // rax
  __int64 v44; // rax
  int v45; // r8d
  SIZE_T v46; // r14
  __int64 v47; // rax
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  int v52; // [rsp+38h] [rbp-40h]
  unsigned int v53; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = a2 < *(_QWORD *)(a2 + 72);
  v11 = 0;
  v53 = 0;
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
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i + 11) != (*(_BYTE *)(i + 8) ^ (unsigned __int8)(*(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, i);
        v8 = 0LL;
      }
    }
    if ( (_WORD)v13 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12)) )
      break;
    v13 = *(unsigned __int16 *)(i + 8);
    v17 = *(_BYTE *)(i + 10);
    v18 = 16 * v13;
    if ( (v17 & 1) != 0 )
    {
      v19 = a7;
      if ( a7 )
      {
        v20 = (v17 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(i) + 2) : *(unsigned __int8 *)(i + 11);
        if ( v20 )
        {
          if ( (v20 & 0x8000u) == 0 )
          {
            if ( (v20 & 0x800) == 0 && v20 < *(_WORD *)(a1 + 224) )
              *(_QWORD *)(v19 + 8LL * v20) += v13;
          }
          else
          {
            v21 = v20 & 0x7FFF;
            if ( v21 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v21) += v13;
          }
        }
      }
      if ( (*(_BYTE *)(i + 10) & 4) != 0 )
      {
        v22 = RtlpCheckBusyBlockTail(a1, i);
        v8 = 0LL;
        if ( !v22 )
        {
          v23 = *(_DWORD *)(a1 + 124) == 0;
          goto LABEL_118;
        }
      }
    }
    else
    {
      if ( ((v17 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
      {
        v24 = v18 - 32;
        if ( (v17 & 2) != 0 && v24 > 4 )
          v24 = v18 - 36;
        if ( (v17 & 8) != 0 )
        {
          v25 = *(__int64 **)(i + 24);
          v26 = (__int64 **)(i + 16);
          v27 = *(_QWORD *)(i + 16);
          v28 = *v25;
          v29 = *(_QWORD *)(v27 + 8);
          if ( *v25 == v29 && (__int64 **)v28 == v26 )
          {
            *(_QWORD *)(a1 + 192) -= v13;
            v30 = *(_QWORD *)(a1 + 312);
            if ( v30 )
            {
              for ( j = *(unsigned int *)(v30 + 8); ; j = *(unsigned int *)(v32 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < j )
                {
                  v33 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_35;
                }
                v32 = *(_QWORD *)v30;
                if ( !*(_QWORD *)v30 )
                  break;
                v30 = *(_QWORD *)v30;
              }
              v33 = *(_DWORD *)(v30 + 8) - 1;
LABEL_35:
              RtlpHeapRemoveListEntry(a1, v30, 1, (__int64 *)(i + 16), v33, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            *v25 = v27;
            *(_QWORD *)(v27 + 8) = v25;
            if ( (*(_BYTE *)(i + 10) & 8) != 0 )
            {
              v34 = RtlpCommitBlock(a1, i);
              v8 = 0LL;
              if ( !v34 )
              {
                RtlpDeCommitFreeBlock(a1, i, *(unsigned __int16 *)(i + 8), 1);
                goto LABEL_39;
              }
            }
            v35 = *(unsigned __int16 *)(i + 8);
            v36 = (__int64 *)(a1 + 336);
            *(_BYTE *)(i + 10) = (_BYTE)v8;
            *(_BYTE *)(i + 15) = (_BYTE)v8;
            if ( *(_PEB_LDR_DATA **)(a1 + 312) == v8 )
            {
              Entry = (__int64 *)*v36;
            }
            else
            {
              Entry = RtlpFindEntry(a1, (unsigned int)v35);
              v8 = 0LL;
            }
            if ( v36 != Entry )
            {
              v38 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v38 )
                {
                  v39 = *((_DWORD *)Entry - 2);
                  v38 = *(_DWORD *)(a1 + 124);
                  LOWORD(v52) = v39;
                  if ( (v39 & v38) != 0 )
                    v52 = *(_DWORD *)(a1 + 136) ^ v39;
                  v40 = v52;
                }
                else
                {
                  v40 = *((_WORD *)Entry - 4);
                }
                if ( v35 <= v40 )
                  break;
                Entry = (__int64 *)*Entry;
              }
              while ( v36 != Entry );
            }
            v41 = (__int64 *)Entry[1];
            if ( (__int64 *)*v41 == Entry )
            {
              *v26 = Entry;
              *(_QWORD *)(i + 24) = v41;
              *v41 = (__int64)v26;
              Entry[1] = (__int64)v26;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v41, (__int64)v8);
              v8 = 0LL;
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(i + 8);
            v42 = *(_QWORD *)(a1 + 312);
            if ( v42 )
            {
              for ( k = *(unsigned int *)(v42 + 8); ; k = *(unsigned int *)(v44 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < k )
                {
                  v45 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_64;
                }
                v44 = *(_QWORD *)v42;
                if ( !*(_QWORD *)v42 )
                  break;
                v42 = *(_QWORD *)v42;
              }
              v45 = *(_DWORD *)(v42 + 8) - 1;
LABEL_64:
              RtlpHeapAddListEntry(a1, v42, 1, i + 16, v45, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
            {
              *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
              *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            RtlpLogHeapFailure(13, a1, i + 16, v29, v28, (__int64)v8);
LABEL_39:
            v8 = 0LL;
          }
          v9 = a4;
          goto LABEL_41;
        }
        v46 = RtlCompareMemoryUlong((PVOID)(i + 32), v24, 0xFEEEFEEE);
        if ( v46 != v24 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", i, v46 + i + 16);
          goto LABEL_117;
        }
        v11 = v53;
        v9 = a4;
      }
      v47 = *(unsigned __int16 *)(i + 8);
      ++*v9;
      *a5 += v47;
      v8 = 0LL;
    }
    v48 = *(_BYTE *)(i + 14);
    if ( v48 )
      v49 = (i & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v48 << 16) + 0x10000;
    else
      v49 = a1;
    if ( v49 != a2 )
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
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      i += v18;
      goto LABEL_41;
    }
    v50 = *(_QWORD *)(i + 56);
    if ( !v50 )
    {
      if ( i + 16LL * *(unsigned __int16 *)(i + 8) != *(_QWORD *)(a2 + 72) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint("Heap block at %p is not last block in segment (%p)\n", i, *(_QWORD *)(a2 + 72));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      return 1;
    }
    ++v12;
    v53 = (v50 >> 12) + v11;
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
      *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
    }
    i += *(_QWORD *)(i + 56) + 64LL;
    if ( i != *(_QWORD *)(a2 + 72) )
    {
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(i + 11) != (*(_BYTE *)(i + 8) ^ (unsigned __int8)(*(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10))) )
        {
          RtlpAnalyzeHeapFailure(a1, i);
          v8 = 0LL;
        }
      }
      if ( *(_WORD *)(a1 + 140) != *(_WORD *)(i + 12) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap block at %p has corrupted PreviousSize (%lx)\n",
          i,
          *(unsigned __int16 *)(a1 + 140) ^ (unsigned int)*(unsigned __int16 *)(i + 12));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    LOWORD(v13) = (_WORD)v8;
LABEL_41:
    v11 = v53;
  }
  if ( NtCurrentPeb()->Ldr == v8 )
    DbgPrint("HEAP: ");
  else
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  DbgPrint(
    "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
    (const void *)i,
    *(unsigned __int16 *)(a1 + 140) ^ *(unsigned __int16 *)(i + 12),
    (unsigned __int16)v13);
LABEL_117:
  v23 = *(_DWORD *)(a1 + 124) == 0;
LABEL_118:
  if ( !v23 )
  {
    *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
    *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 0;
}
