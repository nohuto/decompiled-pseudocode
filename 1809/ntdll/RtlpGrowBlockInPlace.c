/*
 * XREFs of RtlpGrowBlockInPlace @ 0x1800214E4
 * Callers:
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpZeroBlockFromOffset @ 0x180076928 (RtlpZeroBlockFromOffset.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A4B00 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        _BYTE *BaseAddress,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned int v8; // r12d
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rcx
  __int64 *v13; // r11
  __int64 *v14; // r8
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 *v18; // r14
  unsigned __int64 v19; // r13
  unsigned __int64 i; // rax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // r15d
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdi
  char v30; // al
  unsigned __int16 v31; // dx
  char v32; // cl
  char v33; // r9
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 *v40; // r8
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  char result; // al
  __int64 *v44; // rax
  SIZE_T v45; // rdi
  SIZE_T v46; // r14
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r8
  __int64 *v52; // [rsp+40h] [rbp-78h]
  int v53; // [rsp+48h] [rbp-70h]
  __int16 v54[4]; // [rsp+50h] [rbp-68h]
  int v55; // [rsp+60h] [rbp-58h]
  char v56; // [rsp+C0h] [rbp+8h]
  __int64 v60; // [rsp+E0h] [rbp+28h]
  char v61; // [rsp+E0h] [rbp+28h]

  v5 = a5;
  v6 = a4;
  v8 = a2;
  if ( a5 > *((unsigned int *)BaseAddress + 37) )
    return 0;
  v56 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    return 0;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v11 = *(_DWORD *)(v10 + 8) ^ *((_DWORD *)BaseAddress + 34);
    *(_DWORD *)(v10 + 8) = v11;
    if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v10);
  }
  v12 = *(unsigned __int16 *)(v10 + 8);
  *(_QWORD *)v54 = *(unsigned __int16 *)(a3 + 8) + v12;
  if ( *(_QWORD *)v54 < a5 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 10) ^ v12 ^ BYTE1(v12);
      *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    return 0;
  }
  v13 = *(__int64 **)(v10 + 24);
  v14 = (__int64 *)(v10 + 16);
  v15 = *(_QWORD *)(v10 + 16);
  v60 = v15;
  v52 = v13;
  v16 = *v13;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *v13 != v17 || (__int64 *)v16 != v14 )
  {
    RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v14, v17, v16, 0LL);
    return 0;
  }
  v18 = (__int64 *)*((_QWORD *)BaseAddress + 39);
  *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v10 + 8);
  if ( v18 )
  {
    v19 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v18 + 2); ; i = *((unsigned int *)v44 + 2) )
    {
      if ( v19 < i )
      {
        v21 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_13;
      }
      v44 = (__int64 *)*v18;
      if ( !*v18 )
        break;
      v18 = (__int64 *)*v18;
    }
    v21 = *((_DWORD *)v18 + 2) - 1;
LABEL_13:
    v22 = v18[6];
    v23 = v21 - *((_DWORD *)v18 + 6);
    v24 = *((_DWORD *)v18 + 2);
    v25 = 2 * v23;
    if ( !*((_DWORD *)v18 + 3) )
      v25 = v23;
    v26 = (unsigned int)v25;
    v27 = *(__int64 **)(v22 + 8 * v25);
    v28 = v24 - 1;
    --*((_DWORD *)v18 + 4);
    if ( v21 == v24 - 1 )
      --*((_DWORD *)v18 + 5);
    if ( v27 == v14 )
    {
      v29 = *v14;
      if ( *v18 )
        v28 = v24;
      if ( v21 >= v28 )
      {
        v6 = a4;
        if ( v29 == v18[4] )
        {
          *(_QWORD *)(v22 + 8 * v26) = 0LL;
          *(_DWORD *)(v18[5] + 4 * ((unsigned __int64)v23 >> 5)) &= ~(1 << (v23 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v22 + 8 * v26) = v29;
        }
        goto LABEL_28;
      }
      if ( v29 == v18[4] )
        goto LABEL_26;
      v55 = *(_DWORD *)(v29 - 16 + 8);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v55 = *(_DWORD *)(v29 - 16 + 8) ^ *((_DWORD *)BaseAddress + 34);
        if ( HIBYTE(v55) != ((unsigned __int8)v55 ^ (unsigned __int8)(BYTE1(v55) ^ BYTE2(v55))) )
        {
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v29 - 16, 0, 0LL, 0LL);
          v15 = v60;
          v13 = v52;
        }
      }
      if ( (_DWORD)v19 == (unsigned __int16)v55 )
      {
        *(_QWORD *)(v18[6] + 8 * v26) = v29;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v18[6] + 8 * v26) = 0LL;
        *(_DWORD *)(v18[5] + 4 * ((unsigned __int64)v23 >> 5)) &= ~(1 << (v23 & 0x1F));
      }
    }
    v6 = a4;
LABEL_28:
    v5 = a5;
    v8 = a2;
  }
  *v13 = v15;
  *(_QWORD *)(v15 + 8) = v13;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(BaseAddress) )
  {
    RtlpDeCommitFreeBlock(BaseAddress, v10, *(unsigned __int16 *)(v10 + 8), 1);
    return 0;
  }
  v30 = *(_BYTE *)(v10 + 10);
  if ( (v30 & 4) != 0 )
  {
    v45 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v30 & 2) != 0 && v45 > 4 )
      v45 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v46 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v45, 0xFEEEFEEE);
    if ( v46 != v45 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v46 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v31 = *(_WORD *)(a3 + 8);
  v32 = *(_BYTE *)(a3 + 15);
  v33 = *(_BYTE *)(v10 + 10);
  v61 = v33;
  if ( v32 == 5 )
  {
    v34 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
  }
  else if ( (v32 & 0x40) != 0 )
  {
    v34 = *(unsigned __int16 *)(a3 + 16LL * (v32 & 0x3F) + 12);
  }
  else if ( (v32 & 0x3F) == 0x3F )
  {
    if ( v32 >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v48 = *(_DWORD *)(a3 + 8);
        LOWORD(v53) = v48;
        if ( (v48 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v53 = *((_DWORD *)BaseAddress + 34) ^ v48;
        v31 = v53;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (a3 >> 4)) )
        v47 = 0LL;
      else
        v47 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(a3 >> 4)) >> 12));
      v31 = *(_WORD *)(v47 + 36);
    }
    v34 = *(_QWORD *)(a3 + 16LL * v31);
  }
  else
  {
    v34 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v35 = 16LL * *(unsigned __int16 *)(a3 + 8) - v34;
  v36 = *(_QWORD *)v54 - v5;
  if ( *(_QWORD *)v54 - v5 <= 2 )
    v5 = *(_QWORD *)v54;
  v37 = 0LL;
  if ( v36 > 2 )
    v37 = v36;
  if ( (v56 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v5 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_41;
    *(_WORD *)(a3 + 16 * v5 - 14) = RtlpUpdateTagEntry(
                                      (_DWORD)BaseAddress,
                                      *(unsigned __int16 *)(a3 + 16 * v5 - 14),
                                      *(unsigned __int16 *)(a3 + 8),
                                      v5,
                                      4);
  }
  else
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_41;
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(
                            (_DWORD)BaseAddress,
                            *(unsigned __int8 *)(a3 + 11),
                            *(unsigned __int16 *)(a3 + 8),
                            v5,
                            4);
  }
  v33 = v61;
LABEL_41:
  *(_WORD *)(a3 + 8) = v5;
  v38 = 16 * v5;
  v39 = 16 * v5 - v6;
  if ( v37 )
  {
    v40 = (unsigned __int64 *)(a3 + v38);
    if ( v39 >= 0x3F )
    {
      *v40 = v39;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v39;
    }
    v41 = *(_BYTE *)(a3 + 14);
    if ( v41 )
      v42 = (a3 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v41 << 16) + 0x10000;
    else
      v42 = (__int64)BaseAddress;
    RtlpCreateSplitBlock(
      BaseAddress,
      v42,
      (unsigned __int64)v40,
      v33,
      (*((_DWORD *)BaseAddress + 28) & 0x40) != 0,
      v5,
      v37);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v33;
    if ( v39 >= 0x3F )
    {
      *(_QWORD *)(v38 + a3) = v39;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v39;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *((_WORD *)BaseAddress + 70);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v6 < v35 )
      v35 = v6;
    RtlpZeroBlockFromOffset(BaseAddress, a3 + 16, v35);
    goto LABEL_49;
  }
  if ( (BaseAddress[112] & 0x40) != 0 )
  {
    v49 = 4 - (v35 & 3);
    if ( (v35 & 3) == 0 )
      v49 = v35 & 3;
    if ( v6 > v49 + v35 && ((v6 - v49 - v35) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v50 = ((v6 - v49 - v35) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v51 = v49 + v35 + a3 + 16;
      if ( v50 )
      {
        if ( (v51 & 4) == 0 )
          goto LABEL_105;
        *(_DWORD *)v51 = -1163005939;
        if ( --v50 )
        {
          v51 += 4LL;
LABEL_105:
          memset64((void *)v51, 0xBAADF00DBAADF00DuLL, v50 >> 1);
          if ( (v50 & 1) != 0 )
            *(_DWORD *)(v51 + 4 * v50 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_49:
  if ( (BaseAddress[112] & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + v6 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + v6 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v8 >> 4) & 0xE0;
  return result;
}
