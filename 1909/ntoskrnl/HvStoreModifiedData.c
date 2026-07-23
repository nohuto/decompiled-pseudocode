/*
 * XREFs of HvStoreModifiedData @ 0x140641468
 * Callers:
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14011A1E4 (RtlMergeBitMaps.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvpCountSetRangesInVector @ 0x1406319E4 (HvpCountSetRangesInVector.c)
 *     HvpFindNextDirtyBlock @ 0x1406331C4 (HvpFindNextDirtyBlock.c)
 *     HvpGenerateLogEntry @ 0x1406410A4 (HvpGenerateLogEntry.c)
 *     HvpTruncateBins @ 0x140641898 (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x140641CB4 (HvResetDirtyData.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  void *v3; // r14
  unsigned int *v4; // r12
  PVOID *v5; // r15
  PVOID *v6; // r13
  bool v8; // zf
  unsigned int v9; // eax
  SIZE_T v10; // rsi
  PVOID PoolWithTag; // rax
  int v12; // eax
  unsigned int SizeOfBitMap; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  PVOID v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  unsigned int *v23; // rax
  PVOID *v24; // rax
  char *v25; // rsi
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  PVOID v31; // rax
  PVOID *v32; // rsi
  __int64 v33; // r14
  PVOID *v34; // rsi
  __int64 v35; // r14
  unsigned int v36; // [rsp+40h] [rbp-29h] BYREF
  int v37; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-21h]
  unsigned int v39; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v40; // [rsp+50h] [rbp-19h] BYREF
  PVOID P; // [rsp+58h] [rbp-11h] BYREF
  PVOID v42; // [rsp+60h] [rbp-9h]
  unsigned int v43; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v44[3]; // [rsp+6Ch] [rbp+3h] BYREF
  void *v45; // [rsp+78h] [rbp+Fh]
  _RTL_BITMAP BitMapHeader; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v47; // [rsp+D0h] [rbp+67h]
  unsigned int Size; // [rsp+E8h] [rbp+7Fh]

  v3 = 0LL;
  v36 = 0;
  v4 = 0LL;
  v40 = 0;
  v5 = 0LL;
  v47 = 0;
  v6 = 0LL;
  v42 = 0LL;
  v8 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  P = 0LL;
  *(_QWORD *)&v44[1] = 0LL;
  v45 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  if ( !v8 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1720) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 108);
  v10 = v9;
  Size = v9;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x30354D43u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 96), (unsigned int)v10);
    v39 = *(_DWORD *)(BugCheckParameter2 + 88);
    v44[1] = v39;
    v45 = v3;
    v12 = HvpGenerateLogEntry(BugCheckParameter2, (PVOID **)&P, &v36, &v40);
    v5 = (PVOID *)P;
    if ( v12 < 0 )
      goto LABEL_48;
  }
  else
  {
    v39 = v44[1];
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v18 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v42 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x1000uLL);
    v19 = 4LL;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 272);
    v20 = *(_OWORD **)(BugCheckParameter2 + 64);
    v21 = v42;
    do
    {
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v21[4] = v20[4];
      v21[5] = v20[5];
      v21[6] = v20[6];
      v21 += 8;
      v22 = v20[7];
      v20 += 8;
      *(v21 - 1) = v22;
      --v19;
    }
    while ( v19 );
    if ( !a3 )
    {
LABEL_8:
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
      v14 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( *(_DWORD *)(BugCheckParameter2 + 1784) < v14 || *(_DWORD *)(BugCheckParameter2 + 1720) )
        *(_DWORD *)(BugCheckParameter2 + 1784) = v14;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
      {
        *(_DWORD *)(BugCheckParameter2 + 1680) = v39;
        *(_QWORD *)(BugCheckParameter2 + 1688) = v3;
        v3 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1696) = Size;
        *(_DWORD *)(BugCheckParameter2 + 1712) = v36;
        v15 = v40;
        *(_QWORD *)(BugCheckParameter2 + 1704) = v5;
        v5 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1716) = v15;
        HvResetDirtyData(BugCheckParameter2);
      }
      if ( a2 || a3 )
      {
        v31 = v42;
        v42 = 0LL;
        v8 = *(_BYTE *)(BugCheckParameter2 + 191) == 0;
        *(_QWORD *)(BugCheckParameter2 + 1768) = v31;
        if ( !v8 )
          *(_BYTE *)(BugCheckParameter2 + 1724) = 1;
        if ( a3 )
        {
          *(_QWORD *)(BugCheckParameter2 + 1736) = v4;
          v4 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1728) = SizeOfBitMap;
          *(_QWORD *)(BugCheckParameter2 + 1752) = v6;
          v6 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1744) = Size;
          *(_DWORD *)(BugCheckParameter2 + 1760) = v47;
          if ( *(_QWORD *)(BugCheckParameter2 + 120) )
          {
            RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
            *(_DWORD *)(BugCheckParameter2 + 128) = 0;
            *(_BYTE *)(BugCheckParameter2 + 191) = 0;
          }
        }
      }
      v16 = 0;
      goto LABEL_16;
    }
    v23 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x30354D43u);
    v4 = v23;
    if ( v23 )
    {
      memmove(v23, *(const void **)(BugCheckParameter2 + 120), v10);
      LODWORD(P) = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)P;
      BitMapHeader.Buffer = v4;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, &v44[1]);
      v47 = HvpCountSetRangesInVector(&BitMapHeader);
      v24 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v47, 0x32354D43u);
      v6 = v24;
      if ( v24 )
      {
        memset(v24, 0, 24LL * v47);
        v38 = 0;
        v43 = 0;
        if ( v47 )
        {
          v25 = (char *)(v6 + 1);
          do
          {
            if ( !HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&BitMapHeader, &v43, &v44[1], v44, &v37, 1) )
              break;
            v26 = *(_QWORD *)&v44[1];
            if ( !*(_QWORD *)&v44[1] )
              goto LABEL_48;
            v27 = v37;
            v28 = v44[0];
            *((_DWORD *)v25 + 2) = v44[0];
            *((_DWORD *)v25 - 2) = v27;
            v29 = v28 + v27;
            v30 = v38 + 1;
            *(_QWORD *)v25 = v26;
            v25 += 24;
            v37 = v29;
            v38 = v30;
          }
          while ( v30 < v47 );
        }
        memmove(v4, *(const void **)(BugCheckParameter2 + 120), Size);
        SizeOfBitMap = (unsigned int)P;
        goto LABEL_9;
      }
    }
  }
LABEL_48:
  v16 = 2;
LABEL_16:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v5 )
  {
    if ( v36 )
    {
      v32 = v5 + 1;
      v33 = v36;
      do
      {
        if ( *v32 )
        {
          ExFreePoolWithTag(*v32, 0);
          *v32 = 0LL;
        }
        v32 += 3;
        --v33;
      }
      while ( v33 );
    }
    ExFreePoolWithTag(v5, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
  {
    if ( v47 )
    {
      v34 = v6 + 1;
      v35 = v47;
      do
      {
        if ( *v34 )
          ExFreePoolWithTag(*v34, 0);
        v34 += 3;
        --v35;
      }
      while ( v35 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  return v16;
}
