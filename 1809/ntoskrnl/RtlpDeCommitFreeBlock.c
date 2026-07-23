/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x1402F15D8
 * Callers:
 *     RtlpFreeHeap @ 0x1402F20B8 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     RtlpCoalesceFreeBlocks @ 0x1402F0964 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x1402F1498 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x1402F28D4 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1402F2C20 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1402F2D78 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1402F3160 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1402FBDBC (RtlpHeapHandleError.c)
 */

unsigned __int64 __fastcall RtlpDeCommitFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rbx
  char v7; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r15
  _WORD *v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _QWORD *i; // rdx
  _QWORD *v20; // rcx
  _WORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  bool v28; // zf
  _QWORD *v29; // r13
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // rcx
  unsigned __int64 result; // rax
  char *v33; // r14
  ULONG_PTR v34; // r15
  bool v35; // cc
  __int64 v36; // rdx
  char *v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // rax
  char *v42; // r15
  ULONG_PTR v43; // r14
  __int64 v44; // rdx
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  __int64 v46; // [rsp+38h] [rbp-28h]
  __int64 v47; // [rsp+40h] [rbp-20h]
  _QWORD *v48; // [rsp+48h] [rbp-18h]
  char *v49; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v51; // [rsp+B0h] [rbp+50h] BYREF
  char v52; // [rsp+B8h] [rbp+58h]

  v52 = a4;
  v51 = a3;
  v4 = 0;
  v28 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = a2;
  v6 = a1;
  v46 = 0LL;
  v7 = 0;
  v52 = 0;
  if ( !v28 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
LABEL_79:
    a1 = v6;
    return RtlpInsertFreeBlock(a1, a2, a3);
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, a2, &v51);
  v12 = *(_BYTE *)(v5 + 14);
  if ( v12 )
  {
    v9 = (unsigned __int64)v12 << 16;
    v13 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v9 + 0x10000;
  }
  else
  {
    v13 = v6;
  }
  v14 = v51;
  v15 = 2 * v51;
  if ( HIBYTE(v11[8 * v51 + 7]) == 3 )
  {
    v16 = &v11[8 * v51 + 8];
    RtlpRemoveUCRBlock(v9, v16, v10, 1LL);
    v17 = *((_QWORD *)v16 + 5);
    v46 = *((_QWORD *)v16 + 4);
    v47 = v17;
    --*(_DWORD *)(v13 + 84);
    *(_DWORD *)(v13 + 80) -= *((_QWORD *)v16 + 5) >> 12;
    *(_QWORD *)(v6 + 576) += *((_QWORD *)v16 + 5);
    --*(_DWORD *)(v6 + 604);
    v18 = *((_QWORD *)v16 + 5);
    if ( v18 >= 0xFF000 )
    {
      *(_QWORD *)(v6 + 584) -= v18;
      v18 = *((_QWORD *)v16 + 5);
    }
    v52 = 1;
    v14 += (v18 >> 4) + 64;
    v7 = 1;
    v51 = v14;
  }
  else
  {
    v47 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) != v11[6] )
  {
    v37 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v37;
    if ( v37 == (char *)(v11 + 40) )
    {
      v37 += 4096;
      BaseAddress = v37;
    }
    if ( v7 )
    {
      v38 = 8 * v14;
      v39 = (__int64)&v11[8 * v14];
    }
    else
    {
      v38 = 8 * v14;
      v39 = (__int64)&v11[8 * v14 - 16];
    }
    v40 = v39 & 0xFFFFFFFFFFFFF000uLL;
    RegionSize = v40;
    if ( v40 < (unsigned __int64)v37 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 && v52 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
      goto LABEL_29;
    }
    v41 = v40 - (_QWORD)v37;
    RegionSize = v41;
    if ( HIBYTE(v11[4 * v15 + 7]) != 3 && (!v41 || v41 < *(_QWORD *)(v6 + 176)) )
    {
LABEL_29:
      a3 = v14;
LABEL_30:
      a2 = (__int64)v11;
      goto LABEL_79;
    }
    if ( !v41
      || (++*(_DWORD *)(v6 + 612),
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) >= 0) )
    {
      if ( !v52 )
      {
        v42 = (char *)BaseAddress + RegionSize;
        *(_WORD *)((char *)BaseAddress + RegionSize + 12) = *(_WORD *)(v6 + 140);
        if ( &v11[v38] == (_WORD *)((char *)BaseAddress + RegionSize) )
        {
          if ( *(_DWORD *)(v6 + 124) )
          {
            v42[11] = v42[8] ^ v42[9] ^ v42[10];
            *((_DWORD *)v42 + 2) ^= *(_DWORD *)(v6 + 136);
          }
        }
        else
        {
          v42[15] = 0;
          v42[10] = 0;
          v43 = ((unsigned __int64)v11 + v38 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
          v35 = RtlpHeapErrorHandlerThreshold < 1;
          *((_WORD *)v42 + 4) = v43;
          if ( !v35 && (unsigned __int16)v43 <= 1u )
          {
            DbgPrint("(LONG)FreeEntry->Size > 1");
            RtlpHeapHandleError();
          }
          v42[11] = 0;
          v44 = *(_QWORD *)(v13 + 40);
          if ( v44 != v13 )
          {
            if ( ((unsigned __int64)&v42[-v13] >> 16) + 1 >= 0xFE )
            {
              RtlpLogHeapFailure(3, v44, (_DWORD)v42, v13, 0LL, 0LL);
              LOWORD(v43) = *((_WORD *)v42 + 4);
            }
            v4 = ((unsigned int)((_DWORD)v42 - v13) >> 16) + 1;
          }
          v42[14] = v4;
          RtlpInsertFreeBlock(v6, v42, (unsigned __int16)v43);
        }
      }
      RtlpCreateUCREntry(v6, v13, (__int64)BaseAddress - 48, RegionSize, (unsigned __int64)v11, (__int64 *)&v49);
      a3 = (unsigned __int64)v49;
      goto LABEL_30;
    }
    RtlpUpdateHeapRates(v6, 3LL);
    v28 = v52 == 0;
LABEL_33:
    if ( !v28 )
    {
      RtlpCreateUCREntry(v27, v13, v46 - 48, v47, (unsigned __int64)v11, &v51);
      v14 = v51;
    }
    goto LABEL_29;
  }
  BaseAddress = v11;
  for ( i = *(_QWORD **)(v13 + 96); (_QWORD *)(v13 + 96) != i; i = (_QWORD *)*i )
  {
    v20 = i - 2;
    v21 = (_WORD *)(i[2] + i[3]);
    v48 = i - 2;
    if ( v21 == v11 )
      goto LABEL_19;
  }
  v20 = 0LL;
  v48 = 0LL;
LABEL_19:
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v20 )
  {
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError();
  }
  v22 = 8 * v14;
  if ( v7 )
  {
    v23 = (__int64)&v11[v22];
    v49 = (char *)&v11[v22];
  }
  else
  {
    v49 = (char *)&v11[v22];
    v23 = (__int64)&v11[v22 - 16];
  }
  RegionSize = (v23 & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
  if ( !RegionSize )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      if ( v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
    }
    goto LABEL_29;
  }
  if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
  {
    RtlpUpdateHeapRates(v6, 3LL);
    v28 = v7 == 0;
    goto LABEL_33;
  }
  v29 = v48;
  ++*(_DWORD *)(v6 + 612);
  v30 = v29[5];
  if ( v30 >= 0xFF000 )
    *(_QWORD *)(v6 + 584) -= v30;
  RtlpRemoveUCRBlock(v24, v29, v25, v26);
  v29[5] += RegionSize;
  RtlpInsertUCRBlock(v6, v29);
  *(_DWORD *)(v13 + 80) += RegionSize >> 12;
  v31 = RegionSize;
  *(_QWORD *)(v6 + 576) -= RegionSize;
  result = v29[5];
  if ( result >= 0xFF000 )
    *(_QWORD *)(v6 + 584) += result;
  if ( !v7 )
  {
    result = *(unsigned __int16 *)(v6 + 140);
    v33 = (char *)BaseAddress + v31;
    *(_WORD *)((char *)BaseAddress + v31 + 12) = result;
    if ( v49 != (char *)BaseAddress + RegionSize )
    {
      v33[15] = 0;
      v33[10] = 0;
      v34 = (v22 * 2 - RegionSize) >> 4;
      v35 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v33 + 4) = v34;
      if ( !v35 && (unsigned __int16)v34 <= 1u )
      {
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v33[11] = 0;
      v36 = *(_QWORD *)(v13 + 40);
      if ( v36 != v13 )
      {
        if ( ((unsigned __int64)&v33[-v13] >> 16) + 1 >= 0xFE )
        {
          RtlpLogHeapFailure(3, v36, (_DWORD)v33, v13, 0LL, 0LL);
          LOWORD(v34) = *((_WORD *)v33 + 4);
        }
        v4 = ((unsigned int)((_DWORD)v33 - v13) >> 16) + 1;
      }
      v33[14] = v4;
      a2 = (__int64)v33;
      a3 = (unsigned __int16)v34;
      goto LABEL_79;
    }
    if ( *(_DWORD *)(v6 + 124) )
    {
      v33[11] = v33[8] ^ v33[9] ^ v33[10];
      result = *(unsigned int *)(v6 + 136);
      *((_DWORD *)v33 + 2) ^= result;
    }
  }
  return result;
}
