/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x180038840
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x1800487B0 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180039740 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180068684 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18006FA14 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsCalculateChunkRequiredSize @ 0x18009C714 (RtlpHpVsCalculateChunkRequiredSize.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010BD38 (RtlpHpVsChunkAlignSplit.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        PRTL_SRWLOCK SRWLock,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // r14
  int v9; // r11d
  _DWORD *v10; // r13
  unsigned int v11; // esi
  unsigned __int64 v12; // r15
  unsigned __int64 Value; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r8
  int v16; // edx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  char *v29; // rsi
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  int v33; // r9d
  __int16 v34; // ax
  __int16 v35; // cx
  int v38; // [rsp+80h] [rbp+18h] BYREF

  v38 = a3;
  v6 = a5;
  v9 = RtlpHpVsCalculateChunkRequiredSize(a2, &v38);
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    ++v9;
  v10 = a6;
  v11 = v9 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
  }
  v12 = (unsigned __int64)&SRWLock[2];
  LODWORD(a6) = v38;
  while ( 1 )
  {
    Value = SRWLock[3].Value;
    v14 = *(_QWORD *)v12;
    if ( (Value & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v12;
      else
        v14 = 0LL;
    }
    v15 = 0LL;
    v16 = Value & 1;
    while ( v14 )
    {
      v17 = RtlpHpHeapGlobals ^ (v14 - 8) ^ *(_DWORD *)(v14 - 8);
      if ( v11 < v17 )
      {
        v18 = *(_QWORD *)v14;
        v15 = (_QWORD *)v14;
      }
      else
      {
        if ( v11 <= v17 )
          goto LABEL_22;
        v18 = *(_QWORD *)(v14 + 8);
      }
      if ( v16 && v18 )
        v14 ^= v18;
      else
        v14 = v18;
    }
    v14 = (unsigned __int64)v15;
LABEL_22:
    if ( v14 )
      break;
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v6 + 8));
      *(_QWORD *)(v6 + 8) = 0LL;
    }
    v19 = (unsigned int)a6;
    *v10 = 0;
    v20 = RtlpHpVsSubsegmentCreate(SRWLock, v19, a4);
    if ( !v20 )
      return 0LL;
    *v10 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    v21 = (unsigned __int64)&SRWLock[4] ^ SRWLock[5].Value;
    if ( (PRTL_SRWLOCK)(v21 ^ *(_QWORD *)v21) != &SRWLock[4] )
      __fastfail(3u);
    v22 = v20 ^ (unsigned __int64)&SRWLock[4];
    *(_QWORD *)v20 = v22;
    *(_QWORD *)(v20 + 8) = v20 ^ v21;
    *(_QWORD *)v21 = v20 ^ v21;
    SRWLock[5].Value = v22;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v20 + 80) & 0xFFF) != 0 )
    {
      v23 = RtlpHpVsChunkAlignSplit(v22, v20, v20 + 48);
      if ( v23 )
        RtlpHpVsFreeChunkInsert(SRWLock, v20, v23);
    }
    RtlpHpVsFreeChunkInsert(SRWLock, v20, v20 + 48);
  }
  v24 = *(_QWORD *)(v14 - 8);
  v25 = v14 - 8;
  if ( ((HIDWORD(v24) ^ HIDWORD(RtlpHpHeapGlobals) ^ ((v14 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v26 = (unsigned __int8)(*(_BYTE *)v14 ^ RtlpHpHeapGlobals ^ (v14 - 8));
    goto LABEL_43;
  }
  if ( !(WORD2(v24) ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ ((v14 - 8) >> 32))) )
    goto LABEL_42;
  v25 = v14 - 8 - 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v24 ^ (v14 - 8)) >> 32);
  v27 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v25) ^ HIDWORD(*(_QWORD *)v25);
  if ( (v27 & 0xFF0000) != 0 )
  {
    v26 = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ *(_BYTE *)(v25 + 8));
    goto LABEL_43;
  }
  if ( (_WORD)v27 )
  {
    v25 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ (unsigned __int64)v25 ^ *(_QWORD *)v25) >> 32);
    v26 = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ *(_BYTE *)(v25 + 8));
  }
  else
  {
LABEL_42:
    v26 = 0;
  }
LABEL_43:
  v28 = (v25 - (unsigned int)(v26 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v28 + 32) ^ *(_WORD *)(v28 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ SRWLock[16].Value, v28, v14 - 8, 0LL, 0LL);
    return 0LL;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit(SRWLock, a4, v6) )
    return 0LL;
  v29 = (char *)(v14 + 8);
  v30 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 16;
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v14 + 24) & 0xFFF) == 0 )
  {
    v29 = (char *)(v14 + 24);
    v30 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)(v14 - 8) >> 16) ^ *(unsigned __int16 *)(v14 - 6)) - 32;
  }
  v31 = *(_DWORD *)v14;
  if ( a2 >= (unsigned int)v30 )
  {
    *(_DWORD *)v14 = v31 & 0xFFFFFEFF;
  }
  else
  {
    v32 = (unsigned int)v30;
    v33 = v30 - a2;
    *(_DWORD *)v14 = v31 | 0x100;
    v29[v30 - 1] = 0;
    v34 = *(_WORD *)&v29[v30 - 2];
    v35 = v34 ^ ((v30 - a2) ^ v34) & 0x1FFF;
    if ( v33 == 1 )
      v35 = v34 | 0x8000;
    *(_WORD *)&v29[v32 - 2] = v35;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v6 + 8));
      *(_QWORD *)(v6 + 8) = 0LL;
    }
    *v10 = 0;
    memset(v29, 0, a2);
  }
  return v29;
}
