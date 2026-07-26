/*
 * XREFs of ndisXlateWakeUpPatternListToWolPatternList @ 0x1C00E9AE4
 * Callers:
 *     ndisOidPostWolPatternList @ 0x1C004B020 (ndisOidPostWolPatternList.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisGetWakeUpPatternSize @ 0x1C004A348 (ndisGetWakeUpPatternSize.c)
 */

void __fastcall ndisXlateWakeUpPatternListToWolPatternList(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r12d
  unsigned int v4; // r9d
  SIZE_T v5; // rbp
  char *v6; // r14
  char *v7; // r10
  __int64 v8; // xmm0_8
  unsigned int WakeUpPatternSize; // eax
  int v10; // r11d
  __int64 v11; // r10
  int v12; // eax
  size_t v13; // r8
  __m128i *PoolWithTag; // rax
  __m128i *v15; // r15
  char *v16; // r13
  __m128i *v17; // rsi
  __m128i v18; // xmm1
  int v19; // ebx
  unsigned int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // rax
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int64 v25; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v25 = v1;
  v4 = 0;
  v5 = *(unsigned int *)(v1 + 52);
  if ( (unsigned int)v5 > *(_DWORD *)(v1 + 48) )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x74u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    return;
  }
  if ( !(_DWORD)v5 )
    return;
  v6 = *(char **)(v1 + 40);
  *(_QWORD *)(v1 + 52) = 0LL;
  v7 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    do
    {
      v8 = *((_QWORD *)v7 + 2);
      v23 = *(__m128i *)v7;
      v24 = v8;
      WakeUpPatternSize = ndisGetWakeUpPatternSize((unsigned int *)&v23);
      v7 = (char *)(WakeUpPatternSize + v11);
    }
    while ( v10 - WakeUpPatternSize >= 0x18 );
  }
  *(_DWORD *)(a1 + 40) = 0;
  v12 = 0;
  if ( *(_DWORD *)(v1 + 48) < v4 )
  {
    v12 = -1073676268;
    *(_DWORD *)(v1 + 56) = v4;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( v12 )
  {
    v13 = v5;
LABEL_11:
    memset(v6, 0, v13);
    return;
  }
  PoolWithTag = (__m128i *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7877444Eu);
  v15 = PoolWithTag;
  v13 = v5;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_11;
  }
  memmove(PoolWithTag, v6, v5);
  memset(v6, 0, *(unsigned int *)(v1 + 48));
  v16 = v6;
  if ( (unsigned int)v5 >= 0x18 )
  {
    v17 = v15;
    do
    {
      v18 = *v17;
      v24 = v17[1].m128i_i64[0];
      v19 = v24;
      v20 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
      *((_DWORD *)v16 + 37) = v18.m128i_i32[1];
      *((_DWORD *)v16 + 40) = 196;
      *(_DWORD *)v16 = 12845440;
      *((_DWORD *)v16 + 2) = _mm_cvtsi128_si32(v18);
      *((_DWORD *)v16 + 42) = v20 + 196;
      v23 = v18;
      *((_DWORD *)v16 + 3) = 1;
      *((_DWORD *)v16 + 41) = v20;
      *((_DWORD *)v16 + 43) = v19;
      memmove(v16 + 196, &v17[1].m128i_u64[1], v20);
      memmove(
        &v16[*((unsigned int *)v16 + 42)],
        &v17->m128i_i8[HIDWORD(_mm_srli_si128(v18, 8).m128i_u64[0])],
        *((unsigned int *)v16 + 43));
      v2 += (v20 + v19 + 203) & 0xFFFFFFF8;
      v21 = ndisGetWakeUpPatternSize((unsigned int *)&v23);
      LODWORD(v5) = v5 - v21;
      v17 = (__m128i *)((char *)v17 + v21);
      v22 = v2;
      if ( (unsigned int)v5 < 0x18 )
        v22 = 0LL;
      *((_DWORD *)v16 + 38) = v22;
      v16 = &v6[v22];
    }
    while ( (unsigned int)v5 >= 0x18 );
    v1 = v25;
  }
  *(_DWORD *)(v1 + 52) = v2;
  *(_DWORD *)(v1 + 56) = v2;
  ExFreePoolWithTag(v15, 0);
}
