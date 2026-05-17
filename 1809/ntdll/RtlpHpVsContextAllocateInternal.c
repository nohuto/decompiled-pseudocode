/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x18009F7FC
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x18001E414 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x18001E2D8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180078030 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010E170 (RtlpHpVsChunkAlignSplit.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // r13d
  unsigned int v7; // ebp
  unsigned __int64 *v9; // r8
  unsigned int v10; // r12d
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r9
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // eax
  int v27; // r9d
  int v28; // edx
  unsigned __int64 v29; // rcx
  char *v30; // rdi
  unsigned int v31; // r9d
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  int v35; // edx
  __int16 v36; // cx
  __int16 v37; // cx
  unsigned int Size; // [rsp+78h] [rbp+10h]
  unsigned int v40; // [rsp+80h] [rbp+18h]

  Size = a2;
  v6 = a3 + 2;
  v7 = a4;
  if ( (_DWORD)a2 == a3 )
    v6 = a3;
  v9 = (unsigned __int64 *)((unsigned int)(v6 + 15) >> 4);
  v40 = (_DWORD)v9 + (*(_DWORD *)(a1 + 176) & 1) + 1;
  v10 = v40 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = a1;
      RtlAcquireSRWLockExclusive(a1, a2, v9, a4);
    }
  }
  v11 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v12 = *v11;
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 && v12 )
      v12 ^= (unsigned __int64)v11;
    v13 = 0LL;
    while ( v12 )
    {
      v14 = *(_DWORD *)(v12 - 8) ^ RtlpHpHeapGlobals ^ (v12 - 8);
      if ( v10 < v14 )
      {
        v15 = *(_QWORD *)v12;
        v13 = (_QWORD *)v12;
      }
      else
      {
        if ( v10 <= v14 )
          goto LABEL_21;
        v15 = *(_QWORD *)(v12 + 8);
      }
      if ( (*(_BYTE *)(a1 + 24) & 1) != 0 && v15 )
        v12 ^= v15;
      else
        v12 = v15;
    }
    v12 = (unsigned __int64)v13;
LABEL_21:
    if ( v12 )
      break;
    if ( (v7 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    v17 = RtlpHpVsSubsegmentCreate(a1, v6, v7);
    if ( !v17 )
      return 0LL;
    *a6 = 1;
    if ( (v7 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = a1;
      RtlAcquireSRWLockExclusive(a1, v16, v18, v19);
    }
    v20 = (a1 + 32) ^ *(_QWORD *)(a1 + 40);
    if ( (v20 ^ *(_QWORD *)v20) != a1 + 32 )
      __fastfail(3u);
    v21 = v17 ^ (a1 + 32);
    *(_QWORD *)v17 = v21;
    *(_QWORD *)(v17 + 8) = v17 ^ v20;
    *(_QWORD *)v20 = v17 ^ v20;
    *(_QWORD *)(a1 + 40) = v21;
    if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v17 + 80) & 0xFFF) != 0 )
    {
      v22 = RtlpHpVsChunkAlignSplit(v21, v17, v17 + 48);
      if ( v22 )
        RtlpHpVsFreeChunkInsert(a1, v17, v22);
    }
    RtlpHpVsFreeChunkInsert(a1, v17, v17 + 48);
  }
  v23 = v12 - 8;
  v24 = v12 - 8;
  v25 = HIDWORD(*(_QWORD *)(v12 - 8));
  if ( (((unsigned int)v25 ^ HIDWORD(RtlpHpHeapGlobals) ^ ((v12 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v26 = *(_DWORD *)v12 ^ RtlpHpHeapGlobals ^ v23;
LABEL_41:
    v28 = (unsigned __int8)v26;
    goto LABEL_43;
  }
  if ( (unsigned __int16)v25 ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v23)) )
  {
    v24 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v23 ^ v23) >> 32);
    v27 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v24) ^ HIDWORD(v24);
    if ( (v27 & 0xFF0000) != 0 )
    {
LABEL_40:
      v26 = RtlpHpHeapGlobals ^ v24 ^ *(_DWORD *)(v24 + 8);
      goto LABEL_41;
    }
    if ( (_WORD)v27 )
    {
      v24 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v24 ^ v24) >> 32);
      goto LABEL_40;
    }
  }
  v28 = 0;
LABEL_43:
  v29 = (v24 - (unsigned int)(v28 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v29 + 32) ^ *(_WORD *)(v29 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_QWORD *)(a1 + 128), v29, v12 - 8, 0LL, 0LL);
    return 0LL;
  }
  v31 = v40;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v23 + 32) & 0xFFF) != 0 )
    v31 = v40 - 1;
  if ( !(unsigned int)RtlpHpVsChunkSplit(a1, v29, v12 - 8, v31, v7, a5) )
    return 0LL;
  v30 = (char *)(v23 + 16);
  v32 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2)) - 16;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 && ((v23 + 32) & 0xFFF) == 0 )
  {
    v30 = (char *)(v23 + 32);
    v32 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v23) ^ *(unsigned __int16 *)(v23 + 2)) - 32;
  }
  v33 = *(_DWORD *)v12;
  if ( Size >= (unsigned int)v32 )
  {
    *(_DWORD *)v12 = v33 & 0xFFFFFEFF;
  }
  else
  {
    v34 = (unsigned int)v32;
    v35 = v32 - Size;
    *(_DWORD *)v12 = v33 | 0x100;
    v30[v32 - 1] = 0;
    v36 = *(_WORD *)&v30[v32 - 2];
    if ( v35 == 1 )
      v37 = v36 | 0x8000;
    else
      v37 = (v35 ^ v36) & 0x1FFF ^ v36;
    *(_WORD *)&v30[v34 - 2] = v37;
  }
  if ( (v7 & 2) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    memset(v30, 0, Size);
  }
  return v30;
}
