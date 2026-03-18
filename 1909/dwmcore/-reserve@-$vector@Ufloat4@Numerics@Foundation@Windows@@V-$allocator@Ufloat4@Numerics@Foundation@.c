/*
 * XREFs of ?reserve@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1801A1D20
 * Callers:
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801A01A0 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate_exactly@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1801A1AB4 (-_Reallocate_exactly@-$vector@Ufloat4@Numerics@Foundation@Windows@@V-$allocator@Ufloat4@Numerics.c)
 */

unsigned __int64 __fastcall std::vector<Windows::Foundation::Numerics::float4>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  if ( a2 > result )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    return std::vector<Windows::Foundation::Numerics::float4>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
