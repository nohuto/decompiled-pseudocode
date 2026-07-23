/*
 * XREFs of HvStoreModifiedData @ 0x14065D6F0
 * Callers:
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14011BD88 (RtlMergeBitMaps.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvpCountSetRangesInVector @ 0x14062DB68 (HvpCountSetRangesInVector.c)
 *     HvpFindNextDirtyBlock @ 0x14062F344 (HvpFindNextDirtyBlock.c)
 *     HvResetDirtyData @ 0x14065C7B8 (HvResetDirtyData.c)
 *     HvpTruncateBins @ 0x14065DB20 (HvpTruncateBins.c)
 *     HvpGenerateLogEntry @ 0x14065DD60 (HvpGenerateLogEntry.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  void *v3; // r14
  unsigned int *v4; // r12
  PVOID v5; // r15
  PVOID *v6; // r13
  bool v8; // zf
  unsigned int v9; // eax
  SIZE_T v10; // rsi
  PVOID PoolWithTag; // rax
  unsigned int SizeOfBitMap; // esi
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  PVOID v17; // rax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int128 v21; // xmm1
  unsigned int *v22; // rax
  PVOID *v23; // rax
  char *v24; // rsi
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  PVOID v30; // rax
  PVOID *v31; // rsi
  __int64 v32; // r14
  int v33; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-21h]
  unsigned int v35; // [rsp+4Ch] [rbp-1Dh]
  int v36; // [rsp+50h] [rbp-19h]
  PVOID P; // [rsp+58h] [rbp-11h]
  PVOID v38; // [rsp+60h] [rbp-9h]
  unsigned int v39; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v40[3]; // [rsp+6Ch] [rbp+3h] BYREF
  void *v41; // [rsp+78h] [rbp+Fh]
  _RTL_BITMAP BitMapHeader; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v43; // [rsp+D0h] [rbp+67h]
  unsigned int Size; // [rsp+E8h] [rbp+7Fh]

  v3 = 0LL;
  v4 = 0LL;
  v36 = 0;
  v5 = 0LL;
  v43 = 0;
  v6 = 0LL;
  v38 = 0LL;
  v8 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  P = 0LL;
  *(_QWORD *)&v40[1] = 0LL;
  v41 = 0LL;
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
    v35 = *(_DWORD *)(BugCheckParameter2 + 88);
    v40[1] = v35;
    v41 = v3;
    v5 = P;
    if ( (int)HvpGenerateLogEntry(BugCheckParameter2) < 0 )
      goto LABEL_49;
  }
  else
  {
    v35 = v40[1];
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v17 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v38 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0x1000uLL);
    v18 = 4LL;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 272);
    v19 = *(_OWORD **)(BugCheckParameter2 + 64);
    v20 = v38;
    do
    {
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      v20[4] = v19[4];
      v20[5] = v19[5];
      v20[6] = v19[6];
      v20 += 8;
      v21 = v19[7];
      v19 += 8;
      *(v20 - 1) = v21;
      --v18;
    }
    while ( v18 );
    if ( !a3 )
    {
LABEL_8:
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
      v13 = *(_DWORD *)(BugCheckParameter2 + 272);
      if ( *(_DWORD *)(BugCheckParameter2 + 1784) < v13 || *(_DWORD *)(BugCheckParameter2 + 1720) )
        *(_DWORD *)(BugCheckParameter2 + 1784) = v13;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
      {
        *(_DWORD *)(BugCheckParameter2 + 1680) = v35;
        *(_QWORD *)(BugCheckParameter2 + 1688) = v3;
        v3 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1696) = Size;
        *(_DWORD *)(BugCheckParameter2 + 1712) = 0;
        v14 = v36;
        *(_QWORD *)(BugCheckParameter2 + 1704) = v5;
        v5 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1716) = v14;
        HvResetDirtyData(BugCheckParameter2);
      }
      if ( a2 || a3 )
      {
        v30 = v38;
        v38 = 0LL;
        v8 = *(_BYTE *)(BugCheckParameter2 + 191) == 0;
        *(_QWORD *)(BugCheckParameter2 + 1768) = v30;
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
          *(_DWORD *)(BugCheckParameter2 + 1760) = v43;
          if ( *(_QWORD *)(BugCheckParameter2 + 120) )
          {
            RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
            *(_DWORD *)(BugCheckParameter2 + 128) = 0;
            *(_BYTE *)(BugCheckParameter2 + 191) = 0;
          }
        }
      }
      v15 = 0;
      goto LABEL_16;
    }
    v22 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x30354D43u);
    v4 = v22;
    if ( v22 )
    {
      memmove(v22, *(const void **)(BugCheckParameter2 + 120), v10);
      LODWORD(P) = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)P;
      BitMapHeader.Buffer = v4;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, &v40[1]);
      v43 = HvpCountSetRangesInVector(&BitMapHeader);
      v23 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v43, 0x32354D43u);
      v6 = v23;
      if ( v23 )
      {
        memset(v23, 0, 24LL * v43);
        v34 = 0;
        v39 = 0;
        if ( v43 )
        {
          v24 = (char *)(v6 + 1);
          do
          {
            if ( !HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&BitMapHeader, &v39, &v40[1], v40, &v33, 1) )
              break;
            v25 = *(_QWORD *)&v40[1];
            if ( !*(_QWORD *)&v40[1] )
              goto LABEL_49;
            v26 = v33;
            v27 = v40[0];
            *((_DWORD *)v24 + 2) = v40[0];
            *((_DWORD *)v24 - 2) = v26;
            v28 = v27 + v26;
            v29 = v34 + 1;
            *(_QWORD *)v24 = v25;
            v24 += 24;
            v33 = v28;
            v34 = v29;
          }
          while ( v29 < v43 );
        }
        memmove(v4, *(const void **)(BugCheckParameter2 + 120), Size);
        SizeOfBitMap = (unsigned int)P;
        goto LABEL_9;
      }
    }
  }
LABEL_49:
  v15 = 2;
LABEL_16:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
  {
    if ( v43 )
    {
      v31 = v6 + 1;
      v32 = v43;
      do
      {
        if ( *v31 )
          ExFreePoolWithTag(*v31, 0);
        v31 += 3;
        --v32;
      }
      while ( v32 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v38 )
    ExFreePoolWithTag(v38, 0);
  return v15;
}
