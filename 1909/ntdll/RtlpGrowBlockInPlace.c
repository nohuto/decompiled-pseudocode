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
  unsigned __int64 v23; // rbp
  __int64 v24; // r14
  unsigned __int16 v25; // dx
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // r8
  unsigned __int8 v34; // al
  int v35; // edx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // [rsp+48h] [rbp-40h]
  char v42; // [rsp+90h] [rbp+8h]
  unsigned __int64 v43; // [rsp+A0h] [rbp+18h]
  char v44; // [rsp+B0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v42 = *(_BYTE *)(a3 + 10);
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
  v43 = *(unsigned __int16 *)(a3 + 8) + v11;
  if ( v43 < a5 )
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
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1, v10) )
  {
    LOBYTE(v17) = 1;
    RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), v17);
    return 0;
  }
  v22 = *(_BYTE *)(v10 + 10);
  if ( (v22 & 4) != 0 )
  {
    v23 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v22 & 2) != 0 && v23 > 4 )
      v23 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v24 = RtlCompareMemoryUlong(v10 + 32, v23, 4277075694LL);
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
  LOBYTE(v17) = *(_BYTE *)(v10 + 10);
  v25 = *(_WORD *)(a3 + 8);
  v26 = *(_BYTE *)(a3 + 15);
  v44 = v17;
  if ( v26 == 5 )
  {
    v27 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v26 & 0x40) != 0 )
  {
    v27 = *(unsigned __int16 *)(a3 + 16LL * (v26 & 0x3F) + 12);
  }
  else if ( (v26 & 0x3F) == 0x3F )
  {
    if ( v26 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(a3 + 8);
        LOWORD(v41) = v37;
        if ( (v37 & *(_DWORD *)(a1 + 124)) != 0 )
          v41 = *(_DWORD *)(a1 + 136) ^ v37;
        v25 = v41;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (a3 >> 4)) )
        v36 = 0LL;
      else
        v36 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      v25 = *(_WORD *)(v36 + 36);
    }
    v27 = *(_QWORD *)(a3 + 16LL * v25);
  }
  else
  {
    v27 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v28 = 16LL * *(unsigned __int16 *)(a3 + 8) - v27;
  v29 = v43 - v6;
  if ( v43 - v6 <= 2 )
    v6 = v43;
  v30 = 0LL;
  if ( v29 > 2 )
    v30 = v29;
  if ( (v42 & 2) != 0 )
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
  LOBYTE(v17) = v44;
LABEL_37:
  *(_WORD *)(a3 + 8) = v6;
  v31 = 16 * v6;
  v32 = 16 * v6 - a4;
  if ( v30 )
  {
    v33 = (unsigned __int64 *)(v31 + a3);
    if ( v32 >= 0x3F )
    {
      *v33 = v32;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v32;
    }
    v34 = *(_BYTE *)(a3 + 14);
    if ( v34 )
      v35 = (a3 & 0xFFFF0000) - (v34 << 16) + 0x10000;
    else
      v35 = a1;
    RtlpCreateSplitBlock(a1, v35, (_DWORD)v33, v17, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v30);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v17;
    if ( v32 >= 0x3F )
    {
      *(_QWORD *)(v31 + a3) = v32;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v32;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v28 )
      v28 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v28);
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    goto LABEL_47;
  v38 = 4 - (v28 & 3);
  if ( (v28 & 3) == 0 )
    v38 = v28 & 3;
  if ( a4 <= v38 + v28 )
    goto LABEL_47;
  if ( ((a4 - v38 - v28) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_47;
  v39 = ((a4 - v38 - v28) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v40 = v38 + v28 + a3 + 16;
  if ( !v39 )
    goto LABEL_47;
  if ( (v40 & 4) == 0 )
  {
LABEL_87:
    memset64((void *)v40, 0xBAADF00DBAADF00DuLL, v39 >> 1);
    if ( (v39 & 1) != 0 )
      *(_DWORD *)(v40 + 4 * v39 - 4) = -1163005939;
    goto LABEL_47;
  }
  *(_DWORD *)v40 = -1163005939;
  if ( --v39 )
  {
    v40 += 4LL;
    goto LABEL_87;
  }
LABEL_47:
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
