/*
 * XREFs of ndisXlatePMParametersToWakeUpEnableOid @ 0x1C0077D70
 * Callers:
 *     ndisPreSetPMParameters @ 0x1C0034E14 (ndisPreSetPMParameters.c)
 *     ndisOidPostEnableWakeUp @ 0x1C0073D20 (ndisOidPostEnableWakeUp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlatePMParametersToWakeUpEnableOid(__int64 a1)
{
  __m128i *v1; // r9
  __m128i v2; // xmm0
  unsigned int v3; // r8d
  int v4; // eax
  __int64 result; // rax

  v1 = *(__m128i **)(a1 + 40);
  v2 = _mm_srli_si128(*v1, 8);
  v3 = ((unsigned int)HIDWORD(v1->m128i_i64[0]) >> 1) & 1 | 2;
  if ( (v1->m128i_i64[0] & 0x100000000LL) == 0 )
    v3 = ((unsigned int)HIDWORD(v1->m128i_i64[0]) >> 1) & 1;
  v4 = v3 | 4;
  if ( (v2.m128i_i8[4] & 1) == 0 )
    v4 = v3;
  v1->m128i_i32[0] = v4;
  result = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 152) = result;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 32) = -50265850;
  return result;
}
