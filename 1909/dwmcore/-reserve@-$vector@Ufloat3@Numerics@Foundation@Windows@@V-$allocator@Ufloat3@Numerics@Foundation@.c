/*
 * XREFs of ?reserve@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801A1CC8
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801A01A0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801A1A10 (-_Reallocate_exactly@-$vector@Ufloat3@Numerics@Foundation@Windows@@V-$allocator@Ufloat3@Numerics.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float3>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  if ( a2 > v2 / 12 )
  {
    if ( a2 > 0x1555555555555555LL )
      std::_Xlength_error((const char *)a1);
    return std::vector<Windows::Foundation::Numerics::float3>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
