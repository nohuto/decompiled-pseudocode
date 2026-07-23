/*
 * XREFs of RtlpHpVsContextGrowInPlace @ 0x18009C730
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180045D7C (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180039740 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsCalculateChunkRequiredSize @ 0x18009C714 (RtlpHpVsCalculateChunkRequiredSize.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x18010C10C (RtlpHpVsChunkSetUnusedBytes.c)
 */

__int64 __fastcall RtlpHpVsContextGrowInPlace(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v5; // rsi
  __int64 v7; // rdi
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r9
  unsigned __int16 v13; // r10
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  char v18; // dl
  int v19; // r15d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // edx
  unsigned int *v24; // r8
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+84h] [rbp+Ch]

  v5 = a3 - 16;
  v7 = a3;
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    return 0LL;
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ *(_DWORD *)&SRWLock[16].0, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  if ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v5) ^ HIDWORD(v5)) & 0xFF0000) == 0 )
  {
    RtlpLogHeapFailure(8, (unsigned int)SRWLock ^ *(_DWORD *)&SRWLock[16].0, a3, a3 - 16, 0LL, 0LL);
    return 0LL;
  }
  v10 = *(_DWORD *)(a4 + 24);
  v29 = *(_DWORD *)(a4 + 32);
  v14 = RtlpHpVsCalculateChunkRequiredSize(v10, &v29);
  v15 = v12 ^ *(_QWORD *)v5 ^ v5;
  v16 = ((unsigned int)v12 ^ *(_DWORD *)v5 ^ (unsigned int)v5) >> 16;
  if ( v16 <= v14 && (v17 = v14 - v16) != 0 )
  {
    v18 = a5;
    v19 = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      v26 = 0LL;
      v28 = 0LL;
      SRWLocka = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
      v13 = *(_WORD *)(a2 + 32);
      v12 = RtlpHpHeapGlobals;
      v18 = a5;
    }
    v20 = v5 + 16 * ((unsigned __int64)(unsigned int)v15 >> 16);
    if ( v20 >= a2 + 16 * ((unsigned __int64)v13 + 3)
      || (v21 = v20 ^ v12 ^ *(_QWORD *)v20, (v21 & 0xFF000000000000LL) != 0)
      || WORD1(v21) < v17
      || (v22 = RtlpHpVsChunkSplit((__int64)SRWLock, a2, v20, v17, v18, (__int64)&v26)) == 0 )
    {
      v7 = 0LL;
    }
    else
    {
      *(_WORD *)(v5 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ (((v22 << 16) + (v15 & 0xFFFF0000)) >> 16);
      v23 = WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ *(_DWORD *)v5) >> 16);
      v24 = (unsigned int *)(v5
                           + 16
                           * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ (unsigned __int64)*(unsigned int *)v5) >> 16)));
      if ( (unsigned __int64)v24 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        v30 = v23 | v30 & 0xFFFF0000;
        *((_WORD *)v24 + 2) = WORD2(v24) ^ WORD2(RtlpHpHeapGlobals) ^ v30;
      }
      if ( *(_QWORD *)(a4 + 24) >= (unsigned __int64)(16 * v23 - 16) )
      {
        *(_DWORD *)(v5 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v5 + 8) |= 0x100u;
        RtlpHpVsChunkSetUnusedBytes(v7);
      }
    }
    if ( !v19 )
      RtlReleaseSRWLockExclusive(SRWLocka);
  }
  else if ( 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16 == v11 )
  {
    *(_DWORD *)(v5 + 8) &= ~0x100u;
  }
  else
  {
    RtlpHpVsChunkSetUnusedBytes(v7);
  }
  return v7;
}
