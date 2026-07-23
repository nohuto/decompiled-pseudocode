/*
 * XREFs of HvStoreModifiedData @ 0x1405A8438
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlMergeBitMaps @ 0x14000FA94 (RtlMergeBitMaps.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x1405A918C (HvpTruncateBins.c)
 *     HvResetDirtyData @ 0x1405A96E4 (HvResetDirtyData.c)
 *     HvpCountSetRangesInVector @ 0x1405E08D4 (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvStoreModifiedData(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  PVOID v3; // r12
  unsigned int *v4; // rsi
  void *v5; // r13
  PVOID *v6; // r15
  bool v7; // zf
  unsigned int v9; // eax
  unsigned int v10; // r14d
  PVOID PoolWithTag; // rax
  int LogEntry; // eax
  unsigned int SizeOfBitMap; // r14d
  unsigned int v14; // eax
  unsigned int v15; // ebx
  PVOID v17; // rax
  _OWORD *v18; // r14
  __int64 v19; // rdx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  unsigned int *v23; // rax
  PVOID *v24; // rax
  char *v25; // r14
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  PVOID v29; // rax
  PVOID *v30; // rsi
  __int64 v31; // r14
  unsigned int v32; // [rsp+40h] [rbp-29h]
  int v33; // [rsp+44h] [rbp-25h]
  unsigned int v34; // [rsp+4Ch] [rbp-1Dh]
  PVOID v35; // [rsp+50h] [rbp-19h]
  int v36; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v37; // [rsp+60h] [rbp-9h]
  __int64 v38; // [rsp+68h] [rbp-1h] BYREF
  void *v39; // [rsp+70h] [rbp+7h]
  _RTL_BITMAP BitMapHeader; // [rsp+78h] [rbp+Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+1Fh]
  unsigned int v42; // [rsp+D0h] [rbp+67h]
  PVOID P; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v42 = 0;
  v5 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v7 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  if ( !v7 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1716) = (unsigned __int8)HvpTruncateBins(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 108);
  v10 = v9;
  v34 = v9;
  NumberOfBytes = v9;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x30354D43u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 96), v10);
    v33 = *(_DWORD *)(BugCheckParameter2 + 88);
    LODWORD(v38) = v33;
    v39 = v5;
    LogEntry = HvpGenerateLogEntry(BugCheckParameter2);
    v3 = P;
    if ( LogEntry < 0 )
      goto LABEL_49;
  }
  else
  {
    v33 = v38;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v17 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v35 = v17;
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0x1000uLL);
    v19 = 4LL;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 272);
    v20 = *(_OWORD **)(BugCheckParameter2 + 64);
    v21 = v18;
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
      if ( *(_DWORD *)(BugCheckParameter2 + 1784) < v14 || *(_DWORD *)(BugCheckParameter2 + 1716) )
        *(_DWORD *)(BugCheckParameter2 + 1784) = v14;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
      {
        *(_DWORD *)(BugCheckParameter2 + 1680) = v33;
        *(_QWORD *)(BugCheckParameter2 + 1688) = v5;
        v5 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1696) = v34;
        *(_QWORD *)(BugCheckParameter2 + 1704) = v3;
        v3 = 0LL;
        *(_DWORD *)(BugCheckParameter2 + 1712) = 0;
        HvResetDirtyData(BugCheckParameter2);
      }
      if ( a2 || a3 )
      {
        v29 = v35;
        v35 = 0LL;
        v7 = *(_BYTE *)(BugCheckParameter2 + 191) == 0;
        *(_QWORD *)(BugCheckParameter2 + 1768) = v29;
        if ( !v7 )
          *(_BYTE *)(BugCheckParameter2 + 1720) = 1;
        if ( a3 )
        {
          *(_QWORD *)(BugCheckParameter2 + 1736) = v4;
          v4 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1728) = SizeOfBitMap;
          *(_QWORD *)(BugCheckParameter2 + 1752) = v6;
          v6 = 0LL;
          *(_DWORD *)(BugCheckParameter2 + 1744) = v34;
          *(_DWORD *)(BugCheckParameter2 + 1760) = v42;
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
    v23 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x30354D43u);
    v4 = v23;
    if ( v23 )
    {
      memmove(v23, *(const void **)(BugCheckParameter2 + 120), NumberOfBytes);
      v37 = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = v37;
      BitMapHeader.Buffer = v4;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        RtlMergeBitMaps((__int64)&BitMapHeader, (unsigned int *)&v38);
      v42 = HvpCountSetRangesInVector(&BitMapHeader);
      v24 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v42, 0x32354D43u);
      v6 = v24;
      if ( v24 )
      {
        memset(v24, 0, 24LL * v42);
        v32 = 0;
        if ( v42 )
        {
          v25 = (char *)(v6 + 1);
          do
          {
            if ( !(unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&v36, (__int64)&P, 1) )
              break;
            v26 = v38;
            if ( !v38 )
              goto LABEL_49;
            v27 = (int)P;
            v28 = v36;
            *((_DWORD *)v25 + 2) = v36;
            *((_DWORD *)v25 - 2) = v27;
            *(_QWORD *)v25 = v26;
            v25 += 24;
            LODWORD(P) = v28 + v27;
            ++v32;
          }
          while ( v32 < v42 );
        }
        memmove(v4, *(const void **)(BugCheckParameter2 + 120), NumberOfBytes);
        SizeOfBitMap = v37;
        goto LABEL_9;
      }
    }
  }
LABEL_49:
  v15 = 2;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
  {
    if ( v42 )
    {
      v30 = v6 + 1;
      v31 = v42;
      do
      {
        if ( *v30 )
          ExFreePoolWithTag(*v30, 0);
        v30 += 3;
        --v31;
      }
      while ( v31 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  return v15;
}
