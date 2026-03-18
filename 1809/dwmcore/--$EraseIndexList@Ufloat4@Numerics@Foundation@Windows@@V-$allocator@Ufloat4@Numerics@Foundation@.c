/*
 * XREFs of ??$EraseIndexList@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@Particles@CParticleEmitter@@AEAAXAEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEBV?$vector@HV?$allocator@H@std@@@3@@Z @ 0x1801C3D04
 * Callers:
 *     ?EraseIndexList@Particles@CParticleEmitter@@QEAAXAEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C5C3C (-EraseIndexList@Particles@CParticleEmitter@@QEAAXAEBV-$vector@HV-$allocator@H@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall CParticleEmitter::Particles::EraseIndexList<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
        __int64 a1,
        _QWORD *a2,
        char **a3)
{
  char *v3; // r11
  __int64 v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i *result; // rax
  __m128i v9; // xmm1

  v3 = *a3;
  v4 = 0LL;
  v5 = (unsigned __int64)(a3[1] - *a3 + 3) >> 2;
  if ( *a3 > a3[1] )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *(int *)v3;
      ++v4;
      v7 = a2[1];
      v3 += 4;
      result = (__m128i *)(*a2 + 16 * v6);
      v9 = _mm_loadu_si128(result);
      *result = *(__m128i *)(v7 - 16);
      *(__m128i *)(v7 - 16) = v9;
      a2[1] -= 16LL;
    }
    while ( v4 != v5 );
  }
  return result;
}
