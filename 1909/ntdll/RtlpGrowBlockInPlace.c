/*
 * XREFs of RtlpGrowBlockInPlace @ 0x1800445F8
 * Callers:
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180045188 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180047014 (RtlpHeapRemoveListEntry.c)
 *     RtlpZeroBlockFromOffset @ 0x180047168 (RtlpZeroBlockFromOffset.c)
 *     RtlpCommitBlock @ 0x180047214 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A16B0 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800F139C (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  char result; // al
  __int64 *v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // rdx
  unsigned __int64 i; // rax
  __int64 *v20; // rax
  int v21; // r9d
  char v22; // al
  SIZE_T v23; // rbp
  SIZE_T v24; // r14
  char v25; // r9
  unsigned __int16 v26; // dx
  char v27; // cl
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // [rsp+48h] [rbp-40h]
  char v40; // [rsp+90h] [rbp+8h]
  unsigned __int64 v41; // [rsp+A0h] [rbp+18h]
  char v42; // [rsp+B0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v40 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v41 = *(unsigned __int16 *)(a3 + 8) + v11;
  if ( v41 < a5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v13 = *(__int64 **)(v10 + 24);
  v14 = v10 + 16;
  v15 = *(_QWORD *)(v10 + 16);
  v16 = *v13;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *v13 != v17 || v16 != v14 )
  {
    RtlpLogHeapFailure(13, a1, v14, v17, v16, 0LL);
    return 0;
  }
  v18 = *(__int64 **)(a1 + 312);
  *(_QWORD *)(a1 + 192) -= v11;
  if ( v18 )
  {
    for ( i = *((unsigned int *)v18 + 2); ; i = *((unsigned int *)v20 + 2) )
    {
      if ( *(unsigned __int16 *)(v10 + 8) < i )
      {
        v21 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_18;
      }
      v20 = (__int64 *)*v18;
      if ( !*v18 )
        break;
      v18 = (__int64 *)*v18;
    }
    v21 = *((_DWORD *)v18 + 2) - 1;
LABEL_18:
    LOBYTE(v14) = 1;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v18, v14, v10 + 16, v21, *(unsigned __int16 *)(v10 + 8));
  }
  *v13 = v15;
  *(_QWORD *)(v15 + 8) = v13;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
  {
    RtlpDeCommitFreeBlock(a1);
    return 0;
  }
  v22 = *(_BYTE *)(v10 + 10);
  if ( (v22 & 4) != 0 )
  {
    v23 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v22 & 2) != 0 && v23 > 4 )
      v23 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v24 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v23, 0xFEEEFEEE);
    if ( v24 != v23 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v24 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v25 = *(_BYTE *)(v10 + 10);
  v26 = *(_WORD *)(a3 + 8);
  v27 = *(_BYTE *)(a3 + 15);
  v42 = v25;
  if ( v27 == 5 )
  {
    v28 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v27 & 0x40) != 0 )
  {
    v28 = *(unsigned __int16 *)(a3 + 16LL * (v27 & 0x3F) + 12);
  }
  else if ( (v27 & 0x3F) == 0x3F )
  {
    if ( v27 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v35 = *(_DWORD *)(a3 + 8);
        LOWORD(v39) = v35;
        if ( (v35 & *(_DWORD *)(a1 + 124)) != 0 )
          v39 = *(_DWORD *)(a1 + 136) ^ v35;
        v26 = v39;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (a3 >> 4)) )
        v34 = 0LL;
      else
        v34 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      v26 = *(_WORD *)(v34 + 36);
    }
    v28 = *(_QWORD *)(a3 + 16LL * v26);
  }
  else
  {
    v28 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v29 = 16LL * *(unsigned __int16 *)(a3 + 8) - v28;
  v30 = v41 - v6;
  if ( v41 - v6 <= 2 )
    v6 = v41;
  v31 = 0LL;
  if ( v30 > 2 )
    v31 = v30;
  if ( (v40 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_37;
    *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                      a1,
                                      *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                      *(unsigned __int16 *)(a3 + 8),
                                      v6,
                                      4);
  }
  else
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_37;
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v6, 4);
  }
  v25 = v42;
LABEL_37:
  *(_WORD *)(a3 + 8) = v6;
  v32 = 16 * v6;
  v33 = 16 * v6 - a4;
  if ( v31 )
  {
    if ( v33 >= 0x3F )
    {
      *(_QWORD *)(v32 + a3) = v33;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v33;
    }
    RtlpCreateSplitBlock(a1, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v31);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v25;
    if ( v33 >= 0x3F )
    {
      *(_QWORD *)(v32 + a3) = v33;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v33;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v29 )
      v29 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v29);
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    goto LABEL_45;
  v36 = 4 - (v29 & 3);
  if ( (v29 & 3) == 0 )
    v36 = v29 & 3;
  if ( a4 <= v36 + v29 )
    goto LABEL_45;
  if ( ((a4 - v36 - v29) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_45;
  v37 = ((a4 - v36 - v29) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v38 = v36 + v29 + a3 + 16;
  if ( !v37 )
    goto LABEL_45;
  if ( (v38 & 4) == 0 )
  {
LABEL_84:
    memset64((void *)v38, 0xBAADF00DBAADF00DuLL, v37 >> 1);
    if ( (v37 & 1) != 0 )
      *(_DWORD *)(v38 + 4 * v37 - 4) = -1163005939;
    goto LABEL_45;
  }
  *(_DWORD *)v38 = -1163005939;
  if ( --v37 )
  {
    v38 += 4LL;
    goto LABEL_84;
  }
LABEL_45:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + a4 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + a4 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (a2 >> 4) & 0xE0;
  return result;
}
