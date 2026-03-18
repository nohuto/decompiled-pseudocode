/*
 * XREFs of MiExpandSystemCache @ 0x14012BF4C
 * Callers:
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 * Callees:
 *     InsertTailListPte @ 0x140076480 (InsertTailListPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x1400E648C (MiObtainSystemVa.c)
 *     MiSetSystemCacheReverseMap @ 0x14012C144 (MiSetSystemCacheReverseMap.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 *PoolWithTag; // rsi
  unsigned __int64 v5; // r9
  __m128i v6; // xmm1
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned __int64)qword_140465908 <= 0x4000000 )
    return 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6353694Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v6 = _mm_cvtsi32_si128(*(__int16 *)a1);
  v7 = PoolWithTag + 9;
  v8 = 4LL;
  v9 = _mm_slli_epi64(
         _mm_and_si128(
           _mm_unpacklo_epi32(
             _mm_unpacklo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi16(v6, v6), 0), (__m128i)0LL),
             (__m128i)0LL),
           (__m128i)_xmm),
         6u);
  do
  {
    v10.m128i_i64[0] = *(v7 - 5);
    v10.m128i_i64[1] = *v7;
    *(v7 - 7) = 0LL;
    v11 = _mm_or_si128(_mm_and_si128(v10, (__m128i)_xmm_ffffffffffff003fffffffffffff003f), v9);
    *(v7 - 5) = v11.m128i_i64[0];
    *v7 = _mm_srli_si128(v11, 8).m128i_u64[0];
    *(v7 - 2) = v5;
    v7 += 10;
    --v8;
  }
  while ( v8 );
  v12 = 8LL;
  v13 = MiObtainSystemVa(1u, 8LL, 0LL);
  v14 = v13;
  if ( !v13 )
  {
LABEL_12:
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(v15, v15 + 4088, 0, 8, 0) )
  {
    *a2 = v14;
    goto LABEL_12;
  }
  v19 = MI_READ_PTE_LOCK_FREE((((v15 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
  *(_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL)
           - 0x57FFFFFFFD9LL) = 0;
  MiSetSystemCacheReverseMap(v14, PoolWithTag);
  do
  {
    InsertTailListPte(a1 + 215, v15, v16, v17);
    v15 += 512LL;
    --v12;
  }
  while ( v12 );
  return v15;
}
