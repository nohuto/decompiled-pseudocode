/*
 * XREFs of RtlpHpLargeReAlloc @ 0x18010D358
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpReallocMove @ 0x18010CA98 (RtlpHpReallocMove.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v10; // rcx
  int v11; // r13d
  unsigned __int64 Metadata; // rax
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 *v17; // rdx
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  char v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  __int64 v30; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-40h]
  unsigned __int64 v33; // [rsp+38h] [rbp-38h]
  unsigned __int64 v34; // [rsp+40h] [rbp-30h]
  __int128 v35; // [rsp+50h] [rbp-20h] BYREF
  __int128 v36; // [rsp+60h] [rbp-10h] BYREF
  int v37; // [rsp+B8h] [rbp+48h]

  v37 = a2;
  v4 = *(_QWORD *)(a4 + 32);
  v7 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v8 = (v4 + 4095) >> 12;
  v34 = v8 << 12;
  if ( v8 << 12 < v4 )
    return 0LL;
  if ( v8 > v7
    || (v10 = *(_QWORD *)a1, BYTE1(*(_QWORD *)a1) >= 2u) && (v10 & 6) == 0
    || (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove((_DWORD *)a1, a3, a4, a2);
    return 0LL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64, a2, (unsigned __int64 *)a3, a4);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, (unsigned __int64)a3);
  v33 = Metadata;
  if ( Metadata )
  {
    v14 = *(_QWORD *)(Metadata + 32) & 0xFFFLL;
    v15 = ((*(_QWORD *)(Metadata + 32) >> 12) + ((*(_QWORD *)(Metadata + 32) >> 1) & 1LL)) << 12;
    v32 = (1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
        - (((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F)) - 1) & ((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
                                                                                       + v15
                                                                                       - 1))
        + v15
        - 1;
    *(_QWORD *)(Metadata + 32) = (v8 << 12) | v14;
    *(_WORD *)(Metadata + 24) = ((_WORD)v8 << 12) - *(_WORD *)(v13 + 24);
    if ( !v11 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      v13 = a4;
    }
    if ( *(_DWORD *)(v13 + 16) )
    {
      v16 = (__int64)a3 + *(_QWORD *)v13 + 16;
      if ( (v37 & 0x10000000) == 0 )
        v16 = (__int64)a3 + *(_QWORD *)v13;
      v17 = (unsigned __int8 *)((v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = (__int64)a3 + *(_QWORD *)(v13 + 24) + 16;
      if ( (v37 & 0x10000000) == 0 )
        v18 = (__int64)a3 + *(_QWORD *)(v13 + 24);
      memmove((void *)((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v17, 16 * (v17[3] + 1LL));
    }
    if ( v8 < v7 )
    {
      v19 = *(_OWORD *)a1;
      v30 = (__int64)a3;
      v30 = (__int64)a3 + 4096 * (v8 + ((*(_DWORD *)(v33 + 32) >> 1) & 1));
      v31 = (__int64)a3 + v32 - v30;
      v35 = v19;
      RtlpHpFreeVA((unsigned __int64 *)&v30, (unsigned __int64 *)&v31, 0x8000, &v35);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v20 = 2147353480LL;
      if ( *(_BYTE *)v20 )
        RtlpHeapLogRangeRelease(a1, v30, v31);
      v21 = *(_OWORD *)a1;
      v32 -= v31;
      v22 = v30 - ((_QWORD)a3 + v34);
      v30 = (__int64)a3 + v34;
      v31 = v22;
      v36 = v21;
      RtlpHpFreeVA((unsigned __int64 *)&v30, (unsigned __int64 *)&v31, 0x4000, &v36);
      _BitScanForward64((unsigned __int64 *)&v24, v32);
      v25 = v33;
      v26 = v24;
      v34 = (unsigned int)v24;
      v27 = *(_QWORD *)(v33 + 32);
      if ( (unsigned int)v24 != (unsigned __int64)((unsigned __int8)v27 >> 2) )
      {
        if ( !v11 )
        {
          RtlAcquireSRWLockExclusive(a1 + 64, v27, (unsigned __int64 *)(unsigned int)v24, v23);
          v26 = v34;
          v25 = v33;
          v27 = *(_QWORD *)(v33 + 32);
        }
        *(_QWORD *)(v25 + 32) = v27 ^ (unsigned __int8)(v27 ^ (4 * v26)) & 0xFC;
        if ( !v11 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      }
      v28 = v8 - v7;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v28);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v28);
    }
    return (__int64)a3;
  }
  else
  {
    if ( !v11 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    return -1LL;
  }
}
