/*
 * XREFs of PfpRpControlRequestCopy @ 0x14069EE74
 * Callers:
 *     PfpRpControlRequest @ 0x14069ED40 (PfpRpControlRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpRpControlRequestCopy(__m128i *Src, unsigned int a2, __m128i **a3, __m128i *a4, char a5)
{
  char *v7; // rcx
  __m128i v8; // xmm1
  unsigned __int16 epi16; // ax
  unsigned __int64 v10; // rcx
  size_t v11; // rsi
  __m128i *PoolWithTag; // rdi
  __m128i v15; // [rsp+38h] [rbp-70h]
  __m128i v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+58h] [rbp-50h]

  if ( a5 && a2 )
  {
    if ( ((unsigned __int8)Src & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = &Src->m128i_i8[a2];
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < (char *)Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v8 = *Src;
  v15 = *Src;
  v16 = *Src;
  v17 = Src[1].m128i_i64[0];
  if ( (unsigned __int16)_mm_cvtsi128_si32(*Src) != 3 )
    return (unsigned int)-1073741811;
  epi16 = _mm_extract_epi16(v8, 1);
  if ( epi16 >= 4u )
    return (unsigned int)-1073741811;
  if ( epi16 == 1 )
  {
    v16.m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
    if ( v16.m128i_i32[1] )
      return (unsigned int)-1073741811;
    v16.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    if ( v16.m128i_i32[2] )
      return (unsigned int)-1073741811;
    v16.m128i_i32[3] = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
    if ( __PAIR64__(v16.m128i_u32[3], 0) != (unsigned int)v17 )
      return (unsigned int)-1073741811;
  }
  v10 = 8 * ((unsigned int)v17 + (unsigned __int64)v16.m128i_u32[3])
      - ((8 * (v16.m128i_i8[4] + v16.m128i_i8[8]) + 23) & 7)
      + 8 * (v16.m128i_u32[1] + (unsigned __int64)v16.m128i_u32[2])
      + 31;
  if ( v10 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v11 = (unsigned int)v10;
  if ( (unsigned int)v10 != (unsigned __int64)a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (unsigned int)v10 <= 0x28uLL )
    {
      PoolWithTag = a4;
    }
    else
    {
      PoolWithTag = (__m128i *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x43526650u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
    }
    memmove(PoolWithTag, Src, v11);
    *PoolWithTag = v15;
    PoolWithTag[1].m128i_i64[0] = v17;
    *a3 = PoolWithTag;
    return 0;
  }
}
