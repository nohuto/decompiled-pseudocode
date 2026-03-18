/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C00BA2E0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BA654 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIAssert @ 0x1C0023C30 (ACPIAssert.c)
 */

char __fastcall ACPILoadTableCheckSum(const __m128i *a1, unsigned int a2)
{
  char v4; // di
  const __m128i *v5; // rbx
  unsigned int v6; // r14d
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // eax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  __int64 v18; // rax
  __int64 v20; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = a1;
  v6 = a2 + (_DWORD)a1 - 1;
  WPP_RECORDER_SF_qD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x1Bu,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    a1,
    v6);
  v8 = 0;
  v9 = 0;
  if ( !a2 )
    goto LABEL_10;
  if ( a2 >= 0x20 )
  {
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v9 += 32;
      v10 = _mm_add_epi8(_mm_loadu_si128(v5), v10);
      v12 = _mm_loadu_si128(v5 + 1);
      v5 += 2;
      v13 = _mm_add_epi8(v12, v11);
      v11 = v13;
    }
    while ( v9 < (a2 & 0xFFFFFFE0) );
    v14 = _mm_add_epi8(v10, v13);
    v15 = _mm_add_epi8(v14, _mm_srli_si128(v14, 8));
    v16 = _mm_add_epi8(v15, _mm_srli_si128(v15, 4));
    v17 = _mm_add_epi8(v16, _mm_srli_si128(v16, 2));
    v4 = _mm_cvtsi128_si32(_mm_add_epi8(v17, _mm_srli_si128(v17, 1)));
  }
  if ( v9 < a2 )
  {
    v18 = a2 - v9;
    do
    {
      v4 += v5->m128i_i8[0];
      v5 = (const __m128i *)((char *)v5 + 1);
      --v18;
    }
    while ( v18 );
  }
  if ( !v4 )
LABEL_10:
    v8 = 1;
  ACPIAssert(v8, 8194, v8, v7);
  if ( !v4 )
    return 1;
  LODWORD(v20) = v6;
  WPP_RECORDER_SF_qD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    6u,
    0x1Cu,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    a1,
    v20);
  return 0;
}
