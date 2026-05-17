/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x18009FBDC
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x18009FD74 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x18001F6B0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x180065640 (RtlpHpVsSubsegmentFree.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 v5; // r10
  unsigned int v8; // ebx
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9

  v5 = *(_QWORD *)a3;
  v8 = 0;
  v9 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(a3) ^ HIDWORD(*(_QWORD *)a3);
  v10 = a3;
  if ( (v9 & 0xFF0000) != 0 )
  {
    v11 = a3 ^ *(_DWORD *)(a3 + 8);
LABEL_8:
    v13 = (unsigned __int8)(RtlpHpHeapGlobals ^ v11);
    goto LABEL_10;
  }
  if ( (_WORD)v9 )
  {
    v10 = a3 - 16LL * (unsigned __int16)((a3 ^ RtlpHpHeapGlobals ^ v5) >> 32);
    v12 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v10) ^ HIDWORD(v10);
    if ( (v12 & 0xFF0000) != 0 )
    {
LABEL_7:
      v11 = v10 ^ *(_DWORD *)(v10 + 8);
      goto LABEL_8;
    }
    if ( (_WORD)v12 )
    {
      v10 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v10 ^ (unsigned __int64)v10) >> 32);
      goto LABEL_7;
    }
  }
  v13 = 0;
LABEL_10:
  v14 = (v10 - (unsigned int)(v13 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v14 + 32) ^ *(_WORD *)(v14 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    a3 = v14;
    v15 = 18;
LABEL_12:
    RtlpLogHeapFailure(v15, *(_QWORD *)(a1 + 128), a3, 0LL, 0LL, 0LL);
    return v8;
  }
  if ( ((a3 ^ RtlpHpHeapGlobals ^ v5) & 0xFF000000000000LL) == 0 )
  {
    v15 = 8;
    goto LABEL_12;
  }
  v16 = RtlpHpVsChunkFree(a1, v14, a3, a4, a5);
  if ( v16 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentFree(a1, v16, a4);
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = a1;
      RtlAcquireSRWLockExclusive(a1, v17, v18, v19);
    }
  }
  return 1;
}
