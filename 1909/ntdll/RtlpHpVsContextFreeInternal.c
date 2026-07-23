/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x18010C14C
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x18010C2F4 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800514A8 (RtlpHpVsSubsegmentFree.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkFree @ 0x18010C024 (RtlpHpVsChunkFree.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(
        __int64 SRWLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r10
  int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // r10
  int v15; // ecx
  unsigned __int64 v16; // r14

  v7 = HIDWORD(*(_QWORD *)a3);
  v8 = v7 ^ HIDWORD(a3) ^ HIDWORD(RtlpHpHeapGlobals);
  v9 = 0;
  v10 = a3;
  if ( (v8 & 0xFF0000) != 0 )
  {
    v11 = a3 ^ *(_DWORD *)(a3 + 8);
LABEL_8:
    v13 = (unsigned __int8)(RtlpHpHeapGlobals ^ v11);
    goto LABEL_10;
  }
  if ( (_WORD)v8 )
  {
    v10 = a3 - 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ v7 ^ WORD2(a3));
    v12 = HIDWORD(v10) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v10);
    if ( (v12 & 0xFF0000) != 0 )
    {
LABEL_7:
      v11 = v10 ^ *(_DWORD *)(v10 + 8);
      goto LABEL_8;
    }
    if ( (_WORD)v12 )
    {
      v10 -= 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v10) ^ HIDWORD(*(_QWORD *)v10));
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
    RtlpLogHeapFailure(v15, SRWLock ^ *(_QWORD *)(SRWLock + 128), a3, 0LL, 0LL, 0LL);
    return v9;
  }
  if ( (((unsigned int)v7 ^ HIDWORD(a3) ^ HIDWORD(RtlpHpHeapGlobals)) & 0xFF0000) == 0 )
  {
    v15 = 8;
    goto LABEL_12;
  }
  v16 = RtlpHpVsChunkFree((PRTL_SRWLOCK)SRWLock, v14, a3, a4, a5);
  if ( v16 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentFree(SRWLock, v16, a4);
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
  }
  return 1;
}
