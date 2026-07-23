/*
 * XREFs of HvpGenerateLogEntry @ 0x1405A8860
 * Callers:
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     SymCryptMarvin32 @ 0x1401AF184 (SymCryptMarvin32.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     CmpLogDirtyVectorUse @ 0x1405A8DC8 (CmpLogDirtyVectorUse.c)
 *     HvpGenerateLogMetadata @ 0x1405A93CC (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1405E08D4 (HvpCountSetRangesInVector.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, _QWORD *a2, unsigned int *a3)
{
  int v3; // r14d
  _RTL_BITMAP *v4; // r12
  unsigned int v6; // ebx
  ULONG v7; // eax
  unsigned int v8; // r13d
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rsi
  unsigned int v11; // ebx
  unsigned __int16 *v12; // rdi
  int v13; // r14d
  __int64 v14; // rax
  unsigned int v15; // r14d
  ULONG v16; // ebx
  unsigned int v17; // eax
  _OWORD *v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23[11]; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp+10h]
  unsigned int *v26; // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h]

  v26 = a3;
  v25 = a2;
  v3 = *(_DWORD *)(BugCheckParameter2 + 176);
  v4 = (_RTL_BITMAP *)(BugCheckParameter2 + 88);
  v6 = HvpCountSetRangesInVector((PRTL_BITMAP)(BugCheckParameter2 + 88));
  LODWORD(Size) = v6;
  v7 = RtlNumberOfSetBits(v4);
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, v6, v7);
  v8 = ((v3 != 0 ? 4135 : 4647) + 8 * (v6 + (*(_DWORD *)(BugCheckParameter2 + 104) << 6))) & 0xFFFFF000;
  v9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v8, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v11 = 0;
    if ( !v3 )
    {
      v19 = *(_OWORD **)(BugCheckParameter2 + 64);
      v20 = 4LL;
      v21 = PoolWithTag;
      do
      {
        *v21 = *v19;
        v21[1] = v19[1];
        v21[2] = v19[2];
        v21[3] = v19[3];
        v21[4] = v19[4];
        v21[5] = v19[5];
        v21[6] = v19[6];
        v21 += 8;
        v22 = v19[7];
        v19 += 8;
        *(v21 - 1) = v22;
        --v20;
      }
      while ( v20 );
      PoolWithTag[1] = *(_DWORD *)(BugCheckParameter2 + 168);
      PoolWithTag[2] = *(_DWORD *)(BugCheckParameter2 + 168);
      PoolWithTag[7] = 6;
      PoolWithTag[10] = *(_DWORD *)(BugCheckParameter2 + 272);
      PoolWithTag[11] = 1;
      PoolWithTag[127] = HvpHeaderCheckSum(PoolWithTag);
      v11 = 128;
    }
    v12 = (unsigned __int16 *)&PoolWithTag[v11];
    memset(v12, 0, 0x28uLL);
    *(_DWORD *)v12 = 1162638920;
    *((_DWORD *)v12 + 1) = v8;
    if ( !v3 )
      *((_DWORD *)v12 + 1) = v8 - 512;
    v13 = Size;
    *((_DWORD *)v12 + 3) = *(_DWORD *)(BugCheckParameter2 + 168);
    *((_DWORD *)v12 + 2) = 0;
    v14 = *(_QWORD *)(BugCheckParameter2 + 64);
    LODWORD(Size) = v13;
    *((_DWORD *)v12 + 2) = (*(_BYTE *)(v14 + 144) & 1) != 0;
    *((_DWORD *)v12 + 4) = *(_DWORD *)(BugCheckParameter2 + 272);
    *((_DWORD *)v12 + 5) = v13;
    HvpGenerateLogMetadata(v4);
    v15 = v11 * 4 + 40 + 8 * v13;
    v27 = 0;
    while ( v15 < v8 && (unsigned __int8)HvpFindNextDirtyBlock(BugCheckParameter2, (__int64)&Size, (__int64)v23, 0) )
    {
      memmove((char *)PoolWithTag + v15, (const void *)v23[1], (unsigned int)Size);
      v15 += Size;
    }
    v16 = RtlNumberOfSetBits(v4);
    v17 = HvpCountSetRangesInVector(v4);
    CmpLogDirtyVectorUse(BugCheckParameter2, 2LL, v17, v16);
    if ( v15 < v8 )
      memset((char *)PoolWithTag + v15, 0, v8 - v15);
    SymCryptMarvin32(HvSymcryptSeed, v12 + 20, *((unsigned int *)v12 + 1) - 40LL, (_DWORD *)v12 + 6);
    SymCryptMarvin32(HvSymcryptSeed, v12, 0x20uLL, (_DWORD *)v12 + 8);
    *v25 = PoolWithTag;
    *v26 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
