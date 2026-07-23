/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x1401B6824
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1400BC230 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x1401B6DA8 (RtlpHpVsContextMultiAlloc.c)
 * Callees:
 *     RtlpHpVsChunkSplit @ 0x1400BC790 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextAddSubsegment @ 0x1401098E4 (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpVsSubsegmentCreate @ 0x140123E80 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        struct _KLOCK_QUEUE_HANDLE *a5,
        _DWORD *a6)
{
  int v6; // r13d
  _DWORD *v7; // rbp
  unsigned int v10; // r14d
  unsigned __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // edx
  _QWORD *v15; // r8
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // r10
  unsigned int v22; // eax
  int v23; // r9d
  int v24; // ecx
  unsigned __int64 v25; // r10
  char *v26; // rdi
  unsigned int v27; // r9d
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int16 v32; // cx
  __int16 v33; // cx
  unsigned int v36; // [rsp+80h] [rbp+18h]

  v6 = a3 + 2;
  v7 = a6;
  if ( a2 == a3 )
    v6 = a3;
  v36 = ((unsigned int)(v6 + 15) >> 4) + (*(_DWORD *)(a1 + 176) & 1) + 1;
  v10 = v36 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((KSPIN_LOCK *)a1, *(unsigned int *)(a1 + 8), (__int64)a5);
  }
  v11 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *v11;
    if ( (v12 & 1) != 0 && v13 )
      v13 ^= (unsigned __int64)v11;
    v14 = v12 & 1;
    v15 = 0LL;
    while ( v13 )
    {
      v16 = RtlpHpHeapGlobals ^ (v13 - 8) ^ *(_DWORD *)(v13 - 8);
      if ( v10 < v16 )
      {
        v17 = *(_QWORD *)v13;
        v15 = (_QWORD *)v13;
      }
      else
      {
        if ( v10 <= v16 )
          goto LABEL_21;
        v17 = *(_QWORD *)(v13 + 8);
      }
      if ( v14 && v17 )
        v13 ^= v17;
      else
        v13 = v17;
    }
    v13 = (unsigned __int64)v15;
LABEL_21:
    if ( v13 )
      break;
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), a5);
    *v7 = 0;
    v18 = RtlpHpVsSubsegmentCreate(a1, v6, a4);
    if ( !v18 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((KSPIN_LOCK *)a1, *(unsigned int *)(a1 + 8), (__int64)a5);
    RtlpHpVsContextAddSubsegment(a1, v18);
    v7 = a6;
  }
  v19 = v13 - 8;
  v20 = HIDWORD(*(_QWORD *)(v13 - 8));
  v21 = v13 - 8;
  if ( (((unsigned int)v20 ^ HIDWORD(RtlpHpHeapGlobals) ^ ((v13 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v22 = v19 ^ *(_DWORD *)v13;
LABEL_35:
    v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v22);
    goto LABEL_37;
  }
  if ( (unsigned __int16)v20 ^ (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v19)) )
  {
    v21 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v19 ^ *(_QWORD *)(v13 - 8)) >> 32);
    v23 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v21) ^ HIDWORD(*(_QWORD *)v21);
    if ( (v23 & 0xFF0000) != 0 )
    {
LABEL_34:
      v22 = v21 ^ *(_DWORD *)(v21 + 8);
      goto LABEL_35;
    }
    if ( (_WORD)v23 )
    {
      v21 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v21 ^ *(_QWORD *)v21) >> 32);
      goto LABEL_34;
    }
  }
  v24 = 0;
LABEL_37:
  v25 = (v21 - (unsigned int)(v24 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v25 + 32) ^ *(_WORD *)(v25 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_QWORD *)(a1 + 128), v25, v13 - 8, 0LL, 0LL);
    return 0LL;
  }
  v27 = v36;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v19 + 32) & 0xFFF) != 0 )
    v27 = v36 - 1;
  if ( !(unsigned int)RtlpHpVsChunkSplit(a1, v25, v13 - 8, v27, a4, (__int64)a5) )
    return 0LL;
  v26 = (char *)(v19 + 16);
  v28 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v19 + 32) & 0xFFF) == 0 )
  {
    v26 = (char *)(v19 + 32);
    v28 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 32;
  }
  v29 = *(_DWORD *)v13;
  if ( a2 >= (unsigned int)v28 )
  {
    *(_DWORD *)v13 = v29 & 0xFFFFFEFF;
  }
  else
  {
    v30 = (unsigned int)v28;
    *(_DWORD *)v13 = v29 | 0x100;
    v31 = v28 - a2;
    v26[v28 - 1] = 0;
    v32 = *(_WORD *)&v26[v28 - 2];
    if ( v31 == 1 )
      v33 = v32 | 0x8000;
    else
      v33 = (v32 ^ v31) & 0x1FFF ^ v32;
    *(_WORD *)&v26[v30 - 2] = v33;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), a5);
    *v7 = 0;
    memset(v26, 0, a2);
  }
  return v26;
}
