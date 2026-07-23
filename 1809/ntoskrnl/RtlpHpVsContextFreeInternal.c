/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x1401B6B84
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x1401B6D18 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpVsChunkFree @ 0x1400BD2D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140154A00 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1401B646C (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1401B64D4 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct _KLOCK_QUEUE_HANDLE *a5)
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
    LODWORD(a3) = v14;
    v15 = 18;
LABEL_12:
    RtlpLogHeapFailure(v15, *(_QWORD *)(a1 + 128), a3, 0, 0LL, 0LL);
    return v8;
  }
  if ( ((a3 ^ RtlpHpHeapGlobals ^ v5) & 0xFF000000000000LL) == 0 )
  {
    v15 = 8;
    goto LABEL_12;
  }
  v16 = RtlpHpVsChunkFree(a1, v14, a3, a4, (__int64)a5);
  if ( v16 )
  {
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), a5);
    RtlpHpVsSubsegmentFree(a1, v16, a4);
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((KSPIN_LOCK *)a1, *(unsigned int *)(a1 + 8), (__int64)a5);
  }
  return 1;
}
