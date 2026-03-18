/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C00BDB40
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BD808 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     ACPIAssert @ 0x1C0021158 (ACPIAssert.c)
 */

char __fastcall ACPILoadTableCheckSum(const __m128i *a1, unsigned int a2, __int64 a3, int a4)
{
  char v6; // di
  const __m128i *v7; // rbx
  int v8; // r8d
  unsigned int v9; // ecx
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-28h]

  v6 = 0;
  v7 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Bu,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
      a1,
      (_DWORD)a1 + a2 - 1);
  v8 = 0;
  v9 = 0;
  if ( !a2 )
    goto LABEL_12;
  if ( a2 >= 0x20 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v9 += 32;
      v10 = _mm_add_epi8(_mm_loadu_si128(v7), v10);
      v12 = _mm_loadu_si128(v7 + 1);
      v7 += 2;
      v13 = _mm_add_epi8(v12, v11);
      v11 = v13;
    }
    while ( v9 < (a2 & 0xFFFFFFE0) );
    v14 = _mm_add_epi8(v10, v13);
    v15 = _mm_add_epi8(v14, _mm_srli_si128(v14, 8));
    v16 = _mm_add_epi8(v15, _mm_srli_si128(v15, 4));
    v17 = _mm_add_epi8(v16, _mm_srli_si128(v16, 2));
    v6 = _mm_cvtsi128_si32(_mm_add_epi8(v17, _mm_srli_si128(v17, 1)));
  }
  if ( v9 < a2 )
  {
    v18 = a2 - v9;
    do
    {
      v6 += v7->m128i_i8[0];
      v7 = (const __m128i *)((char *)v7 + 1);
      --v18;
    }
    while ( v18 );
  }
  if ( !v6 )
LABEL_12:
    v8 = 1;
  ACPIAssert(v8, 8194, v8, a4);
  if ( !v6 )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = (_DWORD)a1 + a2 - 1;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0x1Cu,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
      a1,
      v20);
  }
  return 0;
}
