/*
 * XREFs of ExpInsertLowLevelTableIntoFreeList @ 0x140697DF8
 * Callers:
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpInsertLowLevelTableIntoFreeList(volatile signed __int32 *a1, _QWORD *a2, ULONG_PTR a3, char a4)
{
  __m128i v6; // xmm3
  _QWORD *v7; // rsi
  __int64 result; // rax
  unsigned int v9; // r8d
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r11
  __m128i v12; // xmm4
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm2
  _QWORD *v17; // rdi

  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a4 )
  {
    v9 = 1;
    v10 = a2 + 3;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v12 = _mm_cvtsi32_si128(4u);
    do
    {
      v13 = _mm_loadl_epi64((const __m128i *)&_xmm);
      v14 = _mm_loadl_epi64(&_xmm);
      v15 = _mm_cvtsi32_si128(v9);
      v9 += 2;
      *(v10 - 1) = 0LL;
      v10[1] = v11;
      v16 = _mm_add_epi64(
              _mm_sll_epi64(
                _mm_unpacklo_epi32(_mm_add_epi32(_mm_add_epi32(_mm_shuffle_epi32(v15, 0), v13), v14), (__m128i)0LL),
                v12),
              v6);
      *v10 = v16.m128i_i64[0];
      v10 += 4;
      *(v10 - 2) = _mm_srli_si128(v16, 8).m128i_u64[0];
    }
    while ( v9 < 0xFF );
    v7 = a2 + 510;
    a2[510] = 0LL;
    a2[511] = 0LL;
  }
  else
  {
    v7 = a2 + 510;
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0x400u);
  if ( a4 )
  {
    ExAcquirePushLockExclusiveEx(a3, 0LL);
    v17 = a2 + 2;
    if ( *(_QWORD *)(a3 + 8) )
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL) = v17;
    else
      *(_QWORD *)(a3 + 8) = v17;
    *(_QWORD *)(a3 + 16) = v7;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a3);
    return KeAbPostRelease(a3);
  }
  return result;
}
