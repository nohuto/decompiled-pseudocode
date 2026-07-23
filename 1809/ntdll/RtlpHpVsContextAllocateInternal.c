/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x18009F81C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001E414 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180078040 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010E170 (RtlpHpVsChunkAlignSplit.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        __int64 SRWLock,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // r13d
  unsigned int v9; // r12d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  _QWORD *v12; // r9
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // eax
  int v23; // r9d
  int v24; // edx
  unsigned __int64 v25; // rcx
  char *v26; // rdi
  unsigned int v27; // r9d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r8
  int v31; // edx
  __int16 v32; // cx
  __int16 v33; // cx
  unsigned int v36; // [rsp+80h] [rbp+18h]

  v6 = a3 + 2;
  if ( a2 == a3 )
    v6 = a3;
  v36 = ((unsigned int)(v6 + 15) >> 4) + (*(_DWORD *)(SRWLock + 176) & 1) + 1;
  v9 = v36 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
  }
  v10 = SRWLock + 16;
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    if ( (*(_BYTE *)(SRWLock + 24) & 1) != 0 && v11 )
      v11 ^= v10;
    v12 = 0LL;
    while ( v11 )
    {
      v13 = *(_DWORD *)(v11 - 8) ^ RtlpHpHeapGlobals ^ (v11 - 8);
      if ( v9 < v13 )
      {
        v14 = *(_QWORD *)v11;
        v12 = (_QWORD *)v11;
      }
      else
      {
        if ( v9 <= v13 )
          goto LABEL_21;
        v14 = *(_QWORD *)(v11 + 8);
      }
      if ( (*(_BYTE *)(SRWLock + 24) & 1) != 0 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
    v11 = (unsigned __int64)v12;
LABEL_21:
    if ( v11 )
      break;
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    v15 = RtlpHpVsSubsegmentCreate(SRWLock, v6, a4);
    if ( !v15 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
    v16 = (SRWLock + 32) ^ *(_QWORD *)(SRWLock + 40);
    if ( (v16 ^ *(_QWORD *)v16) != SRWLock + 32 )
      __fastfail(3u);
    v17 = v15 ^ (SRWLock + 32);
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v15 ^ v16;
    *(_QWORD *)v16 = v15 ^ v16;
    *(_QWORD *)(SRWLock + 40) = v17;
    if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v15 + 80) & 0xFFF) != 0 )
    {
      v18 = RtlpHpVsChunkAlignSplit(v17, v15, v15 + 48);
      if ( v18 )
        RtlpHpVsFreeChunkInsert(SRWLock, v15, v18);
    }
    RtlpHpVsFreeChunkInsert(SRWLock, v15, v15 + 48);
  }
  v19 = v11 - 8;
  v20 = v11 - 8;
  v21 = HIDWORD(*(_QWORD *)(v11 - 8));
  if ( (((unsigned int)v21 ^ HIDWORD(RtlpHpHeapGlobals) ^ ((v11 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v22 = *(_DWORD *)v11 ^ RtlpHpHeapGlobals ^ v19;
LABEL_41:
    v24 = (unsigned __int8)v22;
    goto LABEL_43;
  }
  if ( (unsigned __int16)v21 ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v19)) )
  {
    v20 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v19 ^ v19) >> 32);
    v23 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v20) ^ HIDWORD(v20);
    if ( (v23 & 0xFF0000) != 0 )
    {
LABEL_40:
      v22 = RtlpHpHeapGlobals ^ v20 ^ *(_DWORD *)(v20 + 8);
      goto LABEL_41;
    }
    if ( (_WORD)v23 )
    {
      v20 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v20 ^ v20) >> 32);
      goto LABEL_40;
    }
  }
  v24 = 0;
LABEL_43:
  v25 = (v20 - (unsigned int)(v24 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v25 + 32) ^ *(_WORD *)(v25 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, SRWLock ^ *(_QWORD *)(SRWLock + 128), v25, v11 - 8, 0LL, 0LL);
    return 0LL;
  }
  v27 = v36;
  if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v19 + 32) & 0xFFF) != 0 )
    v27 = v36 - 1;
  if ( !(unsigned int)RtlpHpVsChunkSplit(SRWLock, v25, v11 - 8, v27, a4, a5) )
    return 0LL;
  v26 = (char *)(v19 + 16);
  v28 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 16;
  if ( (*(_BYTE *)(SRWLock + 176) & 1) != 0 && ((v19 + 32) & 0xFFF) == 0 )
  {
    v26 = (char *)(v19 + 32);
    v28 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 32;
  }
  v29 = *(_DWORD *)v11;
  if ( a2 >= (unsigned int)v28 )
  {
    *(_DWORD *)v11 = v29 & 0xFFFFFEFF;
  }
  else
  {
    v30 = (unsigned int)v28;
    v31 = v28 - a2;
    *(_DWORD *)v11 = v29 | 0x100;
    v26[v28 - 1] = 0;
    v32 = *(_WORD *)&v26[v28 - 2];
    if ( v31 == 1 )
      v33 = v32 | 0x8000;
    else
      v33 = (v31 ^ v32) & 0x1FFF ^ v32;
    *(_WORD *)&v26[v30 - 2] = v33;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    memset(v26, 0, a2);
  }
  return v26;
}
