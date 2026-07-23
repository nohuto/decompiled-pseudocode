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

__int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned int a2, char *a3, __int64 a4)
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
  char *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  char v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  PVOID BaseAddress; // [rsp+20h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-40h]
  unsigned __int64 v32; // [rsp+38h] [rbp-38h]
  unsigned __int64 v33; // [rsp+40h] [rbp-30h]
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF
  __int128 v35; // [rsp+60h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v7 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v8 = (v4 + 4095) >> 12;
  v33 = v8 << 12;
  if ( v8 << 12 < v4 )
    return 0LL;
  if ( v8 > v7
    || (v10 = *(_QWORD *)a1, BYTE1(*(_QWORD *)a1) >= 2u) && (v10 & 6) == 0
    || (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove((char *)a1, a3, a4, a2);
    return 0LL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  Metadata = RtlpHpLargeAllocGetMetadata(a1, (unsigned __int64)a3);
  v32 = Metadata;
  if ( Metadata )
  {
    v14 = *(_QWORD *)(Metadata + 32) & 0xFFFLL;
    v15 = ((*(_QWORD *)(Metadata + 32) >> 12) + ((*(_QWORD *)(Metadata + 32) >> 1) & 1LL)) << 12;
    v31 = (1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
        - (((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F)) - 1) & ((1LL << (((unsigned __int8)*(_QWORD *)(Metadata + 32) >> 2) & 0x3F))
                                                                                       + v15
                                                                                       - 1))
        + v15
        - 1;
    *(_QWORD *)(Metadata + 32) = (v8 << 12) | v14;
    *(_WORD *)(Metadata + 24) = ((_WORD)v8 << 12) - *(_WORD *)(v13 + 24);
    if ( !v11 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      v13 = a4;
    }
    if ( *(_DWORD *)(v13 + 16) )
    {
      v16 = (__int64)&a3[*(_QWORD *)v13 + 16];
      if ( (a2 & 0x10000000) == 0 )
        v16 = (__int64)&a3[*(_QWORD *)v13];
      v17 = (unsigned __int8 *)((v16 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v18 = (__int64)&a3[*(_QWORD *)(v13 + 24) + 16];
      if ( (a2 & 0x10000000) == 0 )
        v18 = (__int64)&a3[*(_QWORD *)(v13 + 24)];
      memmove((void *)((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v17, 16 * (v17[3] + 1LL));
    }
    if ( v8 < v7 )
    {
      v19 = *(_OWORD *)a1;
      BaseAddress = a3;
      BaseAddress = &a3[4096 * (v8 + ((*(_DWORD *)(v32 + 32) >> 1) & 1))];
      RegionSize = (ULONG_PTR)&a3[v31 - (_QWORD)BaseAddress];
      v34 = v19;
      RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, &v34);
      if ( RtlGetCurrentServiceSessionId() )
        v20 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v20 = 2147353480LL;
      if ( *(_BYTE *)v20 )
        RtlpHeapLogRangeRelease(a1, (__int64)BaseAddress, RegionSize);
      v21 = *(_OWORD *)a1;
      v31 -= RegionSize;
      v22 = (char *)((_BYTE *)BaseAddress - &a3[v33]);
      BaseAddress = &a3[v33];
      RegionSize = (ULONG_PTR)v22;
      v35 = v21;
      RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x4000, &v35);
      _BitScanForward64(&v23, v31);
      v24 = v32;
      v25 = v23;
      v33 = (unsigned int)v23;
      v26 = *(_QWORD *)(v32 + 32);
      if ( (unsigned int)v23 != (unsigned __int64)((unsigned __int8)v26 >> 2) )
      {
        if ( !v11 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          v25 = v33;
          v24 = v32;
          v26 = *(_QWORD *)(v32 + 32);
        }
        *(_QWORD *)(v24 + 32) = v26 ^ (unsigned __int8)(v26 ^ (4 * v25)) & 0xFC;
        if ( !v11 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
      }
      v27 = v8 - v7;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v27);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v27);
    }
    return (__int64)a3;
  }
  else
  {
    if ( !v11 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    return -1LL;
  }
}
